const http = require('http')
const server = http.createServer((request, response) => {

    response.writeHead(200, {"Content-type" : "text/html"});

    if (request.url == '/get') {
        response.write("You have reached the get page\n");
        if (request.method == 'GET') {
            response.end("GET");
        }
    }
    
    else if (request.url == '/post') {
        response.write("You have reached the post page\n");
        if (request.method == 'POST') {
            response.end("POST");
        }
    }

    else if (request.url == '/put') {
        response.write("You have reached the put page\n");
        if (request.method == 'PUT') {
            response.end("PUT");
        }
    }
    else if (request.url == '/delete') {
        response.write("You have reached the delete page\n");
        if (request.method == 'DELETE') {
            response.end("DELETE");
        }
    }

    else {
        response.end("None found")
    }
    
    // response.end("<h2> Welcome to Node.js</h2>");

});

server.listen(3050, () => {
    console.log("http://localhost:3050")
});

// const server2 = http.createServer((request, response) => {

//     response.writeHead(200, {"Content-type" : "text/html"});
//     // response.write("<h2> Welcome to Node.js</h2>");
//     response.end("<h2> Welcome to Node.js!!!!</h2>");

// });

// server2.listen(3000, () => {
//     console.log("http://localhost:3000")
// });