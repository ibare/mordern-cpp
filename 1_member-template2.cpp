#include <iostream>
using namespace std;

template<typename T> class complex
{
  T re;
  T im;

public:
  complex(T a = T(), T b = T()) : re(a), im(b) { }
};

int main()
{
  complex<double> c(1.2, 3.4);
}
