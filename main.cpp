

/* Syntax for calling member function in an class is */
/* object.function(arguments); */

#include<iostream.h>
class addition
{
public:
int add(int, int);
};
int main(){
cout<<"Enter any Two numbers:";
cin>>a>>b;
               /*Must create an instance of the class then only the output will come*/
addition obj;
cout<<"sum:" <<obj.add(a, b)<<endl;          /*The instance is {addition} and arguments are {a and b}
}
int addition::add (int x, int y)
{
    int c;
    c=x+y;
    return c;
}
