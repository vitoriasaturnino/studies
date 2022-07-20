//método map
const numbers_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const numbers_multiplied_for_two = numbers_list.map(function(items){
  return items * 2;
});

// console.log(`Tabuada do dois usando o map: ${numbers_multiplied_for_two}`);

//método filter
const ages_list = [8, 9, 13, 49, 66, 22, 31, 33, 24];

const even_ages = ages_list.filter(function(age){
  return age % 2 === 0;
});

// console.log(`Pegando somente as idades pares da lista com o método filter: ${even_ages}`);

//reduce
const new_numbers_list = [85, 51, 55, 01, 41, 35];

const soma_dos_itens = new_numbers_list.reduce(function(item, accumulator){
  return accumulator + item;
}, 0);

console.log(`A soma de todos os números é = ${soma_dos_itens}`);