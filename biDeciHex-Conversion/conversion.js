let input;
let output;
let num;

function decimalBinaryConvertor() {

    let output = [];

    document.getElementById("output").value = output;


    input = parseInt(document.getElementById("input").value);
    
    for (i=0;i>=0;i++) {

        output[i] = input%2

        input = Math.floor(input/2);

        if (input === 0) {
            break;
        }
    }

    document.getElementById("output").value = output.reverse().join("");
}

function binaryDecimalConvertor() {

    let output = 0;

    document.getElementById("output").value = output;

    input = document.getElementById("input").value;

    let split = input.split("");

    let reverse = split.reverse();

    for(i=0; i<input.length; i++) {
        
        let num = parseInt(reverse[i])

        output += num * (2 ** i);

    }
    
    document.getElementById("output").value = output;
    
}

function decimalHexaConvertor() {

    output = [];

    document.getElementById("output").value = output;

    input = parseInt(document.getElementById("input").value);

    for (i=0;i>=0;) {
        
        input%16

        if(input%16 <= 9) {
            output.push(input%16)
        } else if (input%16 === 10) {
            output.push("A")
        } else if (input%16 === 11) {
            output.push("B")
        } else if (input%16 === 12) {
            output.push("C")
        } else if (input%16 === 13) {
            output.push("D")
        } else if (input%16 === 14) {
            output.push("E")
        } else if (input%16 === 15) {
            output.push("F")
        }

        input = Math.floor(input/16);

        if (input === 0) {
            break;
        }
    }
    document.getElementById("output").value = output.reverse().join("");
}

function hexaDecimalConvertor() {

    let output = 0;

    document.getElementById("output").value = output;

    input = document.getElementById("input").value;

    let split = input.split("");

    let reverse = split.reverse();

    for(i=0; i<input.length; i++) {

        if(Number.isInteger(parseInt(reverse[i]))) {

            num = parseInt(reverse[i]);

        } else if (reverse[i] === "A") {
            num = 10
        } else if (reverse[i] === "B") {
            num = 11
        } else if (reverse[i] === "C") {
            num = 12
        } else if (reverse[i] === "D") {
            num = 13
        } else if (reverse[i] === "E") {
            num = 14
        } else if (reverse[i] === "F") {
            num = 15
        }

        output += num * (16 ** i);

    }
    
    document.getElementById("output").value = output;
    
}
