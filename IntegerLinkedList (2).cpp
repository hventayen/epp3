// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

// int IntegerLinkedList::count(int compare) // COMPLETE THIS FOR PROBLEM 2
int IntegerLinkedList::count(int compare)
{
  SNode *currentNode = head;
  int count = 0;
  while (currentNode != nullptr)
  {
    if(currentNode->elem == compare)
    {
      count++;
    }
    currentNode = currentNode->next;
  }
  return count;
}
int IntegerLinkedList::countRecurse (SNode *ptr, int compare) {
  // COMPLETE THIS FOR PROBLEM 3
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
int IntegerLinkedList::countRecurseHelper (int compare) {
  return countRecurse(head, compare);
}
