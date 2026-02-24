#include <iostream> 
using namespace sdt;
class student
{
    char name[30];
    int age;
    int percentage;

    public:
               void getdata(void); // these are the member functions of a class 
               void display(void);
};
void student :: getdata(void)  // :: is the scope resolution operator
{
  cout<<"enter name: " << endl;
  cin>>name;
  cout << "Enter age : "<< endl;
  cin>>age;
}
void student :: display(void)
{
  cout<<"\n name : ";
  cout<<"\n age : ";
}
int main()
{
  student s1; //here s1 is an object and student is the class
  s1.getdata();
  s1.display();
  return 0;
}
