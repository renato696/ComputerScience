//Seleciona os elementos HTML necessários para a manipulação
const grid = document.querySelector('.grid');
const spanPlayer = document.querySelector('.player');
const timer = document.querySelector('.timer');

//array contendo os personagens do jogo
const characters = ['heman', 'esqueleto', 'teela', 'maligna', 'mentor', 'homemFera', 'gorpo', 'mandibula', 'feiticeira', 'gatoGuerreiro'];


//função para criar uma nova carta
const createElement = (tag, className) => {
   
    const element = document.createElement(tag);
    element.className = className;
   
    return element;
}

//variaveis para armazenar a primeira e a segunda carta selecionada
let firstCard ='';
let secondCard ='';

//função para verificar fim do jogo
const checkEndGame = () => {
    const disableCards = document.querySelectorAll('.disable_card');

    if(disableCards.length == 20){
        clearInterval(this.loop);
        alert(`Parabens, ${spanPlayer.innerHTML}! Seu tempo foi: ${timer.innerHTML}`);
    }
}

//função para verificar se as duas cartas selecionadas são iguais
const checkCards = () => {
    
    const firstCharacter = firstCard.getAttribute('data-character');
    const secondCharacter = secondCard.getAttribute('data-character');

    if (firstCharacter == secondCharacter) {
        firstCard.firstChild.classList.add('disable_card');
        secondCard.firstChild.classList.add('disable_card');
        
        firstCard = '';
        secondCard = '';

        checkEndGame();
    } else {
        setTimeout(() => {
            firstCard.classList.remove('reveal_card');
            secondCard.classList.remove('reveal_card'); 
            
            firstCard = '';
            secondCard = '';
        }, 500);
    };
};

//função para revelar a carta quando clicada
const revealCard = ({ target }) => {

    if (target.parentNode.className.includes('reveal_card')) {
        return
    }

    if (firstCard == ''){
        target.parentNode.classList.add('reveal_card');
        firstCard = target.parentNode;
    } else if (secondCard == ''){
        target.parentNode.classList.add('reveal_card');
        secondCard = target.parentNode;

        checkCards();
    }

    
}

//função para criar cartas do jogo
const createCard = (character) => {

    const card = createElement('div', 'card');
    const front = createElement('div', 'face front');
    const back = createElement('div', 'face back');

    front.style.backgroundImage = `url('../images/${character}.png')`;

    card.appendChild(front);
    card.appendChild(back);

    card.addEventListener('click', revealCard);
    card.setAttribute('data-character', character);

    return card;
}

//função para carregar o jogo duplicando as cartas
const loadGame = () => {

    const duplicateCharacters = [ ...characters, ...characters]; //spread operator

    const shuffledArray = duplicateCharacters.sort(() => Math.random() - 0.5);

    duplicateCharacters.forEach((character) => {
        
        const card = createCard(character);
        grid.appendChild(card);
    });

}

//função do temporizador
const startTimer = () => {
    this.loop = setInterval(() => {
        const currentTime = Number(timer.innerHTML);
        timer.innerHTML = currentTime + 1;
    }, 1000);
}

//função para carregar a página do jogo
window.onload = () => {
  
    spanPlayer.innerHTML = localStorage.getItem('player');
    startTimer();
    loadGame();
};

