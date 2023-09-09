var num1 = parseInt(prompt("Enter the first number: "));
var num2 = parseInt(prompt("Enter the second number: "));
var num3 = parseInt(prompt("Enter the third number: "));
var product = num1*num2;

if(product === num3) {
  alert("The product between " + num1 + " and " + num2 + " is equal to " + num3);
} else {
  alert("The product between " + num1 + " and " + num2 + " is NOT equal to " + num3);  
}