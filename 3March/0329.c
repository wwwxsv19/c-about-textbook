/*
//벌점 뽑기 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int start, last, num;
	
	srand (time(NULL)); // srand() : 매번 동일한 난수를 발생시키지 못하게 함.
	
	printf("*** 벌점 당첨 뽑기 프로그램 ***");
	printf("번호의 범위를 입력하시오.\n(시작 번호, 마지막 번호. 입력 시 구분으로 공백 처리) :");
	scanf("%d %d", &start, &last);
	
	//rand() : 0 ~ 32767 사이의 무작위 수를 발생시키는 함수. 
	num = rand()%(last-start+1)+start; // start ~ last 범위를 추출하기 위한 수식. 
	
	printf("축하합니다! 뽑힌 번호는 %d 입니다.\n", num);
	return 0;
}
*/

/*
//책 구매 
#include <stdio.h>
int main(){
	int money, book = 15000;
	printf("책의 가격은 %d 원 입니다.\n당신이 가진 용돈은 얼마인가요? : ", book);
	scanf("%d", &money);
	if(money >= book){
		printf("구입에 성공하셨습니다. 남은 용돈 : %d 원", money-book);	
	}
	else{
		printf("용돈이 적어 구입하실 수 없습니다. 부족한 금액 : %d 원", book-money); 
	}
	return 0;
}
*/

/*
//합격? 불합격? 1
#include <stdio.h>
int main(){
	int score, pass;
	printf("점수를 입력하세요 :" );
	scanf("%d", &score);
	printf("합격점을 입력하세요 : ");
	scanf("%d", &pass);
	
	if(score>=pass? printf("합격\n"):printf("불합격\n")); //if문과 삼항 연산자를 합친 꼴! 
	
	return 0; 
} 
*/

#include <stdio.h>
int main(){
	int score1, score2;
	
	printf("1과목의 점수 입력 : ");
	scanf("%d", &score1);
	printf("2과목의 점수 입력 : ");
	scanf("%d", &score2);
	
	printf("%s", (score1>=60 && score2>=60)? "합격":"불합격");
	return 0;	
} 
