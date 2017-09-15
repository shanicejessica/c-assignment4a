#include <iostream>
using namespace std;

float diameter(float radius)
{
        return(2*radius); 
}
float area(float radius)
{
        return (3.14 * radius * radius);
}
float circum(float radius)
{
        return(2 * 3.14 * radius);
}

int main()
{
        int radius;   
        cout<<"\n Enter Radius of Circle: ";
        cin>>radius;
        cout<<"\n diameter of circle : "<<diameter(radius);
        cout<<"\n Area of Circle : "<<area(radius);
        cout<<"\n Circumference of Circle : "<<circum(radius);


    return 0;
}
 


