var positiveInteger = parseInt(prompt("Enter a positive integer: "));
console.log("You inputed: " + positiveInteger)

if(positiveInteger <= 0) {
  alert("Please enter a valid number");
  
} else {
  alert("You will enter the same amount of numbers as the value you inputed before");
  
  var sum = 0;
  var counter = 1;
  var adder = 0; 
  
  while(counter <= positiveInteger) {
    adder = parseInt(prompt("Enter number " + counter + ": "));
    sum += adder;
    counter++;
    
  }
  
  console.log("The sum of the numbers is " + sum);
} //Need to fix