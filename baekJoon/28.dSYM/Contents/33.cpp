#include <iostream>
#include <vector>

using namespace std;

int main (){
  int i = 0, j = 0;
  int n = 0, m = 0;

  cin >> n >> m;

  vector<int> basket(n + 1 , 0); //벡터 선언 시 basket[n]; 으로 하면 안됨. vector<int> basket(n);으로 해야 함.
  for (int x =1; x <= n; x++){
    basket[x] = x;
  }
  for (int x = 0; x < m; x++){
    cin >> i >> j;
    for (int a = 0; a < (j-i+1)/2; a++){
      int temp = basket[i + a];
      basket[i + a] = basket[j - a];
      basket[j - a] = temp;
    }
  }

 for (int x = 1; x <= n; x++){
    cout << basket[x] << " ";
  }


  return 0;
}