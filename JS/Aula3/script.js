
function calcIdade() {
    let sexom = document.getElementById('sexom')
    let sexof = document.getElementById('sexof')
    let pegaano = document.querySelector('input#date')
    let data = new Date()
    let ano = data.getFullYear()
    let idade = ano - Number(pegaano.value)
    let res = document.querySelector('div.res')
    

    if (Number(pegaano.value) <= 0 || Number(pegaano.value) > ano) {
        alert('Erro 404')
    }
    else {
        let xsexo = document.getElementsByName('sexo')
        let genero = ''
        if(xsexo[0].checked){
            genero = 'homem'
        }else{
            genero = 'mulher'
        }
        
        res.innerHTML = `Sua idade é ${idade} e voce é ${genero}`
        if (idade < 18) {
            let image = document.getElementById('img2')
            image.style.display = 'block'
            image.style.zIndex = '101'
        }
        else if (idade >= 20 && idade < 50) {
            let image = document.getElementById('img3')
            image.style.display = 'block'
            image.style.zIndex = '100'
        } else {
            let image = document.getElementById('img4')
            image.style.display = 'block'
            image.style.zIndex = '102'
        }
    }


}
