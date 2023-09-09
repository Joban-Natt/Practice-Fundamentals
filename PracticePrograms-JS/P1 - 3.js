var weight = parseInt(prompt("Put in a weight in pounds: "));

if (265 >= weight && weight >= 205) {
  alert('Heavyweight');
  
} else if (204 >= weight && weight >= 185) {
  alert('Light Heavyweight');
  
} else if (184 >= weight && weight >= 170) {
  alert('Middleweight');
  
} else if (169 >= weight && weight >= 155) {
  alert('Welterweight');
  
} else if (154 >= weight && weight >= 145) {
  alert('Lightweight');
  
} else if (weight < 145) {
  alert('Featherweight');
  
} else if (weight > 265) {
  alert('Overweight');
  
} else {
  alert('Input is not valid, please try again');
  
}