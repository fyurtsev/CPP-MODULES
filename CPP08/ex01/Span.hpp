#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <climits>

class Span{
    public:
        unsigned int N;
        std::list<int> sp;
        
        Span();
        Span(unsigned int _N);
        Span(Span &_sp);
        Span &operator=(Span &_sp);
        
        void addNumber(long num);
        int shortestSpan();
        int longestSpan();
        ~Span();

        class outOfLimits : public std::exception {
         public:
            const char* what() const throw() {
                return "this num out of limits";
            }
        };
        
        class fullException : public std::exception {
          public:
            const char* what() const throw() {
                return ("number cannot be added because the list is full");
            }
        };

        class notEnoughNum : public std::exception
        {
          public:
            const char *what() const throw() {
                return ("No span can be found. There are either no numbers stored or only one.");
            }
        };
};
