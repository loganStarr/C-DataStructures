#pragma once
class Node
{
public:
	Node* PointerNext;
	Node* PointerPrev;
	int Value;
	Node(int val)
	{
		Value = val;
		PointerNext = nullptr;
		PointerPrev = nullptr;
	}
private:
	

};

