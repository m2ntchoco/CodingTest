#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        // 공백 출력: N - i 개
        for (int j = 1; j <= N - i; ++j) {
            std::cout << ' ';
        }

        // 별 출력: i 개
        for (int k = 1; k <= i; ++k) {
            std::cout << '*';
        }

        std::cout << '\n';  // 줄 바꿈
    }

    return 0;
}
