#include <iostream>
#include <vector>

using namespace std;

int main(){
  int M = 0, n = 0, m = 0;
  float sum = 0;
  cin >> n;
  vector<float> a(n);

  for (int i = 0; i < n; i++){
    cin >> a[i];
    if (a[i]> m)
    {m = a[i];}
  }

  for (int i = 0; i< n; i++) {
    sum += a[i]/m*100;
  }

  cout << sum/n;

  return 0;
}
