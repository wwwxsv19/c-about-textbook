#include <stdio.h>
/*
// while 문을 활용 
int main(){
	int num;
	scanf("%d", &num);
	while(num>0){
		if(num%2==1) printf("홀수\n");
		else printf("짝수\n");
		scanf("%d", &num); 
	}
	return 0;
}
// do~while 문을 활용 
int main(){
	int num;
	scanf("%d", &num);
	do{
		if(num%2==1) printf("홀수\n");
		else printf("짝수\n");
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
	printf("1부터 100까지의 합은 %d입니다.", sum);
	return 0;
} 
*/

//3*3 형식의 구구단 만들기 
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
//직각삼각형 
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

//정삼각형 
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

