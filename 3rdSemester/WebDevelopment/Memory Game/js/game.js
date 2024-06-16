const grid = document.querySelector('.grid');

const characters = ['heman', 'esqueleto', 'teela', 'maligna', 'mentor', 'homemFera', 'gorpo', 'mandibula', 'feiticeira', 'gatoGuerreiro'];


/*função para criar uma nova carta*/
const createElement = (tag, className) => {
    const element = document.createElement(tag);
    element.className = className;
    return element;
}


const createCard = (character) => {

    const card = createElement('div', 'card');
    const front = createElement('div', 'face front');
    const back = createElement('div', 'face back');

    front.style.backgroundImage = `url('../images/${character}.png')`;

    card.appendChild(front);
    card.appendChild(back);

    return card;
}

const loadGame = () => {

    const duplicateCharacters = [ ...characters, ...characters]; //spread operator

    duplicateCharacters.forEach((character) => {
        
        const card = createCard(character);
        grid.appendChild(card);
    });

}

loadGame();