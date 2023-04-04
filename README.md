# C-School_Study

#include <iostream>


using namespace std;

int main()
{
	// 표기법 
	// _표기법
	// int _num; // 매개변수로 선언 시 많이 사용.


	// 파스칼 표기법
	//int PlayerHp;

	// 헝가리안 표기법
	// int 형이라 앞에 i 를 넣는다 . float 일 경우 f를 넣는다.

	// 변수 : 데이터가 저장되는 메모리 공간을 할당한다.
	// 변수 선언의 규칙 : 변수명에 제일 첫부분은 숫자 , 언더바를 제외한 기호는 들어갈 수 없다.

	// 자료형 : int , float , char , string , double ~~

	// long long llNum; // 8바이트 , unsigned short uNum; // 음수 값을 양수값에 더한값.
	// long lNum; // 4바이트 , int iNum; // 4바이트 - -21억 ~ 21억. , short sNum // 2바이트 -32,768 ~ 32,767
	
	// 실수 자료형
	float fNum = 1.2f; // 4바이트 , 7자리 수 까지 저장.
	const double dNum = 2.34; // 8바이트 , double 은 f를 안 붙여도 상관 없다.

	printf("%.1f", dNum);

	// 문자 자료형 charcter
	// char chNum; // 1바이트 , 범위 -127 ~ 127 = 255. 기본적으로 정수형태.

	/*string sStr = "\nasdf";
	cout << sStr << endl;
	cout << sizeof(sStr) << endl;*/

	// 불리언
	//bool nNum = true; // 1 바이트 , 참 거짓을 저장한다.

	// 변수의 초기화가 필요한 이유
	int iNum = 11;
	int iNum1 = 2;

	cout << iNum1 << endl;
	cout << iNum1 << endl;
	// 초기화 하지 않은 변수에는 쓰레기값이 들어가있어서 오류가 발생한다.
	// 상수
	int iNum3 = 10 + 20; // 10 , 20 : 리터럴 상수 (임시 메모리) , 10 + 20 의 값인 30도 임시메모리에 잡히고 그 후에 할당.
	// 임시 메모리는 그 라인을 지나면 소멸된다.
	cout << iNum3 << endl;
	// const 키워드
	const int iNum_1 = 10; // iNum은 읽기 만 허용한다.
	// const 키워드가 붙으면 선언과 동시에 초기화 해야한다.

	//------------------------------------//
}
