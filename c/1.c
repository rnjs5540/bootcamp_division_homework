/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n;
    int a = 0;
    scanf("%d", &n);
    while (n) {
        a *= 10;
        a += n % 10;
        n /= 10;
    }
    printf("%d", a);

    return 0;
}