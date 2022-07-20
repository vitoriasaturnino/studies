let i;

for(i = 0; i <= 10; i++){
  console.log(`index: ${i}`)
};

const cars = ["Ferrari", "Tesla", "Mercedes"];

//iterando uma lista pelo indice
for(i = 0; i < cars.length; i++){
  console.log(`Indice ${i}: ${cars[i]}`);
};

//for of 
for(let car of cars){
  console.log(car);
};

//for Each (posso mostar também o indice de execução)
cars.forEach(function(car, index){
  console.log(index, car);
});

//for in (usado para iterar propriedades de um objeto)
const person = {
  jane: "Jane",
  age: 21
}

for(propertye in person){
  console.log(propertye);
}
//for in não é muito performatico