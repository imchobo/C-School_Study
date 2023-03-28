#include <iostream> // 헤더. 전처리기 : 사용자가 작성한 코드를 컴파일전 전처리 지시자에 맞게 변환


using namespace std; // namespace  : 중복 정의된 이름들의 충돌을 방지하는 집 C++ 에서 사용하는 기능


namespace A
{
	void Render()
	{
		cout << "A" << endl;
	}
}

namespace B
{
	void Render()
	{
		cout << "B" << endl;
	}
}
int main()
{
	printf("Hello World\n");
	//  printf : C 기본언어의 출력 '함수'
	cout << "Hello World" << endl;
	// cout : 출력 객체, endl : 엔딩 객체
	// << : shift 연산자.
	// cout 에 붙은 <<: 추출 연산자.
	// cin 에는 >> 으로 쓴다.

	// ; (세미콜론) = 마침표
	A::Render();
	B::Render();
}

// 컴파일러 : 사람과 기계가 소통하게 해주는 통역기
// 프로그래밍 언어 : 사람과 컴퓨터와 소통하게 해주는 언어

// 전처리기 -> 컴파일 -> 어셈블리 -> 링커

// 전처리 과정 : 헤더파일을 치환해서 적용하는 과정

// 컴파일 과정 : 언어를 어셈블리어로 바꾸는 과정

// 어셈블리어 : 기계어에 가까운 언어.

// 링킹 과정 : 표준 C 라이브러리 사용자 라이브러리 등 , exe 파일로 만듦.

// Function : 기능 , 함수 // main -> 고정함수.
// 주석 : 컴파일 대상에서 제외함.