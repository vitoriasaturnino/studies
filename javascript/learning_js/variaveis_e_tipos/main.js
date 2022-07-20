//Strigs

//length
const message = 'Hello world!'
console.log(message.length)

//concatenação de strings usando template strings
const firstName = "Vitória"
const lastName = "Moura"

console.log(`Olá, meu nome é ${firstName} ${lastName}`)

//toUpperCase e toLowerCase
console.log(`Olá, meu nome é ${firstName.toLowerCase()} ${lastName.toUpperCase()}`)

//split (tornando a string em lista)
const names = 'Vitória,Raphael,Fabinho'
//dentro dos paresenteses especifique qual caractere vai ser utilizado como parametro para o "corte"
console.log(names.split(','));

//Numbers

const number = 22

console.log(number)

//operações
console.log(number + 3)
console.log(number - 2)
console.log(number / 10)
console.log(number * 2)


//mudando e checando o tipo da variavel
console.log(number, typeof number.toString())

//Boolean
false 
true

console.log(2 + 2 == 4)
console.log(1 + 1 == 3)

//Null e Undefined

const x = null
const y = undefined

//list

const list = [1, 2, 3, 4, 5]

console.log(list)

//objetos
const object = {nome: 'Vitória', idade: 22}

console.log(object)


