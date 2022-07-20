//setando variaveis (clean code)
var nameInput = document.querySelector("#name");
var emailInput =  document.querySelector("#email");
var submitButton = document.querySelector("#submit-button");
var errorMessage = document.querySelector('.msg');
var items = document.querySelector('.items');

submitButton.addEventListener("click", (event) => {
  event.preventDefault();

  var nameValue = nameInput.value;
  var emailValue = emailInput.value;

  if (nameValue === '' || emailValue === '') {
    errorMessage.textContent = "Please fill out the fields";

    setTimeout(() => {
      errorMessage.textContent = "";
    }, 3000);

    return;
  }
  
  //criando um novo li para minha lista
  var li = document.createElement("li");
  li.classList = "item";
  li.textContent = `Nome: ${nameValue} | E-mail: ${emailValue}`;

  //add o filho li criado a minha lista
  items.appendChild(li);
   
  nameInput.value = "";
  emailInput.value = "";
});

