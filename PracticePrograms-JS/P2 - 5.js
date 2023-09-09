var grade = parseInt(prompt("Enter your grade: "));

if(grade < 0) {
  alert("If your grade is really less than 0, than you are a failure, otherwise please input the correct grade");
} else if(grade > 100) {
  alert("You are some sort of genius");
} else if(grade <= 100 && grade >= 80) {
  alert("Great job, you got an A!");
  
} else if(grade <= 79 && grade >= 70) {
  alert("Close cut, you got a B");

} else if(grade <= 69 && grade >= 60) {
  alert("Damn, you're pretty average, you got a C");

} else if(grade <= 59 && grade >= 50) {
  alert("You're kinda struggling, try harder cause you got a D");

} else if(grade <= 49 && grade >= 0) {
  alert("Bro you're failing, you got an F");

} else {
  alert("Invalid input, try again");
}