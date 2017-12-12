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


	}

	void remove_node(int n)
	{
		node *prev = head;
		node *curr = head;
		while (prev->next != NULL)
		{
			if (curr->data == n)
			{
				prev->next = curr->next;
				return;
			}
			curr = curr->next;
			if (curr == prev)
			{
				curr = curr->next;
			}
			else
			{
				curr = curr->next;
				prev = prev->next;
			}
		}
	}


	void print_list()
	{
		node *tmp = new node;
		tmp = head;

		while (tmp != NULL)
		{
			cout << tmp->data << "   ";
			tmp = tmp->next;
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
	ll.print_list;






	system("pause");
	return 0;

}

