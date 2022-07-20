const sun = 2 + 7;

if(sun === 2){
  console.log("Sun é igual a 2!");
}else if(sun === 3){
  console.log("Sun é igual a 3!");
}else{
  console.log("Sun NÃO é igual a 2!");
}

// condicionais com && e ||
const sun1 = 10;
const sun2 = 14;

// && and
if(sun1 === 10 && sun2 === 13){
  console.log(`Sun1 é igual a ${sun1} e Sun2 é igual a ${sun2}`);
}
// || or
if(sun1 === 10 || sun2 === 13){
  console.log(`Sun1 é igual a 10 ou Sun2 é igual a 13`);
}

// ternary operator
let number;

if(sun === 3){
  number = 3;
}else{
  number = 5;
}
console.log(`-Number com if normal= ${number}`);

//este if acima pode ser escrito da seguinte forma 
number = sun === 3 ? 3 : 10;
console.log(`-Number com if ternário= ${number}`)