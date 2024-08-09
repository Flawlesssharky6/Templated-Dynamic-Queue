#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H
#include <iostream>
using namespace std;
template <class T>
class DynamicQueue
{
private:
	struct QueueNode
	{
		T value;
		QueueNode* next;
	};
	QueueNode* front;
	QueueNode* rear;
	int numItems;
public:
	DynamicQueue();
	~DynamicQueue();
	void enqueue(T);
	void dequeue(T&);
	int length() const;
	void clear();
};
#endif

