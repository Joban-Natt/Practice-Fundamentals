var num1 = parseInt(prompt('Enter first number: '));
var num2 = parseInt(prompt('Enter second number: '));
var num3 = parseInt(prompt('Enter third number: '));
var product = num1 * num2 * num3; 

if (product > 0) {
  alert("The sign is +");
} else if (product < 0) {
  alert("The sign is -");
} else if (product === 0) {
  alert("The sign is neither positive or negative, the output was 0");
} else {
  alert("Input is not valid")
}