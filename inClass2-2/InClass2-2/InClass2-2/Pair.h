#pragma once
#ifndef PAIR
#define PAIR
//#include <iostream>
//using namespace std;

template<class T>

class Pair
{
private:
	T item1, item2;

public:
	Pair();
	Pair(const T& item1, T& item2);

	 T getMax() const;
	 T getMin() const;
	 
	 void setItems(const T& item1, const T& item2);
	
	 T getItem1() const;
	 T getItem2() const;
};


#include "Pair.cpp"
#endif