#include <stdio.h>
#include <string.h>
int main(){
	/*
	int *p;
	int a;
	scanf("%d", &a);
	p=&a;
	printf("%d", *p);
	*/
	/*
	int *p, i;
	int a[5]={100, 78, 95, 66, 96};
	p=a;
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ", *(p+i));
	}
	printf("%\n");
	*/
	/*
	char pw[22];
	int i;
	printf("��ȣ�� �Է��Ͻÿ� : ");
	scanf("%s", pw);
	printf("��� : ");
	for(i=0;pw[i]!=NULL;i++){
		printf("%c", pw[i]+2);
	} 
	printf("\n");
	printf("��� 2 : ");
	for(i=0;pw[i]!=NULL;i++){
		printf("%c", (pw[i]*7)%80+48);
	}
	*/
	/*
	char st[101];
	int len, i;
	gets(st);
	for(i=strlen(st)-1;i>=0;i--){
		printf("%c", st[i]);
	}
	*/
	/*
	char S[101];
	int i, c=0, cc=0;
	printf("100�� �̳��� ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", S);
	for(i=0;S[i]!=NULL;i++){
		if(S[i]=='c' || S[i]=='C'){
			c++;
			if(S[i+1]=='c' || S[i+1]=='C'){
				cc++;
			}
		}
	}
	printf("C�� ������ : %d\n", c);
	printf("CC�� ������ : %d\n", cc);
	*/
	int n, i, num=0;
	printf("�������� DNA ������ �Է��ϼ��� : ");
	for(i=0;i<10;i++){
		scanf("%1d", &n);
		num += n;
	}
	if(num%7==4) printf("����");
	else printf("�Ϲ���");
	return 0;
}
