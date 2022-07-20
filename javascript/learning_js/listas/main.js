//navegando pela lista
const names = ['Vitória', 'Raphael', 'Fabinho', 22, false]

const gatinho = names[2]

console.log(gatinho)

//remoção do último elemento da lista
names.pop()
names.pop()

console.log(names)

//remoção de um ítem expecifico
pos = 1
names.splice(pos, 1)

console.log(names)

//add item 
//adicionando no final
names.push("Carlos")
//adicionando no inicio
names.unshift("Verônica")

console.log(names)

//alrerando valor de um elemento
names[3] = "Smile"

console.log(names)

//descobrindo indce de um elemento pelo valor
console.log(names.indexOf('Vitória'))

//ordenando lista por ordem alfabetica
console.log(names.sort())

//tamanho da lista
console.log(names.length)

//verificando se a minha variavel é um array/list
console.log(Array.isArray(names))
