#pragma once

#include "Node.h"

class LinkedList
{
public:
	Node* Head;
	Node* Tail;
	int Count = 0;

	LinkedList()
	{
		Head = nullptr;
		Tail = nullptr;
		Count = 0;
	}

	Node* Seach(int Value)
	{
		if (Head->Value == Value)
		{
			return Head;
		}
		Node* temp = Head;
		while (temp->Value != Value && temp != nullptr)
		{
			temp = temp->PointerNext;
		}
		return temp;
	}
	void AddFirst(int Value)
	{
		if (Head == nullptr)
		{
			Head = new Node(Value);
			Count++;
		}
		else if(Count == 1)
		{
			Node* temp = Head;
			Head = new Node(Value);
			Head->PointerNext = Tail;
			Count++;
		}
		else
		{
			Node* node = new Node(Value);
			node->PointerNext = Head;
			Head = node;
		}
		Count++;
	}
	void AddLast(int Value)
	{
		if (Head == nullptr)
		{
			Head = new Node(Value);
			Count++;
		}
		else if (Count == 1)
		{
			Node* temp = Head;
			Head->PointerNext = new Node(Value);
			Count++;
		}
		else
		{
			//-> does the same thing as (*obj).
			Node* temp = Head;
			while (temp->PointerNext != nullptr)
			{
				temp = temp->PointerNext;
			}
			temp->PointerNext = new Node(Value);
			Count++;
		}
	}
	void Remove(int Value)
	{
		if (Count <= 0)
		{
			return;
		}
		else
		{
			Node* Temp = Head;
			while(Temp->PointerNext->Value != Value && Temp->PointerNext != nullptr)
			{
				Temp = Temp->PointerNext;
			}
			Node* point = Temp->PointerNext->PointerNext;
			Temp->PointerNext = point;
		}
	}
	/*void RemoveFirst(int Value)
	{
		if()
	}*/
private:
	
};

