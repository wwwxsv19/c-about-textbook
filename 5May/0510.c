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
		f(n-1); // f(1)���� �������� �������� �Լ��� �����Ѵٴ� �� 
		star[n]='*'; //star[1]�� * ���� ���� 
		printf("%s\n", star+1); //���ڿ��� ������ = star[0]�� �ּҰ�. 
								//star[0]�� ���� �����Ƿ� +1�Ͽ� star[1]���� ���. 
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
	printf("%s", yearWhat(year)? "����":"���");
	return 0; 
}
*/
int game(int a, int b, int c, int d){
	return a+b+c+d;
}
int main(){
	int a, b, c, d, i;
	printf("4���� ���� ���¸� �Է��Ͻÿ�.\n");
	printf("0:���������� ���� ���� / 1:�������� ����) : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);	
	switch(game(a, b, c, d)){
		case 4:printf("��");break; 
		case 3:printf("��");break;
		case 2:printf("��");break;
		case 1:printf("��");break;
		default:printf("��");break;
	}
	return 0;
	
} 
