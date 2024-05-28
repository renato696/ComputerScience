const header = document.querySelector('#header');

// header fixed
window.addEventListener('scroll', () => {
  if (window.scrollY > 0) {
    header.classList.add('fixed');
  } else {
    header.classList.remove('fixed');
  }
});

const navLinks = document.querySelectorAll('.nav-link');

navLinks.forEach((navLink) => {
     navLink.addEventListener('click', (e) => {
     // reseta o estilo de todos os links
     e.preventDefault();

     // pega o href do link clicado
     const target = e.target.getAttribute('href');

     // pega o elemento que o href se refere
     const targetElement = document.querySelector(target);

     // faz o scroll suave até o elemento
     window.scrollTo({
          top: targetElement.offsetTop - header.offsetHeight, // subtrai a altura do header
          behavior: 'smooth', // scroll suave
     });
     });
});

const contato = document.querySelector('#contato form');

contato.addEventListener('submit', (e) => {
     e.preventDefault(); // previne o comportamento padrão do form

     const nome = e.target.querySelector('[name="nome"]').value; 

     alert(`Olá, ${nome}! Mensagem enviada com sucesso!`);

      e.target.reset();
});

