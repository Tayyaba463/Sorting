#include <iostream>
using namespace std;

 int main () 
 {
    int arr[] = {3,2,1,45,23,5,7,8,9,67};
    int n = 10;

     int min;
    for (int i = 0; i < n - 1; i++) 
    { 
       min = i;
         for (int j = 0 + i; j < n; j++){
            
          if (arr[min] > arr[j]) 
          {
              min = j;
          }
        }
           int temp = arr[i];
             arr[i] = arr[min];
             arr[min] = temp;
    }

    
     for (int i  = 0; i < n; i++) {
          cout << arr[i] << " ";
     }

    return 0;
 }