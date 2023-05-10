#include <stdio.h>
#include <stdbool.h> //bool 자료형을 사용하기 위해서는 stdbool.h 헤더 파일을 선언해 주어야 한다. 
int main()
{
	/*
	int a = 30; //정수형 변수 : 4byte 
	float b = 3.14;//실수형 변수 : 4byt
	char c = 'A';//문자 변수 : 1byte
	char d[6]={'K', 'O', 'R', 'E', 'A', '\0'};//문자열 변수 : 6byte. 이런 형식으로 값을 부여할 땐 반드시 뒤에 NULL 을 넣어야 한다. 
	char f[6]="KOREA";//문자열 변수, 좀 더 효율적으로 넣는 것. 이런 형식으로 값을 부여하면 자동으로 NULL 이 들어간다. 
	printf("%d %f %c %s\n", a, b, c, d);
	*/
	
	/*
	int max = 2147483647;
	printf("%d\n", max);
	max+=1; //int 형이 저장할 수 있는 최댓값인 2147483647 을 초과했기 때문이다. 이때는 int 가 아닌 unsigned int 또는 long long int 를 사용하자. 
	printf("%d\n", max);
	*/
	
	/*
	char a = 'A';
	char b = a+1;
	printf("ASCII[%d]=%c\n", a, a); 
	printf("ASCII[%d]=%c\n", b, b);
	//아스키 코드 : 7bit 로 128개의 문자를 표현하는 2진 코드 체계. 
	*/
	
	/*
	char a[5]={'K', 'O', 'R', 'E', 'A'};
	printf("%c\n", a[1]);
	printf("%s\n", a);
	char b[6] = {'K','O','R','E','A','\0'};
	printf("%s\n", b);
	char c[6] = "KOREA";
	printf("%s\n", c);
	*/
	
	/*
	bool a = false; //true == 1 / false == 0;
	bool b = 25; //bool : 0 이외의 숫자는 모두 참이라고 인식 
	printf("%d %d\n", a, 0);
	printf("%d %d\n", b,true);
	*/
	
	
	return 0;
}
