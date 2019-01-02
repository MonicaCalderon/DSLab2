#include "ListNode.hpp"

ListNode::ListNode()
{
}

ListNode::~ListNode()
{
}

int ListNode::getData() {
	return this->data;
}

ListNode* ListNode::getNext() {
	return this->next;
}