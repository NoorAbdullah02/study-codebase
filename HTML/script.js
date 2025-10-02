const express = require('express');
const app = express();
const fs = require('fs');

app.use(express.json());

// Serve the HTML file
app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});

// Save data to the server
app.post('/save-data', (req, res) => {
  const data = req.body;
  fs.writeFileSync('data.json', JSON.stringify(data));
  res.send('Data saved successfully');
});

// Load data from the server (not implemented in this example)
app.get('/load-data', (req, res) => {
  try {
    const data = JSON.parse(fs.readFileSync('data.json', 'utf8'));
    res.json(data);
  } catch (err) {
    res.status(500).send('Error loading data');
  }
});

app.listen(3000, () => {
  console.log('Server is running on port 3000');
});