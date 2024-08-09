#include <iostream>
#include <iomanip>
#include <string>
#include "DynamicQueue.cpp"
using namespace std;


int main()
{
	string name;
	int num;
	DynamicQueue<string> squeue;
	DynamicQueue<int> iqueue;
	int size = 0;
	cout << "How many items do you want on the queue?" << endl;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a name and a number" << endl;
		cin >> name >> num;
		squeue.enqueue(name);
		iqueue.enqueue(num);
	}
	cout << "Number of items on queue = " << squeue.length() << endl;
	cout << "Here are the names and numbers you entered" << endl;
	for (int count = 0; count < size; count++)
	{
		squeue.dequeue(name);
		iqueue.dequeue(num);
		cout << name << setw(20 - name.length()) << num << endl;

	}
}