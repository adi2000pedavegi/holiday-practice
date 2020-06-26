#include <iostream>
using namespace std;
int main()
{
	int temp,r,i;
	cout <<"armstrong number between 1 and 1000:";
	for(i=1;i<1000;i++)
	{
		
		int arm=0;
		temp=i;
		while(temp>0)
		{
		  r=temp%10;
          arm=arm+(r*r*r);
		  temp=temp/10;
	    }
	    
	  
	
	   if(arm==i)
	 {
		cout <<"armstrong number\n" <<i;
		
		
	 }
	  
    }	

    
  
   return 0;
}
 
