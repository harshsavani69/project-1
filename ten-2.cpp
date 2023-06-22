#include<iostream>
#include<string.h>

using namespace std;

class Student{
	public:
		int id;
		char name[100];
		int age ;
		char course[100];
};
int main()
{
		Student s,s1;
		cout<<"enter id : ";
		cin>>s.id;
		cout<<"enter name : ";
		cin>>s.name;
		cout<<"enter age : ";
		cin>>s.age;
		cout<<"enter course : ";
		cin>>s.course;
			 
		cout<<s.id<<endl;
		cout<<s.name<<endl;
		cout<<s.age<<endl;
		cout<<s.course<<endl;
			 
			cout<<"enter id : ";
	      	cin>>s1.id;
			cout<<"enter name : ";
			cin>>s1.name;
			cout<<"enter age : ";
			cin>>s1.age;
			cout<<"enter course : ";
			cin>>s1.course;
			 
		cout<<s1.id<<endl;
		cout<<s1.name<<endl;
		cout<<s1.age<<endl;
		cout<<s1.course<<endl;
}
