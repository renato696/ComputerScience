const grid = document.querySelector('.grid');

const characters = ['heman', 'esqueleto', 'teela', 'maligna', 'mentor', 'homemFera', 'gorpo', 'mandibula', 'feiticeira', 'gatoGuerreiro'];


/*função para criar uma nova carta*/
const createElement = (tag, className) => {
   
    const element = document.createElement(tag);
    element.className = className;
   
    return element;
}

let firstCard ='';
let secondCard ='';

const checkEndGame = () => {
    const disableCards = document.querySelectorAll('.disable_card');

    if(disableCards.length == 20){
        alert('You WIN');
    }
}

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

const loadGame = () => {

    const duplicateCharacters = [ ...characters, ...characters]; //spread operator

    const shuffledArray = duplicateCharacters.sort(() => Math.random() - 0.5);

    duplicateCharacters.forEach((character) => {
        
        const card = createCard(character);
        grid.appendChild(card);
    });

}

loadGame();