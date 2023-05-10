#include <stdio.h>
/*int f(int a, int b){
	if(a>b) return a;
	else return b;
}
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", f(a, f(b, c)));
	return 0;
}*/
/*int f(int a, int b){
	if(a>b) return a;
	else return b;
}
int main(){
	int a[10]={18, 77, 68, 54, 99, 15, 56, 97, 64, 48};
	int i, max=0;
	for(i=0;i<10;i++){
		max=f(max, a[i]);
	}
	printf("%d\n", max);
}*/
/*
void point(int *a, int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int a[5]={66, 84, 79, 93, 48};
	int i, j;
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]) point(&a[i], &a[j]);
		}
	}
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
*/
/*
int f(int n){
	if(n==1) return 1;
	else return f(n-1)*n;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}*/
/*
char star[20];
int f(int n){
	if(n>0){
		f(n-1); // f(1)까지 내려가서 역순으로 함수를 수행한다는 뜻 
		star[n]='*'; //star[1]에 * 값을 대입 
		printf("%s\n", star+1); //문자열의 변수명 = star[0]의 주소값. 
								//star[0]의 값이 없으므로 +1하여 star[1]부터 출력. 
	}
}
int main(){
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}*/
/*
int yearWhat(int n){
	if(n%400==0) 
		return 1;
	else if(n%4==0 && n%100!=0) 
		return 1;
	else 
		return 0;
} 
int main(){
	int year;
	scanf("%d", &year);
	printf("%s", yearWhat(year)? "윤년":"평년");
	return 0; 
}
*/
int game(int a, int b, int c, int d){
	return a+b+c+d;
}
int main(){
	int a, b, c, d, i;
	printf("4개의 윷의 상태를 입력하시오.\n");
	printf("0:뒤집어지지 않은 상태 / 1:뒤집어진 상태) : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);	
	switch(game(a, b, c, d)){
		case 4:printf("윷");break; 
		case 3:printf("걸");break;
		case 2:printf("개");break;
		case 1:printf("도");break;
		default:printf("모");break;
	}
	return 0;
	
} 
