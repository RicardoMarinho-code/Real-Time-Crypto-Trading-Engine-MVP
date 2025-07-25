// dashboard/index.js
const express = require('express');
const http = require('http');
const WebSocket = require('ws');

const app = express();
const server = http.createServer(app);
const wss = new WebSocket.Server({ server });

app.get('/', (req, res) => res.sendFile(__dirname + '/index.html'));

wss.on('connection', ws => {
  console.log('Dashboard conectado!');
  // Simula o envio de dados de trade para o frontend a cada 3 segundos
  setInterval(() => {
    const fake_trade = { type: Math.random() > 0.5 ? 'BUY' : 'SELL', price: 54000 + Math.random() * 1000 };
    ws.send(JSON.stringify(fake_trade));
  }, 3000);
});

server.listen(8080, () => console.log('Dashboard rodando em http://localhost:8080'));