#include<iostream>
#include<vector>
#include<string.h>

using namespace std;


struct node
{
	int data;
	node *next;
	
};

class linked_list
{
private: 
	node *head, *current;

public:
	linked_list()
	{
		head = NULL;
		current = NULL;
	}
	void add_node(int n)
	{
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;

		if (head == NULL)
		{
			head = temp;
			current = temp;
		}
		else
		{
			current->next = temp;
			current = current->next;
		}

		node *a = new node;
		a = head;
	
		while (a->next != NULL)
		{
			cout << a->data << "   ";
			a = a->next;

		}
		cout << endl;
	}
};

int main()
{
	linked_list ll;
	ll.add_node(1);
	ll.add_node(5);
	ll.add_node(9);







	system("pause");
	return 0;

}

