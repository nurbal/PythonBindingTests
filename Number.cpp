#include "number.h"

#include <stdio.h>



// specialisations
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


template<>
void Number<int>::print()
{
    printf("%d\n",m_Value);

}

template<>
void Number<float>::print()
{
    printf("%f\n",m_Value);
}


