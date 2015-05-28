#pragma once

#include <cstdio>
#include <string>
#include <map>

template <typename T> class Number
{
 public:
    Number();
    Number(T value) {m_Value = value;}
 
    void SetToZero() {m_Value -= m_Value;}
    
    void printValue(); // prints the value on the console
    void printDatas() // prints the value on the console
    {
        for (std::map<std::string,std::string>::iterator it = m_Datas.begin();it != m_Datas.end(); it++)
        {
            printf("%s = %s\n",it->first.c_str(),it->second.c_str());
        }
    }
    // les deux fonctions les plus useless du mOOOONNNNNde
    std::string getData(std::string key) {return m_Datas[key];}
    void setData(std::string key, std::string value) {m_Datas[key]=value;}

protected:
    T m_Value;

    // Data members (oui c'est des string, dans un nombre, non ça n'a aucun sens, oui je fais ce que je veux, tu vas faire quoi ? ;) )
    std::map<std::string,std::string> m_Datas;



};

