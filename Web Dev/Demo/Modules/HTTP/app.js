// const http = require("http")
// const server = http.createServer((request, response) =>
// {
//     response.writeHead(200, 'Content-type', 'text/html')
//     if(request.url == '/')
//     {
//         response.write('<h1> Welcome to Node.js! </h1>');
//     }
//     response.end();
// })

// server.listen(3000, () =>
// {
//     console.log("Listening to port 3000");
// })



const http = require("http")
const server = http.createServer((request, response) =>
{
    response.writeHead(200, 'Content-type', 'text/html');
    
    if(request.method == 'GET')
    {
        response.end('GET');
    }
    if(request.method == 'POST')
    {
        response.end('POST');
    }
    if(request.method == 'PUT')
    {
        response.end('PUT');
    }
    if(request.method == 'DELETE')
    {
        response.end('DELETE');
    }

    // response.write("<h1> Welcome to Node.js! </h1>");
    // response.end();
});

server.listen(3000, () =>
{
    console.log("Listening to port 3000 http://localhost:3000")
});



// const server2 = http.createServer((request, response) =>
// {
//     response.writeHead(200, 'Content-type', 'text/html');            // response.writeHead(200, {'Content-type':'text/html'});
//     response.write("<h1> Welcome to Node.js 2!! </h1>");
//     // response.write("<h3> My name is Bunny </h3>");
//     response.end();
// });

// server2.listen(4000, () =>
// {
//     console.log("Listening to port 3000 http://localhost:4000")
// });

