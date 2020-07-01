#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* prev;
	Node* next;
};

Node * Head = NULL;
Node * Tail = NULL;

//Insert at the beginning // 

void Insert_at_Head(int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;
	if (Head == NULL)
	{
		Head = temp;
		Tail = temp;
		return;
	}
	Node * temp2 = Head;
	temp2->prev = temp;
	Head = temp;
	temp->next = temp2;
}//End of Insert_at_Head//


//Print//
void Print()
{
	Node * temp = Head;
	cout << "List is : ";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}//End of print//


//Reverse Print//
void Print_reverse()
{
	Node * temp = Tail;
	cout << "Reverse List is : ";
	while (temp != NULL)
	{
		cout << temp->data<<" ";
		temp = temp->prev;
	}
	cout << endl;

}//End of reverse Print//



//Insert at tail//

void Insert_at_Tail(int x)
{
	Node * temp = new Node;
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;
	if (Head == NULL)
	{
		Head = temp;
		Tail = temp;
		return;
	}
	Node * temp2 = Tail;
	temp2->next = temp;
	temp->prev = Tail;
	Tail = temp;
}//End of insert at tail//


int main()
{
	int menu, x;
	while (1)
	{
		cout << "Choose an option : \n";
		cout << "Press 1 to Insert an element in front of the list: \n";
		cout << "Press 2 to Insert an element at the tail of the list: \n";
		cout << "Press 3 to Print the list in reverse order : \n";
		cout << "Press 4 to Print the list in original form : \n";
		
		cout << "Press 0 to Exit the program .\n";
		cin >> menu;
		if (menu == 1)
		{
			cout << "Enter a number :\n";
			cin >> x;
			Insert_at_Head(x);
			Print();
		}
		else if (menu == 2)
		{
			cout << "Enter a number :\n";
			cin >> x;
			Insert_at_Tail(x);
			Print();
		}
		else if (menu == 3)
		{
			Print_reverse();

		}
		else if (menu == 4)
		{
			Print();

		}
		else if (menu == 0)
		{
			break;
		}
	}
	system("pause");
}