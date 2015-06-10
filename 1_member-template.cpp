#include <iostream>
using namespace std;

template<typename T> class Stack
{
public:
  int push(T a);

  template<typename U> T foo(U a);
};

// 멤버 함수 템플릿의 외부 구현
template<typename T> template<typename U> T Stack<T>::foo(U a)
{

}
// 클래스 템플릿 멤버 함수의 외부 구현
template<typename T> int Stack<T>::push(T a)
{

}

int main()
{
  Stack<int> s;
}
