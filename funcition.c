#include <stdio.h>

// 선언
void p(int num);

void function_without_retuun(); // void - 반환하지 않는 함수
int function_with_retuun(); // 정수 형 어떤 값을 반환 하겠다.
void function_without_params();

void function_with_params(int num1, int num2, int num3);
// 반환값이 없다는 가정하에 파라미터만 받는것으로 하는데, 세개 정수형 int
// L 세개의 정수를 받는 함수다

int apple(int total, int ate); // 전체 total 계에서 ate 개를 먹고 남은 수를 반환

int add(int num1, int num2); // 더할 값을 받는다.
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void)
{
    /*
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
    */

    // 함수 종류

    // 반환 값이 없는 함수 - void
    // 이 얘를 사용하려면 (메인 함수 위)선언 + (메인 함수 아래)정의
    // 여기서는 반환값이 없어 아무 동작할 필요가 없는데
    /*
    function_without_retuun(); // 여기서 함수 호출 하는 것 // F3 정의로 이동(여기서)
    */

    // 반환 값이 있는 함수
    // 여기서는 반환값이 있기 때문에 값을 받아야 한다
    // 정수형 데이타 자료형이라서 return "int ret ="
    /*
    int ret = function_with_retuun(); // 어떻게 받느냐?
    p(ret);
    */

    // 파라미터(전달값)가 없는 함수 - 반환값이 없는 함수와 거의 흡사 // 파라미터스 파람스
    /*
    function_without_params();
    */

    // 파라미터(전달값)이 있는 함수
    // 예시로 정수형 데이타 3개를 보내겠다.
    /*
    function_with_params(1, 2, 3);
    */

    // 파라미터(전달값)도 받고, 반환값이 있는 함수
    // 5개의 사과 중에서 2개를 먹었어요
    // apple이라는 함수를 호출 했을 때 return값에는 현재 남아 있는 사과 개수가 나오고, 이값을 출력해보겠다
    /*
    int ret = apple(5, 2);
    printf("사과 5개 중에 2개를 먹으면 ? %d개 남아요\n", ret);
    */
    // 3이라는 숫자가 반환되어 나오는 값/ 함수를 호출해서 전달 받은 값
    // 정리 - apple이라는 함수를 호출해서 전달 받은 값을 ret라는 변수에 반환을 받고나서, ret를 printf 부분에서 사용
    /*
    printf("사과 %d 개 중에 %d개를 먹으면 ? %d 개 남아요\n", 10, 4, apple(10, 4));
    */
    // 10개 중에 4개를 먹었다고 하고, apple(10,4) 를 직접 바로 짚어 넣어버리면,
    // L apple 이라는 함수를 호출하면서, 10하고 4를 보내 버릴거에요
    // 10개 중에 4개를 먹고 남은 6이라는 숫자를 반환 해준다
    // %d를 3개를 인자로 받고 , 거기에 들어가는 수가 10, 4 , apple의 수가 전달을 반환해 주는 6이라는 값이 들어가게 된다
    // printf 내에서 apple 함수를 바로 활용했움, 이렇게도 가능하다 것 알아둬라

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
void p(int num) // 우리가 할 일은 num 이부분을 함수로 바꾸는 것 
{
    printf("num 은 %d 입니다\n", num);
}

void function_without_retuun()
{
    printf("반환값이 없는 함수 입니다\n");
}

int function_with_retuun() // 이 함수를 호출하면
{
    printf("반환값이 있는 함수 입니다\n"); // 여기 이 내에 있는 어떤 문장을 수행하고
    return 10; // 10이라는 값을 반환해준다는 의미
}

// void 함수이름(int num1, int num2, char c, float f)// 동일 이름 안댐, 여러 개 받을 수 있다
// {
// }

void function_without_params()
{
    printf("전달값이 없는 함수 입니다\n");
}

void function_with_params(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다\n", num1, num2, num3);
}

int apple(int total, int ate)
{
    printf("전달값과 반환값이 있는 함수 입니다\n");
    return total - ate;
}

// printf("%d개 중 %d개 먹음\n", total, ate); ---- 삭제

int add(int num1, int num2)
{
    return num1 + num2;
}

//두개의 값을 더해서 반환 해주면 된다

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
