// 저는 100만원이 있습니다. 이 돈을 연평균 10%의 수익률을 자랑하는 투자하려고 합니다
// 연간 12번 복리 계산
// 만약 제가 25~65세까지 40년동안 돈을 주식 시장에 그대로 두면 얼마나 될까요?

// calc.h와 아래 공식을 사용하여 계산하시오
// 지수 계산을 위해 math.h 의 pow(value, exponent)함수를 사용

// A = P(1 + r/n) ^ (nt)

// A = 미래 가치 (알고 싶은 값)
// P = 원금 (내 돈)
// r = 연 이자율 (소수)
// n = 이자가 연간 몇 번 복리로 계산 되는가 12번
// t = 돈을 투자하거나 빌린 기간 40년

#include <stdio.h>
#include <math.h>
#include "calc.h"

#define INITAL_MONEY 1000000
#define RATE 0.1
#define N 12
#define T 40

int main(void) {
    double expectedMoney = INITAL_MONEY * pow(1 + RATE / N, Mul(N, T));

    printf("%.f\n", expectedMoney);
}