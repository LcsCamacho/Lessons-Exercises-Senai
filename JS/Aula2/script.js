let a = window.document.getElementsById('area')
a.addEventListener('click', clicar)
a.addEventListener('mouseenter', entrar)
a.addEventListener('mouseout', sair)

function clicar() {
    a.innerText = 'clicou!'
    a.style.background = 'red'
}