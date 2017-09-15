#include <iostream>
using namespace std;

void even_odd(int Num)
{
if(Num%2 == 0)
{
  cout<<Num<<" is Even" << endl;
}
 else
{ 
  cout<<Num<<" is Odd"  << endl;
}	
}
   

int main()
{
 int Num;
 cout<< "Number: ";   
 cin>>Num;
 even_odd(Num);

 return 0;
}




