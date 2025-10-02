#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  string S;
  vector<int> str(26, -1);
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    int idx = S[i] - 'a';  
    if (str[idx] == -1) 
    { 
      str[idx] = i;
    }
}
  
  for(int i = 0; i < 26; i++){
    cout << str[i] << " ";
  }

  return 0;
}