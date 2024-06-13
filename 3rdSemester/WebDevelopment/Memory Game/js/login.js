/*acesso através da classe*/
const input = document.querySelector('.login_input');
const button = document.querySelector('.login_button');

/*criando funções com const, passando via arrow function, dessa forma eu consigo recuperar meu event - target, já fazendo desestructing*/
const validateInput =({ target }) => {
    if (target.value.lenght > 2) {
        button.removeAttribute('disable');
    }
}

/*sempre que a pessoa digitar algo no input, eu executo uma função*/
input.addEventListener('input', validateInput);
