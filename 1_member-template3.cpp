#include <iostream>
using namespace std;

template<typename T> class complex
{
  T re;
  T im;

public:
  complex(T a = T(), T b = T()) : re(a), im(b) { }
  // 일반화된 복사 생성자
  template<typename U> complex(const complex<U>& c);
  // 모든 타이의 complex 는 private에 접근할 수 있어야 한다.
  template<typename U> friend class complex;
};

// 일반(Generic) 복사 생성자의 외부 구현
template<typename T> template<typename U>
complex<T>::complex(const complex<U>& c) : re(c.re), im(c.im)
{

}

int main()
{
  complex<int> c1(1, 3);
  complex<int> c2 = c1; // 복사 생성자, 사용자가 만들지 않으면 기본 복사 생성자가 만들어져서 OK
  complex<double> c3 = c1;
}
