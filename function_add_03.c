#include <stdio.h>

// 선언
void p(int num);

int main(void)
{
    // function
    // 계산기 1,2
    int num = 2;
    // printf("num 은 %d 입니다\n", num); // 2
    p(num); // p라는 함수라는 함수를 호출하고, 이때 num이라는 변수의 값을 던지겠다

    // 2 + 3 은 ? // num += 3
    num = num + 3;
    // printf("num 은 %d 입니다\n", num); // 5
    p(num);

    // 5 - 1 은 ?
    num -= 1; // num = num - 1 과 동일한 의미
    // printf("num 은 %d 입니다\n", num); // 4
    p(num);

    // 4 x 3 은 ?
    num *= 3;
    // printf("num 은 %d 입니다\n", num); // 12
    p(num);

    // 12 / 6 은 ?
    num /= 6;
    // printf("num 은 %d 입니다\n", num); // 6
    p(num);

    return 0;
}

// 정의
void p(int num) // 우리가 할 일은 num 이부분을 함수로 바꾸는 것 
{
    printf("num 은 %d 입니다\n", num);
}


// 반환형 - 함수에서 어떤 동작을 수행하고 나서, 반환해주는 값을 말하는 것

// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형(출력값) : ?

// 반환형 함수이름(전달값)
{   
}

// 함수이름(36)
int 함수이름(num)
{
    return num + 4;
}

float 함수이름(num)
{
    return num + 4;
}

char 함수이름(num)
{
    return num + 4;
}

void 함수이름(num) // 함수 옆에 전달 닶으로 받는 부분도 우리가 어떤 형식으로 받을지 정할 수 가 있어요
{
    // return num + 4 ---- 이런 값이 필요 없다
}

void 함수이름(int num1, int num2, char c, float f)// 동일 이름 안댐, 여러 개 받을 수 있다
{
}

// 물론 이렇게 정의를 할 때 작성한 부분은
// 메인 함수 위쪽에서 선언한 부분과 완전히 동일해야 한다

// num + 4를 해서 반환을 해주면 된다
// 반환형을 어떻게 적느냐 - 우리가 보내주는 자료형에 맞추면 된다
// 정수 int
// 반환한다는 것을 의미하기 위해서 return
// 반환을 실수로 하고 싶다 float
// 문자 char
// 반환하지 않겠다 void
// L 아무것도 없다는 의미


