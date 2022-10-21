function apenasNumeros(string) {
    var numsStr = string.replace(/[^0-9]/g, '');
    return parseInt(numsStr);
}

function validaNumero(valorSal,qtdMeses) {
    if (valorSal <= 0 || qtdMeses <= 0){
        return false;
    }
    else{
        return true;
    } 
}
function calcular() {
    valorSal = Number(document.querySelector('#valorSal').value)
    stringContas = document.querySelector('#valorContas').value
    qtdMeses = Number(document.querySelector('#qtdMeses').value)
    valorContas = apenasNumeros(stringContas)
    mostraCalc = document.querySelector('.calculos')
    alert(valorContas)
    alert(valorSal)
    alert(mostraCalc)
    valorSal.InnerText = ''
    stringContas.InnerText  = ''
    qtdMeses.InnerText = ''
    mostraCalc.InnerHTML = `<p>Valor ${valorSal} = salário.
                    ${stringContas}
                    <br>

                    </p>
                    `
    // if (validaNumero(valorSal,qtdMeses)) {
    //     alert('oi')
        
    // }
}