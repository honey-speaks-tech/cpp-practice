#pragma once
#include <iostream>

template <class T>
T maxi(T const& t1, T const& t2)
{
    return t2 < t1 ? t1 : t2;
}