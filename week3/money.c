#include <stdio.h>

int main(void) {
    int won;
    won = 10000000;
    printf("제 은행에서 %d\\ 원 있습니다.\n", won);

    // 쉼표 넣기
    const char* easy_won;
    easy_won = "10,000,000";
    printf("제 은행에서 %s\\ 원 있습니다.\n", easy_won);

    printf("+500,000 수금~\n");

    easy_won = "10,500,000";
    printf("수금해서 지금 %s\\ 원 있습니다.\n", easy_won);

    // Bitcoin
    float bc = 10.1234566789;
    printf("Bitcoin 지갑: %.5fBC\n", bc);

    bc = bc + 0.34567;
    printf("현재 Bitcoin 지갑: %fBC\n", bc);

    return 0;
}