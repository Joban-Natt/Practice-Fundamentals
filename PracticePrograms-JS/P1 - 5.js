var day = prompt('Enter the day');

if (day === 'Friday') {
  console.log('Have a Beautiful Weekend!');

} else if (day === 'Sunday') {
  console.log('Have a nice Sunday!');

} else if (day === 'Monday' || day === 'Tuesday' || day === 'Wednesday' || day === 'Thrusday' || day === 'Saturday') {
  console.log('Have a nice day!');

} else {
  console.log('Stop trolling and please enter a day!');
}