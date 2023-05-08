#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // 버스를 탄다고 가정 - 학생 / 일반인 구분 (일반인 : 20세)
    int age = 15;
    if (age >= 20)
        printf("일반인 입니다\n");
    else
        printf("학생 입니다\n");
    // if (조건) {...} else {...}

    // 초등학생(8 ~13) / 중학생(14 ~ 16) / 고등학생(17 ~ 19)으로 나누면 ?
    // if / else if / else

    int age = 20;
    if (age >= 8 && age <= 13)
    {
        printf("초등학생 입니다");
    }
    else if (age >= 14 && age <= 16)
    {
        printf("중학생 입니다");
    }
    else if (age >= 17 && age <= 19)
    {
        printf("고등학생 입니다");
    }
    else
    {
        printf("일반인 입니다");
    }

    // break / continue
    // 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다
    for (int i = 1; i <= 30; i++)
    {
        if(i >= 6){
            printf("나머지 학생은 집에 가세요\n");
            break;
            // 조건이 맞을 때 for문을 탈출하게 하는 것 break;
        }
        printf("%d 번 학생은 발표를 준비하세요\n", i);
    }
    // 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    // 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            if (i == 7) 
            {
                printf("%d 번 학생은 결석입니다\n", i);
                continue;
            }
            printf("%d 번 학생은 조별 발표를 준비하세요\n", i);
        }
    }    

    // && ||
    int a = 10;
    int b = 11;
    int c = 12;
    int d = 13;
    if (a == b && c == d) // 둘다 만족
    {
        printf("a 와 b는 같고, c와 d도 같습니다\n");
    }
    else if ( a == b || c == d) // 둘 중 하나 만족
    {
        printf("하나라도 만족하는 경우에도 같다고 할 수 있습니다\n");
    }
    else
    {
        printf("값이 서로 다르네요\n");
    }

    // Switch Case
    // 가위 바위 보 (0 ~ 2)
    // 컴퓨터가 렌덤으로 숫자를 구하기 위해서는 srand() 사용

    // if else 예제 - Switch를 설명하기 위한 예제
    srand(time(NULL));
    int i = rand() % 3; // 0 - 2 반환
    if (i == 0)
    {
        printf("가위\n");
    }
    else if (i == 1)
    {
        printf("바위\n");
    }
    else if (i == 2)
    {
        printf("보\n");
    }
    else
    {
        printf("몰라요\n");
    }

    // Switch
    // 항상 각 케이스 문장이 끝날 때 브레이크를 넣어서 탈출하도록 정의

    // srand(time(NULL));
    // int i = rand() % 3;
    // switch (값)
    // {
    // case 가위 :
    // case 바위 :
    // case 보 :
    // default;
    // }
    srand(time(NULL));
    int i = rand() % 3;
    switch (i)
    {
    case 0:printf("가위\n"); break;
    case 1:printf("바위\n"); break;
    case 2:printf("보\n"); break;
    default:printf("몰라요\n"); break;
    }

    // 그냥 예시
    srand(time(NULL));
    int age = rand() % 25;
    // int age = 15;
    switch (age)
    {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:printf("초등학생 입니다\n"); break;
    case 14:
    case 15:
    case 16:printf("중학생 입니다\n"); break;
    case 17:
    case 18: 
    case 19:printf("고학생 입니다\n"); break;   
    default:printf("일반인 입니다\n"); break;
    }

    // 프로젝트
    srand(time(NULL));
    int num = rand() % 100 + 1; // 0 ~ 99 + 1 / 1 ~ 100
    printf("숫자 : %d\n", num); // 랜덤 숫자
    int answer = 0;
    int chance = 5; // 5번의 기회만 실행하고 while문 탈출
    while (chance > 0)
    {
        printf("남은 기회 0%d 번\n", chance--); // 찬스가 처음에 5였다가 --하면 다음문장 넘어가면 하나가 빠진 4 3 2 1
        printf("숫자를 맞춰보세요 (1~100) : ");
        scanf("%d", &answer); // 우리가 입력하는 값을 answer라는 변수에 짚어 넣을 것이다

        if (answer > num)
        {
            printf("DOWN \n\n");
        }
        else if (answer < num)
        {
            printf("Up \n\n");
        }
        else if (answer == num)
        {
            printf("정답 입니다");
            break;
        }
        else
        {
            printf("알 수 없는 오류 발생"); // 혹시 모를 예외 처리
            break;
        }

        if (chance == 0) // 정답 다 틀려서 기회가 0번
        {
            printf("chance를 다 사용하였습니다, 아쉽게 실패했습니다\n"); 
            break;
            // 예외 처리
        }
            // L while (1)로 처리 하면 아에 없어도 된다
    }
    return 0;
}