#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int _N) : N(_N) {}

Span::Span(Span &c) {
	*this = c;
}

Span &Span::operator=(Span &_sp)
{
    this->N = _sp.N;
    this->sp = _sp.sp;
    return *this;
}

void Span::addNumber(long num)
{
    if(num < INT_MIN || num > INT_MAX)
        throw outOfLimits();
    if(this->sp.size() < this->N)
        this->sp.push_back(num);
    else
        throw fullException();
}

int Span::shortestSpan() {
    int span = -1;
    std::list<int>::iterator it;
    for (it = this->sp.begin(); it != this->sp.end(); it++) {
        std::list<int>::iterator ite;
        for (ite = std::next(it); ite != this->sp.end(); ite++) {
            int diff = std::abs(*it - *ite);
            if (span == -1 || diff < span)
                span = diff;
        }
    }
    if (span == -1)
        throw notEnoughNum();
    else
        return span;
}

int Span::longestSpan() {
    if (this->sp.size() > 1)
        return (*std::max_element(this->sp.begin(), this->sp.end()) - *std::min_element(this->sp.begin(), this->sp.end()));
    else
        throw notEnoughNum();
}


Span::~Span() { this->sp.clear(); }