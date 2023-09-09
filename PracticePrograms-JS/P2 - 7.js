prompt("Enter 2 numbers whose sum will be between 100 and 200; There is no need for any input here");
var num1 = parseInt(prompt("Enter the first number: "));
var num2 = parseInt(prompt("Enter the second number: "));
var sum = num1 + num2;

if (sum > 100 && sum < 200) {
  alert("The sum of the numbers you inputed were between 100 and 200")
  
} else if(sum <= 100) {
  alert("The sum of the numbers entered is less than or equal to 100");

} else if(sum >= 200) {
  alert("The sum of the numbers entered is greater than or equal to 200");  
  
} else {
  alert("Invalid input, please try again");

}