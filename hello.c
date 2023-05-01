#include <stdio.h>

int main_hello(void)
{
    // printf("hello world\n");
    char name[256]; // 배열 하나 만들고
    printf("이름이 뭐예요?");
    scanf("%s", name); // name에다가 받고
    printf("%s님, 반가워요!\n", name); // 입력받은 변수를 출력해주는 것이다
    
    // 마지막으로 입력 받는것입니다. 사용자로부터 어떤문자 %s를 입력받아서
    // name라는 변수에 짚어 넣는 것이다
    // 그리고 입력 받은 변수를 출력해주는 것이다
    // %s라고 해서 출력을 해줄 것이다
    return 0;
}