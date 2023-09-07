#include <iostream>
using namespace std;


void getValidMove(int startx, int starty, int endx, int endy){
  bool flag=true;
  int counterc=0;
  while (flag){
    if (startx==endx && starty==endy){
      cout<<"It took you " << counterc << " moves.";
      flag=false;
      break;
    }
    cout<<"Please input which x you would like to move to: ";
    int inputx, inputy;
    cin>>inputx;
    cout<<"Please input which y you would like to move to: ";
    cin>>inputy;
    if (inputx<=8 && inputy<=8 && inputx>=1 && inputy >=1){
      if (inputx == startx+2 && inputy==starty+1){
        cout<<"This is a valid move. "<<endl;
        startx=inputx;
        starty=inputy;
        counterc++;
        cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
        
    else if (inputx == startx+2 && inputy==starty-1){
      cout<<"This is a valid move. "<<endl;
      startx=inputx;
      starty=inputy;
      counterc++;
      cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
    else if(inputx == startx+1 && inputy==starty+2){
      cout<<"This is a valid move. "<<endl;
      startx=inputx;
      starty=inputy;
      counterc++;
      cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
    else if(inputx == startx+1 && inputy==starty-2){
      cout<<"This is a valid move. "<<endl;
      startx=inputx;
      starty=inputy;
      counterc++;
      cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
    else if(inputx == startx-1 && inputy==starty-2){
      cout<<"This is a valid move. "<<endl;
      startx=inputx;
      starty=inputy;
      counterc++;
      cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
    else if(inputx == startx-1 && inputy==starty+2){
      cout<<"This is a valid move. "<<endl;
      startx=inputx;
      starty=inputy;
      counterc++;
      cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
    else if(inputx == startx-2 && inputy==starty-1){
      cout<<"This is a valid move. "<<endl;
      startx=inputx;
      starty=inputy;
      counterc++;
      cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
    else if(inputx == startx-2 && inputy==starty+1){
      cout<<"This is a valid move. "<<endl;
      startx=inputx;
      starty=inputy;
      counterc++;
      cout<<"You are now at (" << startx<<", "<<starty<<")" << endl;
    }
    else{
      cout<<"This is not a valid move; \n";
    }
    
    }
    else{
      cout<<"This is not valid. The move is out of the board. ";
    }
  }
}
int main(){
  srand(time(NULL));
  int startx, starty, endx, endy;
  startx=rand()%8  + 1;
  starty=rand()%8  + 1;
  endx=rand()%8  + 1;
  endy=rand()%8  + 1;
  cout<<"The starting position of the knight is: ("<<startx<<", "<<starty<<")"<<endl;
  cout<<"The ending position of the knight should be: ("<<endx<<", "<<endy<<")"<<endl;

  getValidMove(startx, starty, endx, endy);
  
  return 0;
}