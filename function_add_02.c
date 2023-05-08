#include <stdio.h>

// 선언
void p(int num);

// int num을 받도록 할게요
// for문 필요할 때 - void p 사용
// 선언만 하는것이기 때문에 ;세미콘론으로 문장을 준비
// 메인 함수 아래쪽에서 이 함수에 대한 정의를 내리면 되요 - 정의는 똑같이
// 메인 함수 윗쪽에서 선언 - 이런 함수를 쓸거야 - P라는 함수를 쓸거야
// 똑같은 함수를 선언을 해주고 중괄호로 내용을 채워서 정리

int main(void)
{
    // function
    // 계산기2 - 계산기1과 동일한 결과 (간결)
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

// p 라는 게 이름이고 오른쪽 소괄호(int num)에 있는게 전달 값
// 우리가 어떤 값을 전달 할거야하면, 소괄호 안에 들어가도록 만들면 된다
// printf 자체도 함수이긴 하지만,
// L 우리가 만든 함수를 사용하기 위해서 p라고 하고  p(num); - 이렇게 하면 끝이다

// 훨씬 문장이 간단해졌음 
