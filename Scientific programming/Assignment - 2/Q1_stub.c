//TODO: Complete the inclusion of necessary libraries
#include <stdio.h>


//TODO: Complete function to generate a random array of integers
int *randomarray(int n, int max) {

    //TODO: Allocate memory for the array

    //TODO: Generate random integers between 0 and max

    //TODO: Return array

}

//TODO: Complete function to print the array
void printarray(int n, int *arr) {

}

//TODO: Complete function to swap the values of two integers
/*It swaps the values of the two integers 
  by temporarily storing one value and then 
  exchanging the values at the two memory locations.
*/
void swap(int* a, int* b) {

    int temp;

}

//TODO: Complete quickSort function
void quickSort(int* arr, int low, int high) {

    //TODO: Check if there is more than one element to sort

    //TODO: Select the pivot element

    //TODO: Partition the array around the pivot
    /*Elements smaller than or equal to the pivot 
      are moved to the left side of the pivot.
      Use swap function to move smaller element left
    */

    //TODO: Place the pivot in the correct position

    //TODO: Recursively sort the left part of the array

    //TODO: Recursively sort the right part of the array 

}

//TODO: Complete native search method 
/* Return the index if the element is found.
   Allow for early escape as we know the array is sorted
*/
int search(int i, int n, int *arr) {

}

//TODO: Complete benchmark function using native search
long benchmark(int n, int max, int s, int mult) {

    //TODO: Start the overall timer

    //TODO: Loop for mult times
    /* For every 1000 cycles, generate an array and sort
       Search mult times for the value s in the array
    */

    //TODO: Stop the timer

    //TODO: Return the total time elapsed

}

//TODO: Complete main function to test quickSort and search, and benchmark
int main() {

    //TODO: Variable declerations

    //TODO: Seed the random number generator once at the start

    //TODO: Input the size and max value for the random array

    //TODO: Generate a random array

    //TODO: Print the array before sorting

    //TODO: Sort the array using quickSort

    //TODO: Print the sorted array

    //TODO: Input a value to search

    //TODO: Perform the search

    //TODO: Print the search result

    //TODO: Call benchmark on various parameters and print the total time for each

    //TODO: Free the allocated memory

    return 0;
}

