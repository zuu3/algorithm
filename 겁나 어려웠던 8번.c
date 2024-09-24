#include <stdio.h>
#include <string.h> // strlen 사용하기위해 불러옴
int main() {
	char str1[101], str2[101]; // 첫번째 문장 저장, 두번째 문장 저장
	int check[128] = {}; // 같은 값인지 확인하는 배열
	scanf("%s %s", str1, str2);
	for (int i = 0; i < strlen(str1); i++){
		check[str1[i]]++; // check배열에 str1[i]번째를 ++
	}
	for(int i =0;i<strlen(str2);i++){
		check[str2[i]]--; //check 배열에 str2[i]번째를 -- 같은 값이면 전부다 1을 0으로 만들겠지???
	}
	for(int i=0;i<128;i++){
		if(check[i]){ // 하나라도 1이 남아있으면 다르므로 NO출력
			printf("NO");
			return 0; // 종료
		}
	}
	printf("YES"); // 위 조건이 충족이 안되었다면 YES 서로 같은거임
	return 0;
}