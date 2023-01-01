/*
# Array :
An Array is group of collection of similar kinds of elements or data items that are stored togethor in contiguous memory space.

TYpes
     * 1 D Array
     * 2 D Array
     * 3 D Array

  elements :  2   6   7   9   29
  index    :  0   1   2   3    4

## Initialization and Declaration in array
* The data type of elements in the array
* The name of the array
* The size of the array

*/
// Syntax:
// Data_type Array_Name[size];
// int club[10];

// 1 D Array
// In this types of array ,it stores elements in a single dimension.

#include<iostream>
using namespace std;
int main()
{
    int array[5]={1,3,5,3,6};
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}