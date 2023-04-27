#include <stdio.h>

int main(void)
{
    // printf("Hello World\n");

    // ++ 뿔뿔
    
    /*
    int a = 10;
    printf("a 는 %d\n", a);
    a++;
    printf("a 는 %d\n", a);
    a++;
    printf("a 는 %d\n", a);
    */

    /*
    int b = 20;
    // b = b + 1;
    printf("b 는 %d\n", ++b);
    printf("b 는 %d\n", b++);
    printf("b 는 %d\n", b);
    */

    // 그 문장에서 ++b 는 그문장에서 뿔뿔동작을 먼저하고 수행을 하고 문장을 끝내라
    // b++ 은 이 문장을 다 수행하고 나서 그 다음 문장으로 넘어갈 때 b + 1 을 하는 거야

    /*
    int i = 1;
    printf("Hello World %d\n", i++);  //1
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    */
    
    // 반복문
    // for, while, do while

    // for (선언; 조건; 증감) { 실행문 }
    /*
    for (int i = 1; i <= 10; i++)
    {
        printf("Hello Wolrd %d\n", i);
    }
    */
    // 조건이 맞으면, 괄호에 있는 내용을 수행하라 - 증감 또는 감소


    // while 
    // while문은 밖에서 선언
    // 선언, 조건, 실행문
    // 1(i)는 10 보다 작거나 같을때까지 이 동작을 수행하라
    // 이 동작이 끝나면 다시 위로 올라와서 이 조건이 맞느냐,
    // 그러면 또 문장 수행 - 또 다시 올라와서 조건이 맞느냐, - 수행
    // i ++ 은 바로 넣거나, 문장 다음에 넣어도 된다.
    // 어차피 이 문장을 수행하고 나서 다음 문장 가면서 아이는 일이 더해질 것이기 때문에

    /*
    int i = 1;
    while (i <= 10)
    {
        printf("Hello World %d\n", i++);
        // i++
    }
    */
    
    // do { } while (조건);
    /*
    int i = 1;
    do {
        printf("Hello World %d\n", i++);
    } while (i <= 10);
    */

    // 2중 반복문
    // i가 1일때 첫번째 반복문 1을 출력하고 나서, 두번째 반복문 1~5를 출력하고나서
    // i가 2일때 두번째 잔복문 2를 출력하고 나서, 두번째 반복문 1~5를 출력하고나서,, 3일때 똑같은 반복
    /*
    for (int i = 1; i <=3; i++)
    {
        printf("첫 번째 반복문 : %d\n", i);
        
        for (int j =1; j <=5; j++)
        {
            printf("    두 번째 반복문 : %d\n", j);
        }
    }
    */
   // 2중 반복문 - 구구단
   /*
    for (int i = 2; i <=9; i++)
    {
        printf("%d단 계산\n", i);
        for (int j = 1; j <= 9; j++)
        {
            printf("   %d x %d = %d\n", i, j, i*j);
        }
    }
    */
    // 이중 반복문 파헤치기
    // i가 0부터 5보다 작을 때까지 0,1,2,3,4 에 대한 동작을 할거고
    // 두번째 for문은 0부터 i보다 작거나 같을때까지 동작하면서 별을 찍을 거에요
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // i - 0
    // j - 0 1 - j가 1이되면 i보다 크기때문에 for문을 탈출하고 줄바꿈 진행
    //출력- *

    // 그리고 i는 ++되서 줄바꿈 후 1 ,
    // 이때 j는 다시 0부터 시작, 0부터 i보다 같거나 작을 때 까지 진행
    // 0 , 1이 i(1) 보다 같거나 작기때문에 별 2개 출력 , j의 2는 i보다 더 크기때문에 탈출하고 줄바꿈 

    // 조건에 만족할때(까지) 출력

    // 이중 반복문 (거꾸로 별)

    // 
    // 

    return 0;
}