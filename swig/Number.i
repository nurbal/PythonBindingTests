%module Number
%{
#include "../number.h"
%}


template <typename T> class Number
{
public:
    Number();
    Number(T value);
 
    void SetToZero();
    
    void printValue();
    void printDatas();

    std::string getData(std::string key) {return m_Datas[key];}
    void setData(std::string key, std::string value) {m_Datas[key]=value;}

};

%template(NumberInt) Number<int>;
%template(NumberFloat) Number<float>;