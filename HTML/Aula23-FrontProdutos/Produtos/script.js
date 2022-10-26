// Array de objetos contendo os atributos dos produtos
const products = [
    {
        img: 'access.png',
        id: 1,
        qtd: 8,
        date: dataFormatter(),
        name: 'Servidor Escola MX203ITAUTEC',
        preco: '22501.08'
    },
    {
        img: 'access.png',
        id: 2,
        qtd: 6,
        date: dataFormatter(),
        name: 'Servidor Escola MX203ITAUTEC',
        preco: '22501.08'
    },
    {
        img: 'access.png',
        id: 3,
        qtd: 1,
        date: dataFormatter(),
        name: 'Servidor Escola MX203ITAUTEC',
        preco: '22501.08'
    },
    {
        img: 'access.png',
        id: 4,
        qtd: 2,
        date: dataFormatter(),
        name: 'Servidor Escola MX203ITAUTEC',
        preco: '22501.08'
    },
    {
        img: 'access.png',
        id: 5,
        qtd: 5,
        date: dataFormatter(),
        name: 'Servidor Escola MX203ITAUTEC',
        preco: '22501.08'
    },
];

// Formatador para adicionar o R$
const formatter = Intl.NumberFormat('pt-BR', {
    style: 'currency',
    currency: 'BRL',
    maximumFractionDigits: 2,
})

//Formatador de data
function dataFormatter() {
    const data = new Date()
    let dia = data.getDate()
    let mes = data.getMonth() + 1
    let ano = data.getFullYear()
    return dia + "/" + mes + "/" + ano
}

//Demonstrador de produtos
function render(product) {
    const listProducts = document.querySelector('.listProducts')
    let list = ''
    products.forEach((products, index) => {
        list += `
        <div class="product">
            <div class="product-image">
                <img src="../Assets/${products.img}" width="100px">
            </div>
            <div class="products-list">
                <p>${products.id}</p>
                <p>${products.qtd}</p>
                <p>${products.date}</p>
                <p>${products.name}</p>
                <p>${formatter.format(products.preco)}</p>
            </div>
            <div class="remove">
                <img src="../Assets/apagar.png" id="apagar" data-remove="${products.id}">
            </div>
        </div>
        `
    })
    listProducts.innerHTML = list
}
//Abrir o modal
function modalDisplay() {
    document.querySelector('.modal').style.display = 'block'
}

//Fechar o modal
function fecharModal() {
    document.querySelector('.modal').style.display = 'none'
}

//Recebe novos produtos
function novosProdutos() {
    var id = Number(document.querySelector('#NI').value)
    var qtdComprada = Number(document.querySelector('#aq').value)
    var nameProd = document.querySelector('#den').value
    var val = Number(document.querySelector('#val').value)
    var img = document.querySelector('#img').value

    const newProducts = {
        img: '../Assets/' + img,
        id: id,
        qtd: qtdComprada,
        date: dataFormatter(),
        name: nameProd,
        preco: val,
    }
    return products.push(newProducts)
}

//limpar inputs
function limparInputs() {
    document.querySelector('#NI').value = ''
    document.querySelector('#aq').value = ''
    document.querySelector('#den').value = ''
    document.querySelector('#val').value = ''
    document.querySelector('#img').value = ''
}

//Cadastrar novos produtos
function cadNewProd() {
    novosProdutos()
    render(products)
    limparInputs()
}

//coletar o ID para remover
document.body.addEventListener('click', function (event) {
    event.preventDefault()

    const productId = event.target.getAttribute('data-remove')
    if (productId) {
        removeProduct(productId)
    }
    
})

//remover produtos
function removeProduct(productId) {
    const index = products.findIndex((product) => {
        return +product.id === +productId
    })
    if(index > -1) {
        products.splice(index,1)
        render(products)
    }
}

//chamada para demonstrar os produtos
render(products)





