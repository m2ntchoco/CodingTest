#include <iostream>
#include <fstream>

using namespace std;

int main(){
  int arr[2][4] = {{0, 1, 2, 3},
                     {10,11,12,13}};
  int k = 0, j = 0;
  for (int i = 0; i < 2; i++){

      for (int j = 0; j < 4; j++)
      { 
        cout << arr[i][j];
        k++;
        cout << " ";
      }

  }

  for(k = 0 ; k<4; k++){
    int i = 0,k=0;

    arr[i][j] ;
    cout << arr[i][j];
    cout << " ";
    i++;
    cout << arr[i][j];
    j++;
    cout << " ";
    k++;
  }

return 0;
}