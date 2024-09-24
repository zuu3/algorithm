#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	int arr[a]; // a만큼 배열을 선언한다.
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[a - 1]; // 임의의 max값을 배열의 끝값으로 잡는다.
	int cnt = 0; // 몇명이 가려지는지 카운트하는 변수 선언
	for (int i = a - 2; i >= 0; i--) { // a - 2 부터 하는 이유는 이미 max값을 a - 1로 잡았기 때문
		if (arr[i] > max) { // arr[i] 가 max보다 크면 cnt 증가와 max의 값 변경하기
			cnt++;
			max = arr[i];
		}
	}
	printf("%d", cnt);
	return 0;
}