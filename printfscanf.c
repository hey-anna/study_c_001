#include <stdio.h>
int main(void)
{
    // 자바스크립트와 동일하나, 메모하면서 공부하자.

    // 정수형 변수에 대한 예제 - int
    // printf("hello world\n");
    /*
    int age = 12; // 정수 12를 age라는 변수에 넣으라는 소리입니다.
    printf("%d\n" , age); // 컨트롤 + f5실행

    // %d는 어떤 정수형 값을 출력해라는 의미
    // 그 값들은 콤마 뒤에나오는 값들이 순서대로 들어오게 된다
    // 여기서는 age라는 값이 하나만 있어서, %d 위치에 age 값이 들어오게 된다
    
    age = 13; // 처음에 int age를 선언을 했다면 그 다음부터는 age는 어떤 값 형태로 사용할 수 있다
    printf("%d\n", age);
    */

    // 실수형 변수에 대한 예제 - float, double

    /*
    // 이 경우는 int아닌 float를 사용
    float f = 46.5;
    // printf("%f\n", f);
    printf("%.2f\n", f);

    double d = 4.428;
    // printf("%lf\n", d);
    printf("%.2lf\n", d);
    
    // float
    // f%로 받으면 되고 46.500000 많이 나왔을때 - 원하는 만큼 나오기
    // f앞에 쩜을 찍고 소숫점 자릿수를 정의할 수 있다
    // 소숫점 둘째자리까지 표시해주는 실수로 해줘

    // double
    // lf%로 받기
    */

    //상수
    /*
    // int YEAR = 2000;
    const int YEAR = 2000;
    printf("태어난 년도 : %d\n", YEAR);

    // YEAR = 2001;

    // 변하지 않는 값
    // 보통 대문자로 처리
    // 만약 실수로 값을 바꿔 버리면 ? 안된다. 내가 태어난 년도를 바꿀수 없기 때문
    // 이럴 때 사용하는 것이 상수 const
    // int 앞에 적어주면 된다.
    // const int를 함으로써 이 얘는 변수가 아닌 상수야라고 하는 것
    */

    // printf
    /*
    // 연산
    int add = 3 + 7; // 10
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3,  7, 3 + 7);
    printf("%d x %d = %d\n", 30,  70, 30 * 70);
    
    // %d를 세번 적으면 정수형 어떤 값을 세번 받겠다는 뜻
    // 이 값들은 순서대로 들어간다.
    // 변수를 사용하지 않고, 바로 값을 출력할 수 있다.
    */

    // scanf
    // 1) 키보드 입력을 받아서 저장
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

    // 윈도우 
    // char str[256];
    // scanf_s("%s", str, sizeof(str));
    // printf("%s\n", str);

    // 윈도우
    // char str[256];
    // scanf_s("%s", str, sizeof(str), sizeof(char));
    // printf("%s\n", str);

    // 1) 키보드 입력을 받아서 저장
    // input이라는 변수를 만들고
    // 값을 입력하세요 라고 출력을 해 놓고문
    // 어떤값을 사용자로부터 입력을 받아서 인풋이라는 변수에 집어 넣고 싶어요
    // 이럴 때는 scanf_s / %d 어떤 정수형 값을 받겠다라고 명시를 하고
    // 어디에 ? input이라는 변수에
    // input 앞에 & 표시는 ? 내가 input이라는 변수가 정의된 곳에 값을 입력받겠다라는 의미

    // 2)
    // 정수형 값에 세개를 받아 보겠다.
    // 3) 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    // 문자는 %c라고 입력
    // 문자열은 %s라고 입력
    // 여러글자 들어가니 배열사용하자
    // char c 같은 문자를 저장하기 위한 변수를 256개를 연속으로 쭉 만든다
    // 문자열은 &표시 없이 str만 입력
    // 다만 크기를 명시해줘야 한다
    // str 변수는 총 256개의 공간을 만들었기 때문에, 더 큰 것이 들어오면 문제가 발생할 수 있다.
    // size 256이라고 써서 256개의 문자만 받겠다

    
    // 
    // 
    //
    //
    //
    
    return 0;
}