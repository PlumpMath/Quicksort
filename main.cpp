/*
AUTHOR: Mindoodoo
DESCRIPTION: Program that utilizes a quicksort algorithm in order to sort an integer array
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

#define SIZE 10

//Prototypes
int partition(int *array[SIZE]);
void segmentBefore(int *array[SIZE], int beginning, int end, int pivot);
void segmentAfter(int *array[SIZE], int beginning, int end, int pivot);

/*
INPUT: None
DESCRIPTION: main function
OUTPUT: 0
*/
int main() {

  //Set the seed for the random number
  srand(time(0));
  //Random number int
  int randNum;

  //Create our array
  int array[SIZE];

  //Randomize the arrays content
  for (int i = 0; i <= SIZE-1; i++) {

    //Generate a random number between 1 and 100
    randNum = rand() % 10 + 1;
    array[i] = randNum;
    //Output it
    std::cout << array[i] << std::endl;
  }

}

/*
INPUT: Pointer to an array
DESCRIPTION: finds a pivot point for the array
OUTPUT: (int) Position of the pivot Pointer
*/
int partition(int *array[SIZE]) {

}

/*
INPUT: Pointer to an array
DESCRIPTION: Sorts the first segment of the given segment
OUTPUT: None
*/
void segmentBefore(int *array[SIZE], int beginning, int end, int pivot) {

}

/*
INPUT: Pointer to an array
DESCRIPTION: Sorts the second segment of a given segment
OUTPUT: None
*/
void segmentAfter(int *array[SIZE], int beginning, int end, int pivot) {

}
