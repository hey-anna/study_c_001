#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // 조건 / 분기
    // if else / break / continue / switch

    // 버스를 탄다고 가정 - 학생 / 일반인 구분 (일반인 : 20세)
    /*
    int age = 15;
    if (age >= 20)
        printf("일반인 입니다\n");
    else
        printf("학생 입니다\n");
    */
    // if (조건) {...} else {...}
    // printf - 한 문장만 있으면 괄호가 필요없지만, 습관적으로 괄호를 붙이는 방향으로 해라

    // 초등학생(8 ~13) / 중학생(14 ~ 16) / 고등학생(17 ~ 19)으로 나누면 ?
    // if / else if / else
    /*
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
    */
    // if 조건에 만족하지 않으면, 또다른 친구를 순차적으로 확인 후, 모든 조건에 만족하지 않는 경우 else

    // break / continue
    // 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다
    
    /*
    for (int i = 1; i <= 30; i++)
    {
        if(i >= 6){
            printf("나머지 학생은 집에 가세요\n");
            break;
            // 조건이 맞을 때 for문을 탈출하게 하는 것 break;
        }
        printf("%d 번 학생은 발표를 준비하세요\n", i);
    }
    */
    // 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    // 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
    /*
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            // 조건에 만족할때 continue를 만나면 그 이후에 있는 문장을 실행하지 않고, 바로 다음 반복으로 넘어간다
            // i가 7인 경우에 대해서 이 조건을 태우고 - 프린트 동작을 한 다음에 continue를 하기 때문에
            // 바로 i++로 넘어와서 i는 8 - 그러면 i는 8부터 진행
            // 그래서 아래쪽에 있는 문장을 수행하지 않는 것이다( 조별 발표 준비 문장)
            if (i == 7) 
            {
                printf("%d 번 학생은 결석입니다\n", i);
                continue; // 조건에 만족하는 경우 바로 i++ 넘어가서 , (상위 if 조건충족&출력에 대한 내용 무시)
            }
            printf("%d 번 학생은 조별 발표를 준비하세요\n", i);
        }
    }
    */
    // if문 내에서 또 다른 if문, 중첩 사용은 얼마든지 가능합니다.
    
    // && ||
    /*
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
    */

    // Switch Case
    // 가위 바위 보 (0 ~ 2)

    /*
    // 컴퓨터가 렌덤으로 숫자를 구하기 위해서는 srand() 사용
    srand(time(NULL)); // 선언 - 사용하기위해서는 time.h추가 해야함
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
    // 컴퓨터가 멀 낼지 모른다
    // 가위,바위,보인지 혹은 그외의 값인지 확인하여 - 분기를 태워서 어떤 값을 출력할 수 있어요
    */

    // Switch - 조금 다른 방법
    // 값을 받아서, 이 값이 해당하는 경우에 맞도록 출력하는 것
    // 세가지 경우(가위바위보) 제외하는 경우는 default;
    // 위에 if else문과 거의 흡사하나, 똑같진 않음
    // 각 값에 따른 경우에 따른 분기를 하기 때문에 용의하게 사용

    // 스위치 케이스는 각 경우 마다 break; 문을 넣어줘야 한다
    // 넣지 않으면, 그 이후의 모든 케이스는 조건을 확인하지도 않고 무조건 다출력(다실행)
    // Switch case 문은 - 항상 각 케이스 문장이 끝날 때 브레이크를 넣어서 탈출하도록 정의

    // srand(time(NULL));
    // int i = rand() % 3;
    // switch (값)
    // {
    // case 가위 :
    // case 바위 :
    // case 보 :
    // default;
    // }
    /*
    srand(time(NULL));
    int i = rand() % 3;
    switch (i)
    {
    case 0:printf("가위\n"); break; // break; 문은 이 경우에 대한 수행을 하고 탈출
    case 1:printf("바위\n"); break;
    case 2:printf("보\n"); break;
    default:printf("몰라요\n"); break;
    }
    */
    // 만약에 값이 i라고 하였을 때 - i는 0부터 2사이의 숫자가 나오겠죠
    // i라는 주어진 값이 0이라면은 가위 수행 ~

    // 초등학생(8 ~13) / 중학생(14 ~ 16) / 고등학생(17 ~ 19)으로 나누면 ?

    // 그냥 예시
    /*
    srand(time(NULL));
    int age = rand() % 25;
    // int age = 15;
    // int age = 18;
    switch (age)
    {
    // case 8:printf("초등학생 입니다\n"); break;
    // case 9:printf("초등학생 입니다\n"); break;
    // case 10:printf("초등학생 입니다\n"); break;
    // case 11:printf("초등학생 입니다\n"); break;
    // case 12:printf("초등학생 입니다\n"); break;
    // case 13:printf("초등학생 입니다\n"); break;
    // case 14:printf("중학생 입니다\n"); break;
    // case 15:printf("중학생 입니다\n"); break;
    // case 16:printf("중학생 입니다\n"); break;
    // case 17:printf("고학생 입니다\n"); break;
    // case 18:printf("고학생 입니다\n"); break;
    // case 19:printf("고학생 입니다\n"); break;   
    // default:printf("일반인 입니다\n"); break;
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

    // 어디서든지 break 만나면 수행을 멈추다(탈출)
    // 모두 초등학생 입니다. 하고 출력을 빠져 나옴
    // 케이스 어떤 경우를 만났을 때 그 문장의 끝에 break가 있으면, 이후 케이스는 실행안하고 끝남
    // 그런데 break가 없으면 그 밑에 케이스들은 비교하지 않고 그냥 실행 합니다.
    // 그런데 실행하다가 브레이크를 만나면 스위체 케이스 그물을 탈출 한다
    }
    */
   
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
            // 찬스가 0보다 클 때만 수행하라는 조건이 있기 때문에, 이 문장이 없어도 실행 되긴 된다
            // 하지만 더 이상 기회가 없다는 것을 알려주기 위해서 예외 처리
        }
            // L while (1)로 처리 하면 아에 없어도 된다
            // 1 : 참, 0 : 거짓
            // L 참일 때 항상 이 문장을 수행하기 때문에 - 무한 루프에 빠질 수 도있다
            // 하지만 1이라고 정의하면 while문 안의 모든 문장을 수행하기 때문에
            // 어째되었든, 값을 수행하면서 만약에 찬스가 0이다 하면은, 즉 기회가 없다하면은
            // break;를 만나서 탈출하도록 한다
    }

    return 0;

}