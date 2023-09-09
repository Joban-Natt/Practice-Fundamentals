const array = ['a51', '5b', '5hj', '9mD'];
let wrong = 0;

for(x=0; x < array.length;x++) {
  
  if(array[x].length !=3) {
    wrong++;
  }
}

console.log(wrong);