//Class1.cpp : 이 파일에는 'main' 함수가 포함됩니다.거기서 프로그램 실행이 시작되고 종료됩니다.


// C/C++ 언리얼 학습 진행
// 1. 변수(기본 자료형 type)
//      정수(int...)
//      실수(float, double...)
//      문자형(char) -> 문자열(string) 클래스
//      bool(boolean) 1/0, true/false
//      상수(const) 메롱멍청이
// ------------------------------------------------------------
//      local, global, static variable
//      사용자 정의 자료형 (전처리문과 함수 원형 사이에 선언)
//          열거체 enumerates types
//          구조체  structure type
//          typedef 별칭
//      배열[] (같은 타입 변수들의 집합)
//          1차원 배열, 다(n)차원 배열
//      포인터*
//          & 주소연산자, 번지연산자
//          * 참조연산자
//          NULL, nullptr
//          이중포인터
//          포인터연산
//          배열 포인터 * / 포인터 배열 []
//          동적 메모리 할당 생성(new), 해제(delete) / 메모리 누수(memory leak)
//          배열의 동적 할당
//              생성 int* arr = new int[10]();
//              해제 delete[] arr;
//          참조자 변수의 별명 int& a_ref = a;
// 
// 2. 연산자
//      산술연산자(+, -, *, /, %)
//      대입연산자(=, +=, -=, *=, /=, %=)
//      비교연산자(==, !=, >, >=, <, <=)
//      논리연산자(&&, ||, !)
//      증감연산자(++x, x++, --x, x--)
//      기타연산자
//          비트연산자(<<, >>, ...)
//          쉼표연산자(,)
//          삼항연산자( 조건식 ? a : b )
//          sizeof() 메모리 크기 반환 연산자
//          :: 범위지정연산자 std::cout
//          namespace 이름 공간 using namespace std;
// 3. 제어문
//      조건문
//          if, if/else, if/else if/else
//          switch case
//      반복문
//          while문, do while문
//          for문
// 
// 4. 함수
//      함수 선언, 정의, 호출
//      main()
//      입출력함수(printf()/scanf(), cout/cin/endl
//      모듈화(.h, .cpp), 전처리기(선행처리기)
//      메모리 구조(
//                  코드      : code
//                  데이터    : global, static variable
//                  heap      : 동적 할당 (dynamic allocation)
//                  stack     : local, parameter
//                  )
//      매개변수(인수 전달 방법) parameter, arguments
//          call by value       값
//          call by address     주소
//          call by reference   참조
// 
//      const 매개변수
//      디폴트 인수 default arguments (선언시 변수의 값도 줄 수 있는것)
//          오른쪽 부터 순서대로 지정할 수 있고 가운데나 왼쪽끝에 지정할 수 없다
//      함수 오버로딩(Overloading)
//          함수 중복 정의
//      
// 
// 5. 객체
//      OOP(객체지향프로그래밍)
//          추상화(abstraciton)
//          상속(inheritance)
//          다형성(polymorphism)
//          캡슐화(encapsulation)
//      클래스/인스턴스
//          Animal lion;    //객체
//          Animal* tiger = new Animal(); //인스턴스
//      구성
//          멤버변수 //필드, 속성
//          멤버함수 //method
//      생성자/소멸자
//          Car();  //생성 호출, 오버로딩 o
//          ~Car(); //소멸 호출, 오버로딩 x, 메모리 해제
//      객체생성/소멸
//          객체생성      메모리(데이터) 할당
//          객체포인터*   객체의 주소 대입
//          객체참조자&   객체의 값을 대입
//          객체소멸
//              동적 할당   new 생성
//                          delete 해제
//      멤버 접근 연산자
//          객체 (.)
//          객체포인터 ->
//      접근지정자(제한)
//          캡슐화(정보은닉성)
//          public      //공개, 내부 외부 접근가능
//          protected   //부분 공개, 상속받은 클래스 내부 접근가능
//          private     //비공개, 클래스 내부에서만 접근가능 
//      상속(inheritance)
//          부모의 성질을 이어받아 확장된 형태로 만드는 것.
//          추상화된 부모를 실체화하는 과정.
//          부모클래스 parent class(기반클래스 base class) 
//          자식클래스 child class(파생클래스 derived class)
//      오버로딩/오버라이팅
//          오버로딩 : 중복정의
//          오버라이딩 : 재정의
//      다형성
//          멤버함수의 기능적 다형성과 상속을 통한 계층관계를 활용하는 기술
//          형변환(casting)
//              업 캐스팅(암시적 형변환 가능)
//                  Suv mySuv;
//                  Car* ptr_car = &mySun;
//              다운 캐스팅 (암시적 형변환 불가능, 명시적 형변환 필수)
//                  Car myCar;
//                  Suv* ptr_suv = (Suv*)&myCar;    //명시적 형변환
//              명시적 형변환
//                  Suv* ptr_suv = (Suv*)ptr_car;
//                  //dynamic_cast<변환타입>(변환대상);
//                  Suv* ptr_suv = dynamic_cast<Suv*>(car_ptr);
// 
// VisualStudio
//      debug/debugging
//      break point,F5
//      build
// 


/*ctrl + shift + /
블록주석
*/
/* *(별, 아스티릭), 포인터, 블록주석, 곱셈연산자, 참조연산자
*/
// 한 줄 복제 ctrl + d
// 한 줄 이동 alt + ↑, alt + ↓
// ctrl + shift + enter => 커서만 넘어가는 엔터
//한줄 주석 ctrl + /


//void max1();
//void max2();
//void max3();
//void는 리턴 타입이 빈 값이다. 공허 

/*
#include <iostream>

//리턴타입 int(정수)
int main()
{
    //std::cout << "Hello World!\n"; //\n -> new line 줄바꿈
    //// <<출력연산자
    //// >>입력연산자
    //return 0;

    //A = B;    // 대입연산자 (B를 A에 대입시켜라)
    //A == B;   // == 같다
    //A === B;  // === 타입, 값이 같다

    int length = 5; 
    int height;
    height = 4; // 변수 초기화 안하면 오류 발생

    std::cout << length << std::endl;
    std::cout << height << std::endl; //초기화되지 않은 'height' 지역 변수를 사용했습니다.
    // \n-> new line (모든 언어 공용)
    // endl -> endline (줄바꿈, cpp에서만 사용됨)

    length = 10;
    height = 8;
    std::cout << length << std::endl;
    std::cout << height << std::endl;

 
    //int a = 10000000000000000; // int형은 4Byte ↑ Overflow
    //std::cout << "a의 값은 : " << a << std::endl;
    //return 0;

    char myChar = 'A';
    std::cout << myChar << std::endl;
    char myChar2 = 50;
    char myChar3 = 99;
    int myInt = 50;

    char myB = 'B';

    std::cout << myChar2 << std::endl;
    std::cout << myChar3 << std::endl;
    std::cout << myInt << std::endl;
    std::cout << myChar + myB << std::endl;

}

*/