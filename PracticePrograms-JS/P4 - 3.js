var m = parseInt(prompt("Enter the first positive integer: "));
var n = parseInt(prompt("Enter the second positive integer: "));

if(m <= 0 || n <= 0) {
  alert("Please enter a valid input for both values");
  
} else if(m > n) {
  
  var sum = 0;
  
  while(m >= n) {
    sum += m;
    m--;
    
    if(m < n) {
      break;
    }
  }
  
  console.log("The sum of the range of the values you entered is " + sum);
  
} else if(m === n) {
  var sum = m+n;
  alert("The sum of the values you entered is " + sum);
  
} else {
  
  var sum = 0;
  
  while(n >= m) {
    sum += n;
    n--;
    
    if(n < m) {
      break;
    }
  }
  
  console.log("The sum of the range of the values you entered is " + sum);
  
}