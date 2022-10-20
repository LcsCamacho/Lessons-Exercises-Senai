
let i = 0, j = 0
var soma = 0
var menor = 1000
var maior = 0
let mostraCalc = document.querySelector('.calculos')
var igual = 0
function validaNumero(n) {
    if (Number(n) >= 1 && Number(n) <= 100) {
        return true
    } else {
        return false
    }
}
var resultado = []
function adicionar() {
    mostraValor = document.querySelector('#resultado')
    var numero = Number(document.querySelector('#numero').value)
    a = document.querySelector('#numero')
    if (resultado.length == 0) {
        resultado[i] = numero
        alert("Adicionou o 1 numero ao Array")
    } else {
        for (let j = 0; j <= resultado.length; j++) {
            if (numero == resultado[j]) {
                console.log("testou positivo para numeros iguais\n numero = " + numero)
                igual = 1
            } else if (igual == 0) {
                resultado[i] = numero
                i++
            }
        }
    }

    console.log('Tamanho do Array = ' + resultado.length)
    if (validaNumero(numero)&& igual == 0) {
        let item = document.createElement('option')
        item.text = `Valor ${numero} adicionado.`
        j++
        a.value = ''
        a.focus()
        mostraValor.appendChild(item)
        for (let m in resultado) {
            soma += resultado[m]
            if (resultado[m] < menor) {
                menor = resultado[m]
            }
            if (resultado[m] > maior) {
                maior = resultado[m];
            }
        }
        mostraValor.value = ''
        mostraValor.focus()
        mostraCalc.innerHTML = ''
    }
    else {
        alert('Numero ja se encontra na lista ou é invalido')
    }
}

function finalize() {
    if (resultado.length == 0) {
        alert('adicione valores para finalizar')
    } else {
        mostraCalc.innerHTML = ``
        mostraCalc.innerHTML = `
        Ao todo temos ${resultado.length} numeros cadastrados <br>
        O menor é ${menor}<br>
        O maior é ${maior}<br>
        Somando todos, o resultado é ${soma}<br>
        A media é ${soma / resultado.length}
        `
    }
}