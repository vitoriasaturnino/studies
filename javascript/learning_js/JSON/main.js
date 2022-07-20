const todos = [
  {
    id: 1,
    description: "Estudar JavaScript",
    is_completed: true
  },
  {
    id: 2,
    description: "Lavar Roupa",
    is_completed: false
  },
  {
    id: 3,
    description: "tomar banho",
    is_completed: false
  }
];

const todos_JSON = JSON.stringify(todos)
console.log(`Transformando a lista de objetos todos em JSON: ${todos_JSON}`);


console.log(`Transormendo o JSON em lista novamente: ${JSON.parse(todos_JSON)}`);