var num1 = parseInt(prompt('Enter first number: '));
var num2 = parseInt(prompt('Enter second number: '));

if (num1 > num2) {
  alert(num1 + ' is bigger than ' + num2);
} else if (num2 > num1) {
  alert(num2 + ' is bigger than ' + num1);
} else if (num1 == num2) {
  alert(num1 + ' is equal to ' + num2);
} else {
  alert('Input not valid, please try again.');
}