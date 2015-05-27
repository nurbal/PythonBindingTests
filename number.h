#pragma once

template <typename T> class Number
{
public:
    Number();
    Number(T value) {m_Value = value;}
 
    void SetToZero() {m_Value -= m_Value;}
//void print();

protected:
    T m_Value;

};

