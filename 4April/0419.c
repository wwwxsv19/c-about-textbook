#include <stdio.h>
/*
int main(){
	printf("***�� �� ������ ���� ����ϱ�***\n");
	printf("�� ���� �Է��ϼ��� :");
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
	printf("��� 3���� ����, ������ ���̸� ���ʷ� �Է��ϼ���.\n");
	int a, b, i, max=-1;
	for(i=0;i<3;i++){
		scanf("%d %d", &a, &b);
		if(max<=a*b) max=a*b;
	}
	printf("���� ū ����� ���̴� %d�Դϴ�.", max);
	return 0;
}
*/
/*
int main(){
	int n, m, max=-1, min=101, i;
	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("������ �Է��ϼ���(0~100):");
	for(i=0;i<n;i++){
		scanf("%d", &m);
		if(m>=max) max=m;
		if(m<=min) min=m;
	}
	printf("1���� %d��, �õ��� %d��", max, min);
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

