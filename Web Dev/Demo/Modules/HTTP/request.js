const http = require('http')
const data = JSON.stringify({
    title : "MEAN Stack"
})

const request = http.request(options, Response =>
    {
        Response.on('data', chunk => {
            ProcessingInstruction.stdout.write(chunk);
        })
    }
)
request.om('error', error =>
{
    console.error(error)
})

request.end();