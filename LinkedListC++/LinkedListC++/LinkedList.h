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

	~LinkedList()
	{
		Clear();
	}

	void Clear()
	{
		Node* Nods = Head;
		while (Nods)
		{
			Node* Temp = Nods;
			Nods = Nods->PointerNext;
			delete Temp;
		}
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
			Head->PointerNext = Tail;
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
			Count++;
		}

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
			if (Head->Value == Value)
			{
				Node* TempPoint = Head;
				Head = Head->PointerNext;
				delete TempPoint;
				Count--;
				return;
			}
			while(Temp->PointerNext != nullptr && Temp->PointerNext->Value != Value)
			{
				Temp = Temp->PointerNext;
			}
			;
			Node* TempPoint = Temp->PointerNext;
			Temp->PointerNext = Temp->PointerNext->PointerNext;
			
			delete TempPoint;
			Count--;
			//delete *TempPoint;
		}
	}
	/*void RemoveFirst(int Value)
	{
		if()
	}*/
private:
	
};

