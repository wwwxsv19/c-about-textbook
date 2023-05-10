#include <stdio.h>
/*
int main(){
	printf("***두 수 구간의 숫자 출력하기***\n");
	printf("두 수를 입력하세요 :");
	int a, b, n, i;
    scanf("%d %d", &a, &b);
    if(a>b){
    	n=a; 
    	a=b; 
    	b=n; 
    }
    for(i=a;i<=b;i++){
    	printf("%d ", i);
    } 
    return 0;
}
*/
/*
int main(){
	printf("운동장 3개의 가로, 세로의 길이를 차례로 입력하세요.\n");
	int a, b, i, max=-1;
	for(i=0;i<3;i++){
		scanf("%d %d", &a, &b);
		if(max<=a*b) max=a*b;
	}
	printf("가장 큰 운동장의 넓이는 %d입니다.", max);
	return 0;
}
*/
/*
int main(){
	int n, m, max=-1, min=101, i;
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &n);
	printf("점수를 입력하세요(0~100):");
	for(i=0;i<n;i++){
		scanf("%d", &m);
		if(m>=max) max=m;
		if(m<=min) min=m;
	}
	printf("1등은 %d점, 꼴등은 %d점", max, min);
	return 0; 
}
*/
int main(){
	int n, i, max1=0, max2=0;
	for(i=0;i<10;i++){
		scanf("%d", &n);
		if(n%2==1){
			if(n>max1) max1=n;
		}
		else{
			if(n>max2) max2=n;
		}
	}
	if(max1!=0) printf("%d ", max1);
	if(max2!=0) printf("%d ", max2);
}

