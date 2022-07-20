var submit_botton = document.querySelector("#submit-button");
var nameInput = document.querySelector("#name");
var emailInput = document.querySelector("#email");
var items =  document.querySelector(".items")

submit_botton.addEventListener("click", function(event) {
  event.preventDefault();

  var nameValue = nameInput.value;
  var emailValue =  emailInput.value;

  if (nameValue === "" || emailValue === "") {
    alert("Por favor, preencha todos os campos!");
  }

  console.log(nameValue, emailValue);
  console.log("clicked!");

  items.firstElementChild.textContent = nameValue;
  items.children[1].textContent = emailValue;
});

nameInput.addEventListener("change", function(event) {
  console.log(event.target.value);
});