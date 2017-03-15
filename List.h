#ifndef _LIST_
#define _LIST_
#include <string>
using namespace std;
typedef string ElemType;
const int MAX_SIZE=25;
class List
{
private:
		ElemType elements[MAX_SIZE];
		int size;
public:
	List();
	int getSize();
	bool isFull()const;
	bool isEmpty()const;
	void insert(ElemType); //append new element
	void insert(ElemType,int pos);//insert new element at a specified pos
	void remove(ElemType); //removes specified element from the list
	void removeAt(int pos);//removes element which is located at pos
	int indexOf(ElemType)const; //returns index/pos of specified element
	ElemType elementAt(int pos)const ;// returns the element which is located at pos
	void clear();//make list empty
	void print()const; //print all elements
	bool IsMember(ElemType);

private:
	bool isPosValid(int)const; //validation function for pos
};
#endif