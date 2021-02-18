#include <iostream>
// Example: Write a code which can calculate the sum of three greatest number in an array (Array doesn't start with greatest value)
// Algorithm: Take Three initial value and change their places if there is any grater value is written in arr[i]

using namespace std;
int main()
{
 
    int arr[7]={13,65,40,5,9,1,23}; //  trying  to find  65+40+23=128
    // 13,13,13
    int first=arr[0]; 
    int second=arr[0]; 
    int third=arr[0]; 
    for (int i=1;i<7;i++)
    {
        if(first<arr[i])
        {
           third=second;
           second=first;
           first=arr[i];
        }
        else if(second<arr[i])
        {
            third=second;
            second=arr[i];
        }
        else if(third<arr[i])
        {
            third=arr[i];
        }
    }
    cout<< "Greatest 3 Numbers:"<< first<<" "<<second<<" "<<third<< endl;
    cout<< "Sum of These Numbers:"<< first+second+third;







  return 0;
}