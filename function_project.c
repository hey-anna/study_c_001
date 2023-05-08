#include <stdio.h>
#include <time.h>
#include <stdlib.h>

    // - 지우기
    // srand(time(NULL));
    // int num = rand() % 100 + 1; // 0 ~ 99 + 1 / 1 ~ 100
    // int main(void)

// 선언
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success(void);// 성공 실패 메시지만 출력할게
void fail(void);


int main(void)
{
    // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
    // 맞히면 통과, 틀리면 실패
    // 퀴즈 렌덤
    // 5번의 기회를 주고, 그 중에 몇번 맞췄는지 카운트 하는 프로젝트로 조금 변경

    srand(time(NULL));
    int count = 0; // 맞힌 문제 개수
    for (int i = 1; i <= 5; i++)
    {
        // x * y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        // printf("%d * %d ?\n", num1, num2);
        showQuestion(i, num1, num2); // 몇 번째 퀴즈인지 알려주기 위해서 i, num1, num2

        int answer = -1;
        scanf("%d", &answer);
        if (answer == -1)
        {
            printf("프로그램을 종료 합니다\n");
            // break; // 멈춰라 > 문제 몇개를 맞춰라로 넘어가니 안맞 - 변경한거에
            exit(0); // 프로그램을 바로 끝내라 - 어떤문장이 있든간에 바로 프로그램 종료

        }
        else if (answer == num1 * num2)
        {
            // 성공
            success(); // 호출
            count++; // 총 마친 문제의 갯수를 정의
        }
        else
        {
            // 실패
            fail();
        }
        // 정수형 값을 받아서 answer라는 변수에 짚어넣는 작업을 하고
        // 이때 만약에 answer가 -1이다 하면 종료
        
    }
    // 두개의 수를 받아서 문제를 보여주기
    printf("\n당신의 5개 중 %d 개를 맞혔습니다\n", count);


    return 0;
}

// 구현
int getRandomNumber(int level) // ( ) 파라미터를 받고, int { } 반환하는 값도 있고
{
    return rand() % (level * 7) + 1; 
    // 랜드 함수를 뽑는데, 여기 정의 된 수까지 범위를 뽑는거 0 ~ 34
    // 0 이라는 값이 나오면 너무 쉬우니, 1을 더해서 1부터 35까지/ 1~5 / 1~35
}
void showQuestion(int level, int num1, int num2) // ( ) 혹은 파라미터를 여러개 받고, void { } 반환 값이 없는
{
    printf("\n\n\n######## %d 번째 비밀번호 #########\n", level);
    printf("\n\t%d * %d 는 \n\n?", num1, num2);

    printf("###########################");
    printf("\n비밀번로를 입력하세요 (종료 : -1) >> ");
    // 사용자 입력 받기
}

void success(void)
{
    printf(">> Good ! 정답이삼\n");
}

void fail(void)
{
    printf(">> bad ! 실패이삼\n");
}

// for문을 돌면서 문이 5개 있으니깐 똑같은 동작처리 -- 지우기


// @@
// int main(void)
// 아무것도 받지 않는, 전달 값이 없는 메인이라는 이름의 함수이고
// 정수형 자료를 반환하는 역할 --- 그래서 return 0; 을 넣음

// 점점 더 어려운 수식 활용하기 위해 i 사용
// 메인 함수 위 쪽에다가 int를 반환하겠죠
// showQuestion은 문제만 출력하는 거니까 - void 형식으로 만들어 보겠다
// 몇 번째 문인지 여전히 level이라고 하고


// 정리
// 함수를 이용해서 프로젝트를 만들었고,
// 랜덤으로 숫자 2개를 구해서,
// 문제를 보여준 다음에
// 사용자로부터 입력을 받아서
// 그게 맞는지 어떤지 체크를 하고
// 맞으면 count 개수를 증가시키면서 맞는 개수를 증가시키는
// 그리고 문제가 다 맞으면 for문을 탈출해 가지고
// 몇 개 중에 몇 개를 맞췃다라는 결과를 출력하는 프로젝트 만듦