const array = [5,3,6,3];
let counter = 0;
let arrayLength = array.length;
let x;

for(x=0;x < array.length;x++) {
    
  if((array[x] === 3 && array[x-1] === 3) || (array[x] === 3 && array[x+1] === 3)) {
    console.log(false);
    break;
  }
    
  if(array[x] === 3) {    
      counter++; 
  }
  
  if(counter === array.length) {
    break;
  }
  
}

if(counter === 3) {
    console.log(true);
} 
  
if(counter != 3 && x === arrayLength) {
    console.log(false);
}