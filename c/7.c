/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int y, m;
    scanf("%d", &y);
    scanf("%d", &m);
    switch (m)
    {
    case 2:
        if ((y%4==0 && y%100 != 0) || y%400==0)
            printf("29");
        else
            printf("28");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30");
        break;
    default:
        printf("31");
    }

    return 0;
}