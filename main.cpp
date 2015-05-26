#include "hello.h"
#include "number.h"
int main(int argc, char const *argv[])
{
    Hello *h  =new Hello();

    h->sayHello();





    Number<int> i1(1);
    Number<float> f1(1.f);





    return 0;
}