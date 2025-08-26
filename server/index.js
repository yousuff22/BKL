const express = require('express');

const app = express();

app.get('/', (req, res) => {
    return res.json({
        "Express": "Hello from server"
    })
})
app.get('/sign-in', (req, res) => {
    return res.json({
        "Express": "Hello from server Sign in"
    })
})

app.listen(8000, ()=>{
    console.log("Server is running on port 8000!")
})