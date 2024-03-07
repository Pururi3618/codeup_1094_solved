#include <stdio.h>
int main() {
    int a[10000] = {}, n;   //a : 불린 번호를 저장할 배열, n : 부를 번호의 갯수
    scanf("%d", &n);    //부를 번호의 갯수 받기
    for(int i = 1; i <= n; ++i) {   //n번 반복(0 ~ n)
        scanf("%d ", &a[i]);    //1번 인덱스부터 차례대로 불린 번호를 저장
    }
    for(int i = n; i >= 1; --i) {   //n번 반복(n ~ 0)
        printf("%d ", a[i]);    //마지막으로 불린 번호부터 차례대로 출력
    }
    return 0;
}