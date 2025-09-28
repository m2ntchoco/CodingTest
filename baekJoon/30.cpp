#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n , m, i, j, k;
  cin >> n >> m;
  vector<int> basket(n+1 , 0);
  
  for (int x = 1; x <= n; x++){
    basket[x] = x;
  }
  for (int x = 0; x < m; x++){
    cin >> i >> j;
    k = basket[i];
    basket[i] = basket[j];
    basket[j] = k;
  }

  for (int x = 1; x <= n; x++){
      cout << basket[x] << " ";
    }
  return 0;
}