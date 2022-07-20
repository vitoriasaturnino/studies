var items = document.querySelector('.items');

// items.remove();

//firstElementChild pega o primeiro filho da ista 
// items.firstElementChild.remove();  
// items.lastElementChild.remove();  

//mudando o texto do 1 item
items.children[1].textContent = "Item Um"

//com innetHTML podemos digitar literalmente um código HTML
items.children[1].innerHTML = '<h1>Hello World!</h1>'
