#include "hello.h"
#include "number.h"

template class Number<int>;


int main(int argc, char const *argv[])
{
    Hello *h  =new Hello();

    h->sayHello();




    Number<int> i1;
    Number<float> f1;
    i1.SetToZero();
    Number<int> i2(1);
    Number<float> f2(1.f);





    return 0;
}