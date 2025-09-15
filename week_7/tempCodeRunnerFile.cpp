// 1~100 의 범위에 있는 정수 중에서 5와 7로 동시에 나눌 수 있는 숫자들을 출력하세요.
int main(){
  for (int i = 0 ;i <= 100; i++ )
    if (i/7 && i/5) cout << i << endl;
  
return 0;
}