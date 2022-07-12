#include <stdio.h>

int Sum(int Value1, int Value2) {
    int result = Value1 + Value2;
    return result;
}
void main() {
    int s;
    s = Sum(2, 3);
    printf("더하기 작업의 결과는 %d\n", s);
}