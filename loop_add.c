#include <stdio.h>

int main(void)
{
    printf("Hello World\n");

    // ++ 뿔뿔
    int a = 10;
    printf("a 는 %d\n", a);
    a++;
    printf("a 는 %d\n", a);
    a++;
    printf("a 는 %d\n", a);
    
    int b = 20;
    // b = b + 1;
    printf("b 는 %d\n", ++b);
    printf("b 는 %d\n", b++);
    printf("b 는 %d\n", b);

    int i = 1;
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    
    // 반복문
    // for, while, do while
    // for (선언; 조건; 증감) { }
    for (int i = 1; i <= 10; i++)
    {
        printf("Hello Wolrd %d\n", i);
    }

    // while 
    // while문은 밖에서 선언
    // 선언, 조건, 실행문
    int i = 1;
    while (i <= 10)
    {
        printf("Hello World %d\n", i++);
        // i++
    }

    // do { } while (조건);
    int i = 1;
    do {
        printf("Hello World %d\n", i++);
    } while (i <= 10);

    // 2중 반복문 - 기본 예제
    for (int i = 1; i <=3; i++)
    {
        printf("첫 번째 반복문 : %d\n", i);
        
        for (int j =1; j <=5; j++)
        {
            printf("    두 번째 반복문 : %d\n", j);
        }
    }

    // 2중 반복문 - 구구단
    for (int i = 2; i <=9; i++)
    {
        printf("%d단 계산\n", i);
        for (int j = 1; j <= 9; j++)
        {
            printf("   %d x %d = %d\n", i, j, i*j);
        }
    }

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

    // 이중 반복문 (거꾸로 별)
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 프로젝트
    int floor;
    printf("몇 층으로 쌓겠느냐?");
    scanf("%d", &floor);

    for(int i = 0; i < floor; i++)
    {
        for(int j = i; j < floor - 1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < (i * 2 + 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}