#include <bits/stdc++.h>
using namespace std;

struct nameType{
  char fName[40];
  char lName[40];
};

struct student{
   int id;
   char home[100];
   struct nameType name;
};

int main(){

	int i, n;
	cin>>n;
	struct student std[n];

	for(i=0; i<n; i++){
		cout<<"User id = ";
		cin>>std[i].id;
		cout<<"First Name = ";
		cin>>std[i].name.fName;
		cout<<"Last Name = ";
		cin>>std[i].name.lName;
	}

	cout<<"================= Output ===================="<<endl;
for(i=0; i<n; i++){
		cout<<"User id = ";
		cout<<std[i].id<<endl;
		cout<<"Name = "<<std[i].name.fName<<" "<<std[i].name.lName<<endl;
	}



}



