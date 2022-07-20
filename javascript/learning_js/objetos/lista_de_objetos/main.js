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

console.log(`Tarefa que precisa ser concluida hoje: ${todos[1].description}`)