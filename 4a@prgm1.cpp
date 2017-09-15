#include <iostream>
using namespace std;

float cube(float a)
{
    float cu;
    cu=a*a*a;
    return(cu);
}
	int main()
{
                                  
    float a,cu;
    cout<<"\nEnter any number : "<<endl;
    cin>>a;
 
    cu=cube(a);                                         
 
    cout<<"\nThe Cube of Number  "<<a<< " is :: "<<cu;
 
    return 0;
}
 


