#include <iostream>
using namespace std;

int main () 
{
     int arr[] = {12,34,1,3,67,7,4,14};
     int n = 8;

  for (int i = 0; i < n; i++) 
   {
     for (int j = 0; j < n - i - 1; j++)
      {
        if (arr[j] > arr[j + 1])
         {
             int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
         }
      }
   }   

    for (int i = 0; i < n; i++)
      { 
           cout << arr[i] << " ";
      } 
     return 0;
}