import express from "express";

const app = express();

app.get('/', (req, res) => {
  return res.send('Hello Word! with Yarn');
})

app.listen(3335);