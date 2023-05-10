#include <stdio.h>
/*
int main(){
	int score[10]={95, 100, 98, 78, 65, 55, 78, 52, 97, 98};
	int i;
	for(i=0;i<10;i++){
		printf("%d ", score[i]);
	}
	return 0;
} 
*/
/*
int main(){
	int score[5];
	int i, sum = 0;
	for(i=0;i<5;i++){
		printf("%d번 학생의 프로그래밍 성적을 입력하시오 :", i+1);
		scanf("%d", &score[i]);
		sum+=score[i];
	}
	printf("합계 : %d\n", sum);
	printf("평균 : %.2lf\n", (double)sum/5);
	return 0;
}
*/
/*
int main(){
	char string1[6]={'H', 'e', 'l', 'l', 'o', '\0'};
	char string2[6]="World";
	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s %s", string1, string2);
	return 0;
}
*/
/*
int main(){
	char string[10];
	printf("당신의 이름은 무엇입니까? :");
	scanf("%s", string);
	printf("안녕하세요 %s 님", string);
	return 0;
}
*/
/*
int main(){
	int score[5];
	int i, max=-1;
	for(i=0;i<5;i++){
		printf("%d번 학생의 프로그래밍 성적을 입력하시오 : ", i+1);
		scanf("%d", &score[i]);
		if(max<score[i]) max=score[i];
	}
	printf("최고 점수 : %d", max);
	return 0;
}
*/
int main(){
	int A[3][2]={ {100, 100}, {90, 86}, {89, 98}};
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
