#include <iostream>
#include<string>
using namespace std;

struct person
{
	string name;
	int age;
	char salair[100];

}p1;

int  main ()
{
	cout << "please enter person details"<<endl;
	cout << "enter the name ";
	getline(cin,p1.name);
	cout << "enter your age ";
	cin >> p1.age;
	cout << "enter your salair ";
	cin.ignore();
	cin.getline(p1.salair,100);
	//Print the info..........
	cout << "your name  is : " << p1.name << endl;
	cout << "your age   is : " << p1.age << endl;
	cout << "your salair  is : " << p1.salair << endl;
	system("pause");
	return 0;
}
