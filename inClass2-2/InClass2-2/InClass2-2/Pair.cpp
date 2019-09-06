#include "Pair.h"
//#include <iostream>
//using namespace std;

template <class T>
Pair<T>::Pair()
{

}

template <class T>
Pair<T>::Pair(const T& t1, T& t2) : item1(t1), item2(t2)
{
	
}

template <class T>
void Pair<T>::setItems(const T& t1, const T& t2)
{
	item1 = t1;
	item2 = t2 ;
}

template <class T>
T Pair<T>::getItem1()const
{
	return item1;
}

template <class T>
T Pair<T>::getItem2()const
{
	return item2;
}

template <class T>
T Pair<T>::getMax()const
{
	if (item1 > item2)
		return item1;
	else
		return item2;
}

template <class T>
T Pair<T>::getMin()const
{
	if (item1 < item2)
		return item1;
	else
		return item2;
}

