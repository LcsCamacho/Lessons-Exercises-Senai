function tabuada(){

    let numero = Number(document.querySelector('#numero').value)
    let mostraTab = document.querySelector('#resultado')
    if(numero == null){
        alert('Digite um numero')
    }
    else{
        mostraTab.innerText = ''
        for( let i = 0 ; i <= 10 ; i++ ){
            let item = document.createElement('option')
            item.text = `${numero} x ${i} = ${numero*i}`
            mostraTab.appendChild(item)
        }
    }
    
    
}