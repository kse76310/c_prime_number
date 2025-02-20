#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int column = 0;
	int inputValue;							//입력받은 수
	int stepValue;							//단계별 검증할 수
	int incValue;							//프라임넘버 확인하기 위한 수
	//2이상의 정수를입력받는다.
	printf("2이상의 정수를 입력하세요:");
	scanf("%d", &inputValue);
	//2부터 1씩 증가하면서 입력 받은 수까지 증가 후 종료하는 루프
	for (stepValue = 2; stepValue <= inputValue; stepValue++) {
		//증가된 수를 1을 제외한 자신의 수까지 1식 증가하면서 나누어보고 나머지가 0이면
		for (incValue = 2; incValue < stepValue; incValue++) {
			if (stepValue % incValue == 0) {
				break;
			}
		}
		//최종까지 나머지가 0으로 떨어지지 않은 수는 pn으로 판정하여 화면에 표시한다
		if (incValue == stepValue) {
			printf("%5d", stepValue);
			column++;
			//5개를 넘어가면 줄바꿈을 한다.
			if (column == 5) {
				column = 0;
				printf("\n");
			}

		}
	}
}