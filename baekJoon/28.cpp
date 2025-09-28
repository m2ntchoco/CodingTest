#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, min = 100, max = 0;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for (int i = 0; i < n ; i++){
    if (arr[i] < arr[i+1]){
      if (min > arr[i]){
        min = arr[i];
      }
      if (max < arr[i+1]){
        max = arr[i+1];
      }
    }
    else {
      if (min > arr[i]){
        min = arr[i];
      }
      if (max < arr[i+1]){
        max = arr[i+1];
      }
    }
  }
  cout << min << " " << max;

  return 0;
}