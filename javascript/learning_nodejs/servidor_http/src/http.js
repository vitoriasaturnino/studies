const http = require("http");
const port = 8080;

const server = http.createServer((req, res) => {
  if (req.url === "/home") {
    //status code e headers da response
    req.writeHead(200, { "Contet-Type": "text/html" });
    res.end("<h1>Home Page</h1>");
  }
});

server.listen(port, () =>
  console.log(`Servidor rodadno. acesse hppt://localhost:${port}`)
);
