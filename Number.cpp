#include "number.h"

#include <stdio.h>


// specialisation du constructeur par défaut
template<>
Number<int>::Number()
{
    m_Value = 0;
}

template<>
Number<float>::Number()
{
    m_Value = 0.f;
}