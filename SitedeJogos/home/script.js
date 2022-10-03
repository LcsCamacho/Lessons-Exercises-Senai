
var img = document.querySelector('#img')
var backgroundDisplay = document.querySelector('.displaycard')
function horizon(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = '<h2>Horizon Zero Dawn</h2><br><p>R$ 199,90</p>'
    img.setAttribute('src', '../Assets/jogo01.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/horizon-bg.jpg')"
    
}
function farCry(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = '<h2>FarCry 6</h2><br><p>R$ 199,90</p>'
    img.setAttribute('src', '../Assets/jogo02.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/farcry-bg.jpg')"
}
function yoshi(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>Yoshi's Crafted World</h2><br><p>R$ 199,90</p>"
    img.setAttribute('src', '../Assets/jogo03.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/yoshi-bg.jpg')"
}
function tlou(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>The Last of Us</h2><br><p>R$ 299,90</p>"
    img.setAttribute('src', '../Assets/jogo04.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/img-jogo.jpg')"
}
function sotc(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>Shadow of The Colossus</h2><br><p>R$ 129,90</p>"
    img.setAttribute('src', '../Assets/jogo05.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/sotc-bg.jpg')"
}
function gow(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>God of War Ragnarok</h2><br><p>R$ 354,90</p>"
    img.setAttribute('src', '../Assets/jogo06.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    img.style.backgroundSize = 'cover'
    backgroundDisplay.style.backgroundImage = "url('../Assets/gowrag-bg.jpg')"
}
function demonsouls(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>Demon Soul's</h2><br><p>R$ 324,90</p>"
    img.setAttribute('src', '../Assets/jogo07.jpg')
    img.style.width = '100%'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/demonsouls-bg.webp')"
}
function b4b(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>Back 4 Blood</h2><br><p>R$ 324,90</p>"
    img.setAttribute('src', '../Assets/jogo08.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/b4b-bg.webp')"
}
function gtav(){
    let nameDisplay = document.querySelector('.name-display')
    nameDisplay.innerHTML = "<h2>Grand Thieft Auto</h2><br><p>R$199,90</p>"
    img.setAttribute('src', '../Assets/jogo09.jpg')
    img.style.width = '200px'
    img.style.height = '220px'
    backgroundDisplay.style.backgroundImage = "url('../Assets/gtav-bg.jpg')"
}
const products = [
    {
        id: 1,
        title: 'Horizon Zero Dawn',
        price: 'R$199.90',
        poster: 'jogo01.jpg',
        funcao: 'horizon()'
    },
    {
        id: 2,
        title: 'FarCry 6',
        price: 'R$199.90',
        poster: 'jogo02.jpg',
        funcao: 'farCry()'
    },
    {
        id: 3,
        title: 'Yoshi Crafted World',
        price: 'R$199.90',
        poster: 'jogo03.jpg',
        funcao: 'yoshi()'
    },
    {
        id:4,
        title: 'The Last of Us',
        price: 'R$299.90',
        poster: 'jogo04.jpg',
        funcao: 'tlou()'
    },
    {
        id:5,
        title: 'Shadow of The Colossus',
        price: 'R$129.90',
        poster: 'jogo05.jpg',
        funcao: 'sotc()'
    },
    {
        id:6,
        title: 'God of War Ragnarok',
        price: 'R$354.90',
        poster: 'jogo06.jpg',
        funcao: 'gow()'
    },
    {
        id:7,
        title: 'Demon Souls',
        price: 'R$324.90',
        poster: 'jogo07.jpg',
        funcao: 'demonsouls()'
    },
    {
        id:8,
        title: 'Back 4 Blood',
        price: 'R$224.90',
        poster: 'jogo08.jpg',
        funcao: 'b4b()'
    },
    {
        id:9,
        title: 'Grand Thieft Auto',
        price: 'R$199.90',
        poster: 'jogo09.jpg',
        funcao: 'gtav()'
    },
];

const listContainer = document.querySelector('.table-cards')
const busca = document.querySelector('#psq')
function render(product){
    let list = ''
    if(products.length < 0){
        list += `<div id="no-products">Nenhum produto disponivel</div>`
    }
    else{
        products.forEach((products,index) => {
            list+=`
            <div class="product" onclick="${products.funcao}">
                <div class="product-image">
                    <img src="../Assets/${products.poster}" alt="">
                </div>
                ${products.title} <br> ${products.price}
                <a href="#">
                    <div class="product-button" data-id="${product.id}">
                        Remove
                    </div>
                </a>
            </div>
            `;
        });
    }
    listContainer.innerHTML = list
}
render(products);
