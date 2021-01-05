#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int money[6] = { 100,50,20,10,5,1 };
int occ[6] = { 1,75,100,100,100,100 };
void deposit() {
	int depam,tkam,tknumbr,sum=0;
	cout << "Enter the ammout that you want to deposit:";
	cin >> depam;
	while (depam != sum&&sum<depam) {
		cout << "Enter the ticket values";
		cin >> tkam;
		cout << "How many:";
		cin >> tknumbr;
		sum = sum + (tkam * tknumbr);
		for (int o = 0; o < 6; o++) {
			if (money[o] == tkam) {
				occ[o]=occ[o]+tknumbr;
			}
		}
	}
}
void collect() {
	int colam,f=0,i=0;
	cout << "Enter the ammount that you want to collect:";
	cin >> colam;
	while (colam!=0) {
		f = colam / money[i];
		if (f >= 1 && occ[i] - f < 0) {
			i++;
		}
		else {
			colam = colam % money[i];
			if (f >= 1) {
				cout << "Please collect " << f << " rapes of " << money[i] << endl;
				occ[i] = occ[i] - f;
			}i++;		
		}		
	}
}
void chech() {
	int i = 0;
	int total = 0;
	string pass;
	while (i < 3 && pass!="sgerc@as12$ALj") {
		cout << "Enter the password:";
		cin >> pass;
		i++;
	}if (i >= 3) {
		cout << "Your are not allowed to do more";
	}
	else {
		for (int i = 0; i < 6; i++) {
			cout << money[i] << " x " << occ[i] << " peice" << endl;
			total = total + (money[i] * occ[i]);
		}cout << total;
	}

}

void file(string name) {
	ofstream uf(name + ".txt");
	if (uf.is_open()) {
		uf << "Money" << "        " << "Occ" << endl;
		for (int i = 0; i < 6; i++) {
			uf << money[i] <<"           " << occ[i] << endl;
		}uf.close();
	}
}
int main()
{
	string fname;
	int choice;
	do {
		cout << "Press 1 For deposit" << endl;
		cout << "Press 2 to collect" << endl;
		cout << "Press 3 To check" << endl;
		cout << "Press 4 To save the info on file" << endl;
		cout << "Press 0 to quit" << endl;
		cout << "What do want do:";
		cin >> choice;
		switch (choice) {
		case 1:
			deposit();
			break;
		case 2:
			collect();
			break;
		case 3:
			chech();
			break;
		case 4:
			cout << "Enter the file name";
			cin >> fname;
			file(fname);
			break;
		}
	} while (choice != 0);

	return 0;
}