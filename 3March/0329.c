/*
//���� �̱� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int start, last, num;
	
	srand (time(NULL)); // srand() : �Ź� ������ ������ �߻���Ű�� ���ϰ� ��.
	
	printf("*** ���� ��÷ �̱� ���α׷� ***");
	printf("��ȣ�� ������ �Է��Ͻÿ�.\n(���� ��ȣ, ������ ��ȣ. �Է� �� �������� ���� ó��) :");
	scanf("%d %d", &start, &last);
	
	//rand() : 0 ~ 32767 ������ ������ ���� �߻���Ű�� �Լ�. 
	num = rand()%(last-start+1)+start; // start ~ last ������ �����ϱ� ���� ����. 
	
	printf("�����մϴ�! ���� ��ȣ�� %d �Դϴ�.\n", num);
	return 0;
}
*/

/*
//å ���� 
#include <stdio.h>
int main(){
	int money, book = 15000;
	printf("å�� ������ %d �� �Դϴ�.\n����� ���� �뵷�� ���ΰ���? : ", book);
	scanf("%d", &money);
	if(money >= book){
		printf("���Կ� �����ϼ̽��ϴ�. ���� �뵷 : %d ��", money-book);	
	}
	else{
		printf("�뵷�� ���� �����Ͻ� �� �����ϴ�. ������ �ݾ� : %d ��", book-money); 
	}
	return 0;
}
*/

/*
//�հ�? ���հ�? 1
#include <stdio.h>
int main(){
	int score, pass;
	printf("������ �Է��ϼ��� :" );
	scanf("%d", &score);
	printf("�հ����� �Է��ϼ��� : ");
	scanf("%d", &pass);
	
	if(score>=pass? printf("�հ�\n"):printf("���հ�\n")); //if���� ���� �����ڸ� ��ģ ��! 
	
	return 0; 
} 
*/

#include <stdio.h>
int main(){
	int score1, score2;
	
	printf("1������ ���� �Է� : ");
	scanf("%d", &score1);
	printf("2������ ���� �Է� : ");
	scanf("%d", &score2);
	
	printf("%s", (score1>=60 && score2>=60)? "�հ�":"���հ�");
	return 0;	
} 
