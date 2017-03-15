#include "List.h"
#include <iostream>
using namespace std;
/*
List();
int getSize()const;
bool isFull()const;
bool isEmpty()const;
void insert(ElemType); //append new element
void insert(ElemType,int pos);//insert new element at a specified pos
void remove(ElemType); //removes specified element from the list
void removeAt(int pos);//removes element which is located at pos
int indexOf(ElemType)const; //returns index/pos of specified element
ElemType elementAt(pos)const ;// returns the element which is located at pos
void clear();//make list empty
void print()const; //print all elements
*/

List::List():size(0){}
bool List::isFull()const	{ return size==MAX_SIZE;}
bool List::isEmpty()const	{ return size==0; }
void List::clear()			{ size=0; }
int List::getSize()	{ return size; }
void List::insert(ElemType e)
{
	if(!isFull())
	{
		elements[size]=e;
		size++;
	}
}
void List::insert(ElemType e, int pos)
{
	if(!isFull())
	{
		if(isPosValid(pos) )
		{
			for(int i=size;i>pos;i--)
			{
				elements[i]=elements[i-1];
			}
			elements[pos]=e;
			size++;
		}
	}
}

bool List::isPosValid(int pos)const	{ return (pos>=0 && pos<=size ); }

void List::remove(ElemType e)
{
	int pos=indexOf(e);
	if(pos != -1 )
		removeAt(pos);
}
void List::removeAt(int pos)
{
	if(!isEmpty())
		if(pos>=0 && pos<size)
		{
			for(int i=pos;i<size-1;i++)
				elements[i]=elements[i+1];
			size--;
		}
}
int List::indexOf(ElemType e) const
{
	int pos=-1;
	for(int i=0;i<size;i++)
		if(e==elements[i])
		{
			pos=i;
			break;
		}
		return pos;
}
void List::print()const
{

	for (int i = 0; i < size; i++)
	{
		cout<<i+1<<". passanger is:  "<<elements[i]<<endl;
	}
}


bool List::IsMember(ElemType passangerName)
{
	int pos=indexOf(passangerName);
	return pos!=-1;

}