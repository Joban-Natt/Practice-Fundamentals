const array = [2,3,3,4];
let counter = 0;
let x;

for(x=0;x < array.length;x++) {
    
  if(array[x] === 1 || array[x] === 4) {
    counter++;
    console.log(false);
    break;
  }
  
}

if(array.length === x && counter === 0) {
  console.log(true);
}