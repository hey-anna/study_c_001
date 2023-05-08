#include <stdio.h>

// 함수 선언
void p(int num);
int add(int num1, int num2); // 더할 값을 받는다.
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
    // 계산기 함수
    int num = 2;
    num = add(num, 3); // 정수형 값을 2개를 받고 반환을 해준다
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);

    // 2가 num이라는 변수에 들어가있고,
    // add라는 함수를 통해서 2 + 3 - 5가 반환이 되고
    // 그 5를 p라는 함수에 짚어넣어서

    return 0;
}

// 정의
void p(int num)
{
    printf("num 은 %d 입니다\n", num);
}

//두개의 값을 더해서 반환 해주면 된다

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}
