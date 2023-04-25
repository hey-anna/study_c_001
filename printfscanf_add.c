#include <stdio.h>
int main(void)
{
    // 정수형 변수에 대한 예제 - int
    // printf("hello world\n");
    /*
    int age = 12;
    printf("%d\n" , age);
    age = 13;
    printf("%d\n", age);
    */

    // 실수형 변수에 대한 예제 - float, double
    /*
    float f = 46.5;
    // printf("%f\n", f);
    printf("%.2f\n", f);
    double d = 4.428;
    // printf("%lf\n", d);
    printf("%.2lf\n", d);
    */

    // 상수
    /*
    // int YEAR = 2000;
    const int YEAR = 2000;
    printf("태어난 년도 : %d\n", YEAR);
    */

    // printf
    /*
    // 연산
    int add = 3 + 7; // 10
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3,  7, 3 + 7);
    printf("%d x %d = %d\n", 30,  70, 30 * 70);
    */

    // scanf 키보드 입력을 받아서 저장
    // 1)
    /*
    int input;
    printf("값을 입력하세요 : ");
    scanf("%d", &input);
    printf("입력값 : %d\n", input);
    */
    // 2)
    /*
    int one, two, three;
    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫번째 값 : %d\n", one);
    printf("두번째 값 : %d\n", two);
    printf("세번째 값 : %d\n", three);
    */
    // 3) 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    /*
    char c = 'A';
    printf("%c\n", c);
    */
    /*
    char str[256];
    scanf("%s", str);
    printf("%s\n", str);
    */
   
    return 0;
}