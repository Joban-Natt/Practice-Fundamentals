var num = parseInt(prompt("Enter a number: "));
var squareRoot = Math.sqrt(num);

if(num % squareRoot === 0) {
  alert(num + " is a perfect square");
} else if(num < 0) {
  alert(num + " is a negative number, you cannot find the square root of that, please try again");  
} else {
  console.log(num + " is NOT perfect square")
}