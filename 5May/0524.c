#include <stdio.h>
/*
int line(int *a, int *b)
{
	int p;
	p=*a;
	*a=*b;
	*b=p;
	return a, b;
}
int main(){
	int a, b, c;
	printf("�� ����� �����Ը� ���ʷ� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b) line(&a, &b);
	if(b>c) line(&b, &c);
	if(a>b) line(&a, &b);
	printf("%d %d %d\n", a, b, c);
}
*/
int re(int a){
	int s=0;
	while(a){
		s=s*10;
		s+=(a%10);
		a/=10;
	}
	return s;
}
int main(){
	int n, num;
	scanf("%d", &n);
	num = n+re(n);
	if(num==re(num)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
