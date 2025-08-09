using namespace std;
#include <stdio.h>;    //List- modify elements at a particular position and access and read elements at any position

//insert at any pos
//remove 
//count no of elements
//read and modify elementg at a particular postiion

//implementation using linked list

/*

    -----------
    |val | ptr|
    |    |    |
    -----------
*/
struct node
{
    int data; //4 bytes
    node *nextNode;//4 bytes ptr variable to store address of next node
}

//Worst case :- time taken to access --> O(n)
//Best Case:- O(1) for first/head node
//Inserttion---> O(n)
//Deletion---->O(n)

int main
{
    
}

