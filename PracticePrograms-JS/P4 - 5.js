var number = parseInt(prompt("Enter a positive integer: "));
var letter = prompt("Enter a letter: ");
var letterLength = letter.length;
var array = [];

if(letterLength <= 0) {
  alert("Please enter one letter");
  
} else if(number <= 0) {
  alert("Please enter a positive integer");

} else {
  
  for(x=0;x<number;x++) {
    array.push(letter);
  }
  
  for(x=0;x<number;x++) {
    console.log(array.join(" "));
  }
  
}