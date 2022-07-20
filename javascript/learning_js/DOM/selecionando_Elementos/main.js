//getElementById
console.log(document.getElementById('add-user'));

document.getElementById('add-user').innerText = "Adcionar usuário";

//querySelector pode selecionar o elemento tanto pelo id (#) quanto pela classes (.)
console.log(document.querySelector('#add-user'));

document.querySelector('#add-user').textContent = "Adcionar Usuário"

//com querrySelector posso selecionar um elemento dentro de outros elementos, por exemplo:
console.log(document.querySelector('.container #my-form')); 

//ainda que seja possivel selecionar elementos contidos dentro de outros elemetos o querySelector pega apenas um eleento

//Selecionando multiplos elementos com querySelectorAll
console.log(document.querySelectorAll('.item')); 
//isso retorna uma Node list, que pose ser acessada com todos os métodos de acesso a lista, por exemplo a navegação por indice

//getElementByClassName 
console.log(document.getElementsByClassName('item'));
// retorna uma HTMLCollection onde não é possível ter acesso a tantos métodos

console.log(document.getElementsByTagName('li'));
//também retorna ums HTMLCollection 