/*
Array:An array can be defined as a group of collection of similar kinds of elements or data items that are stored together
in contiguous memeory spaces.

           ---------------------------
elements : | 2  |  6   |    4   |   7 |
           - --------------------------
Index    : | 0  |  1   |    2   |   3 |
           ---------------------------

        Types Of Arrays:
                  1. 1-D Array
                  2. 2-D Array
                  3. Multi-dimenional Array

    Synatx:
            int       park         [8];
            ^          ^            ^
         data_type  array_name   size_of_array

*/

/*
 1-D Array example:
 In this types of array ,it stores elements in a single dimension.
 Real-life Example: Groups of students
 */


#include<iostream>
using namespace std;
int main()
{
    int carParking[4]={7,3,9,2};
    for(int i=0;i<3;i++)
    {
        cout<<carParking[4]<<" ";
    }
    return 0;
}



/*
2-D Array:
In this type of array ,two indexs describe each element,the first index represent a row,and the second index represents
a column.
*/


#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{3,4,5},{7,9,3},{4,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<arr[i][j]<<" ";
        }
           cout<<endl;
    }
    return 0;
}

/*
Multi-Dimension Array:
The simplest example of a multidimensional array is a 2-D array.
     Syntax:
          Datatype array_name[size1][size2][size3]..........[size n];
*/
