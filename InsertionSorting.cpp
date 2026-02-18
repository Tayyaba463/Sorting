#include <iostream>
using namespace std;

int main () {

    int arr[] = {2,3,5,7,8,4,1,6,9,10};
    int n = 10;
    
    for (int i = 1; i < n; i++) {

        int hold = arr[i];
          int gap = i;

      while(gap > 0 && hold < arr[gap - 1]) {
             arr[gap] = arr[gap - 1];
             gap--;
      }
             arr[gap] = hold;   
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   return 0;
}