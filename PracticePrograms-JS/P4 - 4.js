var number = parseInt(prompt("Enter a number: "));

if(Number.isInteger(number)) {
  
  if(number > 0) {
    
    if(number % 2 === 0) {
      
      var sum = 0;
      number--;
      
      while(number > 0) {
        
        sum += number;
        number--;
        number--;
      }
      
      console.log("The sum of the odd numbers behind the input you entered is " + sum);
      
    } else {
  
        var sum = 0;

        while(number > 0) {
        
        sum += number;
        number--;
        number--;
      
      }
      
      console.log("The sum of the odd numbers behind the input you entered is " + sum);
      
    }
    
  } else {
    alert("Enter a number greater than 0");
    
  }
  
} else {
  alert("Enter a valid input");
  
}