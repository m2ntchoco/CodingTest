#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<bool> check(42, false);  // 나머지가 나왔는지 체크하는 배열
    int n, count = 0;
    
    // 10개의 수를 입력받아 42로 나눈 나머지를 체크
    for(int i = 0; i < 10; i++) {
        cin >> n;
        check[n % 42] = true;  // 해당 나머지가 나왔다고 표시
    }
    
    // true로 표시된 개수를 세기
    for(int i = 0; i < 42; i++) {
        if(check[i]) {
            count++;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}

