#include "hello.h"
#include "number.h"

template class Number<int>;


int main(int argc, char const *argv[])
{
    Hello *h  =new Hello();

    h->sayHello();




    Number<int> i1;
    Number<float> f1;
    Number<int> i2(1);
    Number<float> f2(1.f);

    i1.printValue();
    i2.printValue();
    f1.printValue();
    f2.printValue();


    // petit test avec les datas...
    i1.setData("One","Un");
    i1.setData("Car","Véhicule de type automobile");

    printf("getData(\"Car\") = %s\n",i1.getData("Car").c_str());
    printf("printDatas() : \n");
    i1.printDatas();

    return 0;
}