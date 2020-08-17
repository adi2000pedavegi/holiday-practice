#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void show(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

int main()
{
	stack <int> s;
	/*push(g) adds element g to the stack*/
	s.push(13);
	s.push(8);
	s.push(22);
	s.push(12);
	cout << "The stack is:";
	show(s);
	cout << "\n";
	/*returns the top most element of the updated stack*/
	cout << s.top();
	cout << "\n";
	/*returns the size of the stack*/
	cout << s.size();
	cout << "\n";
	s.pop();/*removes the top most element of the stack*/
	cout << "The updated stack is;";
	show(s); 
	return 0;
}

	
