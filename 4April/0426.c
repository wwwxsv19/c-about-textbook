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
		printf("%d�� �л��� ���α׷��� ������ �Է��Ͻÿ� :", i+1);
		scanf("%d", &score[i]);
		sum+=score[i];
	}
	printf("�հ� : %d\n", sum);
	printf("��� : %.2lf\n", (double)sum/5);
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
	printf("����� �̸��� �����Դϱ�? :");
	scanf("%s", string);
	printf("�ȳ��ϼ��� %s ��", string);
	return 0;
}
*/
/*
int main(){
	int score[5];
	int i, max=-1;
	for(i=0;i<5;i++){
		printf("%d�� �л��� ���α׷��� ������ �Է��Ͻÿ� : ", i+1);
		scanf("%d", &score[i]);
		if(max<score[i]) max=score[i];
	}
	printf("�ְ� ���� : %d", max);
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
