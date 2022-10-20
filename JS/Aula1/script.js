
var nome = window.prompt('qual e seu nome')
window.alert('oi ' + nome)

//conversores de string para numeros
var n1 = Number.parseInt(window.prompt('Digite um numero'))
var n2 = parseInt(window.prompt('Digite um numero'))
var n3 = Number(window.prompt('Digite um numero'))
var n4 = parseFloat(window.prompt('Digite um numero com virgula'))
var s = n1 - n2
window.alert(s)

//conversores de numeros para string
var nome1 = String(window.prompt('Digite um nome'))
var nome2 = (window.prompt('Digite um nome')).toString()
var nomeinteiro = nome1 + nome2
window.alert(nomeinteiro)

//alternativo de concatenaçao 
window.alert(`a soma de ${n1}+${n2}+${n3}+${n4} é = ${s}`)

//adicionar casas decimais e trocar ponto por virgula
document.write(n1.toFixed(2).replace('.', ','))

//saida em moedas
document.writeln(s.toLocaleString('pt-BR', { style: 'currency', currency: 'BRL' }))


