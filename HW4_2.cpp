#include <iostream>
using namespace std;
int main(){
  for(int i = 1; i<101; i++)
    {
      cout <<"factors of " <<i;
      for( int k = 1 ; k < i; k++)
	{
	  if( i % k == 0) 
	    {
	      cout<<" "<<k<<"," ; 
	    }
	}
      cout<<endl;
    }
}
