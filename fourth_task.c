/* Task description:
1.  Create a function that receives an array of integers as parameter, and one integer value that has to be found in the array! 
    Return the index of the element if the value was found, or return −1, if it was not. (If the value occurs multiple times in the array, it is up to you which index you return.)
    Print the array with the indices to check the result of your function. Print the index returned by the function, or the text „not found”!

2.  Modify the function (and the program) to return the memory address, instead of the index of the found element! 
    What should be returned when the value was not found in the array? Using the modified function how can you determine the index of the found element (without another search)?
    Modify the loops in the program to use pointers instead of indices. 

*/

#include <stdio.h>

void recever(int array[],int arlen, int value, int *idx){
  *idx = -1;
  for (int i = 0; i < arlen; i++){
    if (array[i] == value){
      *idx = i;
    }
  }
}



int main(){
  int array[] = {2,4,6,8,10};
  int len = 5;
  int value;
  int idx;
  printf("Value?");
  scanf("%d", &value);
  recever(array, len, value, &idx);
  if (idx == -1) printf("Not found\n");
  else {printf("Is %d in? %d\n", value, idx);
  printf("The memory obtained by that smth: %p", &idx);}


  return 0;
}