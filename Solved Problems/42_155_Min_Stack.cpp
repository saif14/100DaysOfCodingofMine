#include <bits/stdc++.h>

using namespace std;

class MinStack
{

public:
	int val;
	MinStack *next;
	MinStack *head = NULL;
	MinStack()
	{
		
	}

	void push(int val)
	{
		
		if (!head)
		{

			MinStack *newNode = new MinStack();
			newNode->val = val;
			newNode->next = NULL;
			head = newNode;
		}
		else
		{
			MinStack *newNode = new MinStack();
			newNode->val = val;
			newNode->next = head;
			head = newNode;
		}
		// if(head->val < minVal)
		// minVal = head->val;

	
	}

	void pop()
	{
		MinStack *tmp = head;
		head = head->next;
		tmp->next = NULL;
	}

	int top()
	{
		return head->val;
	}

	int getMin()
	{
	
		MinStack *tmp = head;
		int minVal = INT_MAX;
		while (tmp)
		{
			if (tmp->val <= minVal)
				minVal = tmp->val;

			tmp = tmp->next;
		}
		return minVal;
	}
};

// head = NULL;
int main()
{
	MinStack *obj = new MinStack();
	obj->push(-2);
	obj->push(0);
	obj->push(-3);

	cout<<"Min Val: "<<obj->getMin()<<endl;
	obj->pop();
	cout<<"top "<<obj->top()<<endl;
	cout<<"Min Val: "<<obj->getMin()<<endl;
}