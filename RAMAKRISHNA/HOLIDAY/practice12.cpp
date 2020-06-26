#include <iostream> 
#include <algorithm> 
  
using namespace std; 
int sor(int a[],int n)
{
	int i,temp=a[0];
	for(i=0;i<n;i++)
	{
		if(temp>a[i])
		{
			temp = a[i];
		}
	}
	return temp;
}
			
		
	
  
int main() 
{ 
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    int i;
    sort(a, a+10); 
  
    cout << "\n\n The array after sorting is : "; 
    for(i=0;i<10;i++)
    {
		cout << a[i];
	}
	return 0;
}
	
	
	
		
