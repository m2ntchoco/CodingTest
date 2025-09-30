#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s; 

    int sum = 0;

 
    for (int i = 0; i < s.length(); i++) {
  
        sum += s[i] - '0'; //문자열에서 -'0'하면 int 숫자가 완성
    }

    cout << sum;

    return 0;
}