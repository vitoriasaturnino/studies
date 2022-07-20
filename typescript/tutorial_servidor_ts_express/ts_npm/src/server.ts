import express from "express";

const app = express();

app.get('/', (req, res) => {
  return res.send('Hello Word! with npm');
})

app.listen(3334);