#include "LinkedList.h"
#include "Node.h"
int main()
{
		LinkedList list = LinkedList();
		list.AddLast(1);
		list.AddLast(2);
		list.AddLast(3);
		list.AddLast(4);
		list.AddFirst(0);
		list.Remove(4);
		;
	
	return 0;
}