var today = new Date();
var properTime = today.getHours() + ":" + today.getMinutes() + ":" + today.getSeconds();
var time = today.getHours()

console.log(properTime);

if (time < 10) {
  console.log('GOOD MORNING!');
} else if (time >= 14 && time <= 17) {
  console.log('GOOD AFTERNOON');
} else if (time > 17) {
  console.log('GOOD EVENING!');
} else {
  console.log('Good Day!');
}
