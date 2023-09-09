var number = parseInt(prompt("Enter a random integer between 1 & 7: "));

if(number <=7 && number >= 1) {
   
  switch(number) {
    case 1:
      alert("Sunday");
      break;
    case 2:
      alert("Monday");
      break;
    case 3:
      alert("Tuesday");
      break;
    case 4:
      alert("Wednesday");
      break;
    case 5:
      alert("Thursday");
      break;
    case 6:
      alert("Friday");
      break;
    case 7:
      alert("Saturday");
      break;
  }
  
} else {
  
  alert("Please enter a valid input");
  
}