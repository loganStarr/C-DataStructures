#pragma once
class Node
{
public:
	Node* PointerNext;
	int Value;
	Node(int val)
	{
		Value = val;
		PointerNext = nullptr;
	}
private:
	

};

