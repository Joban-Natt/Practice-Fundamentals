const marks = [55, 45, 90, 80, 81, 95, 100, 66, 74, 73];
let markTotal = 0;

let highestMark = 0;
let lowestMark = 100;

for(x=0; x < marks.length;x++) {
  
  if(marks[x] > highestMark) {
    highestMark = marks[x];
  }
  
  if(marks[x] < lowestMark) {
    lowestMark = marks[x];
  }
  
  markTotal+=marks[x];
}

markTotal-=highestMark;
markTotal-=lowestMark;

let numOfMarks = marks.length-2;

let average = markTotal/numOfMarks;

console.log(average);