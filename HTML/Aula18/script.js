
var img = document.querySelector('#img')
var backgroundDisplay = document.querySelector('.displaycard')
function horizon(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = '<h2>Horizon Zero Dawn</h2><br><p>R$ 199,90</p><br>'
    img.setAttribute('src', './Assets/jogo01.jpg')
    img.style.width = '200px'
    img.style.height = '100%'
    backgroundDisplay.style.backgroundImage = "url('./Assets/horizon-bg.jpg')"
    
}
function farCry(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = '<h2>FarCry 6</h2><br><p>R$ 199,90</p><br>'
    img.setAttribute('src', './Assets/jogo02.jpg')
    img.style.width = '200px'
    img.style.height = '100%'
    backgroundDisplay.style.backgroundImage = "url('./Assets/farcry-bg.jpg')"
}
function yoshi(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>Yoshi's Crafted World</h2><br><p>R$ 199,90</p><br>"
    img.setAttribute('src', './Assets/jogo03.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('./Assets/yoshi-bg.jpg')"
}
