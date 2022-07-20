class Person {
  constructor(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
  }

   getFullName() {
   console.log(`${this.firstName} ${this.lastName}`);
  }

  static speak() {
    console.log("Hello!");
  }
}

const person_1 = new Person("Vitória", "Moura", 22);

const person_2 = new Person("Raphael", "Santos", 24);

person_1.getFullName();

//exemplo de herança
class Animal {
  constructor(name) {
    this.name = name;
  }

  speak() {
    console.log(`${this.name} made some noise!`);
  }
}

//a class Cat é uma herança de Animal
class Cat extends Animal{
  constructor(name) {
    //super chama o constructor lá da classe animal
    super(name);
  }

  speak() {
    console.log(`${this.name} meow!`);
  }
}

const cat = new Cat("Fabinho");
cat.speak();

