prompt("Enter numbers between 1 and 10, or from the ranges of 2-9; There is no need for any input here");
var num1 = parseInt(prompt("Enter the first number: "));
var num2 = parseInt(prompt("Enter the second number: "));
var num3 = parseInt(prompt("Enter the third number: "));

if (num1 > 1 && num1 < 10 && num2 > 1 && num2 < 10 && num3 > 1 && num3 < 10) {
  
  if(num1 % 2 === 0 || num2 % 2 === 0 || num3 % 2 === 0){
    alert("One or more of the values you inputed are even");
  } else {
    alert("None of the values you inputed are even");
  }
  
} else if(!(num1 > 1 && num1 < 10)) {
  alert("The first value you inputed is not within the range, please try again");

} else if(!(num2 > 1 && num2)) {
  alert("The second value you inputed is not within the range, please try again");  
  
} else if(!(num3 > 1 && num3 < 10)) {
  alert("The third value you inputed is not within the range, please try again");
  
} else {
  alert("Invalid input, please try again");

}