

#include <iostream>

using namespace std;

int main()

{

const int i = 20;

const int* const ptr = &i;

cout << i<<" "<< *ptr;

return 0;

}