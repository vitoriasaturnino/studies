//objeto
const pessoas = {
  first_name: "Vitória",
  last_name: "Moura",
  age: 22,
  hobbies: ["Jogar", "Cantar", "Viajar"],
  //lista de objetos
  pet: [{
    nome: "Smile",
    age: 9
  }, {
    nome: "Fabinho",
    age: 1.7
  }]
};

// console.log(`Name: ${pessoas.first_name} ${pessoas.last_name}`);
// console.log(`Hobbie mais antigo: ${pessoas.hobbies[1]}`)

//destructuring assignment
const {first_name, last_name, age, hobbies} = pessoas;
