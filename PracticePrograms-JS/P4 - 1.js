var name = prompt("Enter your name: ");
var number = parseInt(prompt("Enter a random positive integer: "));

if(number <= 0) {
  alert("Invalid input, please try again");
  
} else {
  
  for(x=0;x < number;x++) {
    console.log(name);
  }
  
}