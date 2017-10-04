#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
class Stack {
    T * array_; 
    size_t array_size_; 
    size_t count_ = 0; 
public:
    Stack() : array_size_(size_t(10)), array_(new T[10]) 
    {}

    Stack(size_t st) : array_size_(st), array_(new T[st])
    {}
	
    T& operator [](int pos) 
    {
        return array_[pos];
    }

    size_t count() const 
    {
        return count_;
    };

    void push(T const &value) 
    {
        if (count_ == array_size_) 
	{
            T* new_array_ = new T[2*array_size_]; 
            for (int i = 0; i < array_size_; ++i) 
	    {
                new_array_[i] = array_[i]; 
            }
            delete[] array_; 
            array_ = new_array_; 
        }
        array_[count_] = value; 
        ++count_; 
    }

    T pop() 
    {
        if (count_ == 0) 
	{
            throw runtime_error("!Стек пуст!"); 
        }
        --count_; 
        return array_[count_];
    }
    bool empty() const 
    {
        if(count() == 0) return true;
        return false;
    }
    
    ~Stack<T>() 
    {
        delete[] array_; 
    }
};


#endif
