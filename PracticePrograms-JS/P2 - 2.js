var age = parseInt(prompt("Enter your age: "));

if(age >= 18) {
  alert("You are old enough to vote");
} else if(age < 0) {
  alert("Invalid number, please try again");
} else {
  alert("You are NOT old enough to vote");
}