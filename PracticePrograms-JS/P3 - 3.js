const arrayA = [1, 5, 12, 7, 8];
const arrayB = [3, 5, 1, 7, 8];

let numberMatching = 0;

for (let i = 0; i < arrayA.length; i++){
 
  if (arrayA[i] === arrayB[0] || arrayA[i] === arrayB[1] || arrayA[i] === arrayB[2] || arrayA[i] === arrayB[3] || arrayA[i] === arrayB[4]) {
    numberMatching++;
 }
  
}

console.log("The number of elements in the arrays that match is " + numberMatching);