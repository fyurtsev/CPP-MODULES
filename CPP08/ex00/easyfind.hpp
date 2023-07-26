#pragma once

#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

class OutOfContainer :: public std::exception{
    public:
        const char *what() const throw() {
            return ("Value doesn't have in container");
        }
}

template <typename T>
int easyfind(T t, int i)
{
    typename T::iterator it;
    for (it = t.begin(); it < t.end(); it++)
        if(*it == i)
            return(*it);
    throw OutOfContainer;
}