#include <stdio.h>
/*
// while ���� Ȱ�� 
int main(){
	int num;
	scanf("%d", &num);
	while(num>0){
		if(num%2==1) printf("Ȧ��\n");
		else printf("¦��\n");
		scanf("%d", &num); 
	}
	return 0;
}
// do~while ���� Ȱ�� 
int main(){
	int num;
	scanf("%d", &num);
	do{
		if(num%2==1) printf("Ȧ��\n");
		else printf("¦��\n");
		scanf("%d", &num); 
	}while(num>0);
	return 0;
}
*/
/*
int main(){
	int i, sum=0;
	for(i=1; i<=100; i++){
		printf("%d ", i);
		sum+=i;
	}
	printf("1���� 100������ ���� %d�Դϴ�.", sum);
	return 0;
} 
*/

//3*3 ������ ������ ����� 
/*
int main(){
	int i, j;
	for(i=1;i<=9;i++){
		for(j=1;j<=3;j++){
			printf("%d * %d = %d	", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=9;i++){
		for(j=4;j<=6;j++){
			printf("%d * %d = %d	", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=9;i++){
		for(j=7;j<=9;j++){
			printf("%d * %d = %d	", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
//�����ﰢ�� 
int main(){
	int i, j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

//���ﰢ�� 
/*
int main(){
	int i, j;
	for(i=0;i<5;i++){
    	for(j=4;j>i;j--){
        	printf(" ");
		}
		for(j=0;j<2*i+1;j++){
			printf("*");
    	}
    printf("\n");
	}
}
*/

