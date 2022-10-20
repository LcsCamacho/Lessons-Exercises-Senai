
function contador() {
    //jeito simples e didatico
    let recebeInicio = document.querySelector('#inicio')
    let inicio = Number(recebeInicio.value)
    //jeito eficiente
    let fim = Number(document.querySelector('#fim').value)
    let tamPassos = Number(document.querySelector('#passo').value)
    let resultado = document.querySelector('.resultado')
    if (fim == 0 || tamPassos == 0 || inicio == 0) {
        alert('Erro nos dados inseridos. considerar padrão')
        inicio = 0
        fim = 5
        tamPassos = 1
        for (let i = inicio; i <= fim; i = i + tamPassos) {
            console.log(i)
            resultado.innerHTML += `<p>${i} \u{1F449} </p>`
        }
        resultado.innerHTML += `<p>\u{1F3C1} </p>`
    } else {
        if(i<fim){
            for (let i = inicio; i <= fim; i += tamPassos) {
                resultado.innerHTML += `<p>${i} \u{1F449} </p>`
                console.log(i)
            }
        }
        else{
            for (let i = inicio; i >= fim; i -= tamPassos) {
                resultado.innerHTML += `<p>${i} \u{1F449} </p>`
                console.log(i)
            }
        }
        resultado.innerHTML += `<p>${i} \u{1F3C1} </p>`
    }
}
