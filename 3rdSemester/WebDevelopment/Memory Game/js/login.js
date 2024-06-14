/*acesso através da classe*/
const input = document.querySelector('.login_input');
const button = document.querySelector('.login_button');
const form = document.querySelector('.login_form');

/*criando funções com const, passando via arrow function, dessa forma eu consigo recuperar meu event - target, já fazendo desestructing*/
const validateInput =({ target }) => {
    if (target.value.length > 3) {
        button.removeAttribute('disabled');
    } else {
        button.setAttribute('disabled', ''); //setAtribute precisa de dois parametros, entao, nesse caso, passo uma string vazia
    }
}

/*Em vez do else, eu posso usar return. Entao, se a função for válida no primeiro If ela ja sai pelo return, senão, continua a execução:
if (target.value.length > 3) {
        button.removeAttribute('disabled');
        return;
        } 
        
        button.setAttribute('disabled', '');
    }

*/

const handleSubmit = (event) => {
    event.preventDefault(); //evita recarregar a pagina, comportamento padrão

    localStorage.setItem('player', input.value); //setItem pede dois valores chave-valor, ele salva as informações do form em 127.0.0.1:5500

    window.location = 'pages/game.html'; //redireciona para a página do game
}

/*sempre que a pessoa digitar algo no input, eu executo uma função*/
input.addEventListener('input', validateInput);
form.addEventListener('submit', handleSubmit);