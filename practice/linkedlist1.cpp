#include <iostream>
using namespace std;
class Node { 
public: 
    int data; 
    Node* next; 
}; 
int main()
{
	Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
      
    head->data = 1;
    head->next = second;
    second->data = 23;
    second->next = third;
    third->data = 45;
    third->next = NULL;
    
    Node* n = head;
    Node* k = second;
    cout << k->data;
    cout << "\n";
    while(n!=NULL)
    {
		cout << n->data;
		cout << "\n";
		n = n->next;
	}
	
    return 0;
}

    
