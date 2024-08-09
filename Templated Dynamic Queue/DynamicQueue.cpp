#include "DynamicQueue.h"
template <class T>
DynamicQueue<T>::DynamicQueue()
{
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}
template <class T>
DynamicQueue<T>::~DynamicQueue()
{
	clear();
}
template <class T>
void DynamicQueue<T>::enqueue(T item)
{
	QueueNode* newnode = nullptr;
	newnode = new QueueNode;
	newnode->value = item;
	newnode->next = nullptr;
	if (numItems == 0)
	{
		front = newnode;
	}
	else
	{
		rear->next = newnode;
	}
	rear = newnode;
	numItems++;
}
template <class T>
void DynamicQueue<T>::dequeue(T& item)
{
	QueueNode* temp = nullptr;
	if (numItems == 0)
	{
		cout << "The queue is empty";
	}
	else
	{
		item = front->value;
		temp = front;
		front = front->next;
		delete temp;
		numItems--;
	}
}
template <class T>
int DynamicQueue<T>::length() const
{
	return numItems;
}

template <class T>
void DynamicQueue<T>::clear()
{
	T value;
	while (numItems > 0)
		dequeue(value);
}