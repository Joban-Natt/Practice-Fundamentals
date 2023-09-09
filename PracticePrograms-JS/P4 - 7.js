var number = parseInt(prompt("Enter a number between 1 and 20: "));
var factors = [];

if(number >= 20 || number <= 1) {
  alert('Please enter a valid number');
} else {
  
  for(x=1;x<=number;x++) {
    
    if(number % x === 0) {
      factors.push(x);
    }
    
  }
  
  console.log("The factors are " + factors)
  
}