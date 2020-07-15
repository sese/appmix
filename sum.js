const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Please pass numbers ', (sNumbers) => {
  
    let list = sNumbers.split(' ')

    let sum = 0;
    for (let i = 0; i < list.length; i++) {
        let numb = parseInt(list[i]);
        if (isNaN(numb)) {
            continue;
        }
        sum += numb;
    }

    console.log(`Sum is ${sum}`);

  rl.close();
});

console.log("Done!!!!");