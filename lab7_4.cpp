#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string name[10] = {"Luffy","Zoro","Sanji","Nami","Naruto","Sakura","All Might","Saitama","Eren","Mikasa"};
	int id[10] = {123,196,225,329,420,451,515,666,690,787};
	double gpa[10] = {1.50,2.12,4.00,3.69,2.50,2.76,3.54,2.14,3.50,1.88};
	double g ;
	cout << "Please input GPA: ";
	cin >> g ;
	int j = 0 ;
	while (j<10){
		if ((gpa[j])>=g){
			cout << id[j] <<" "<< name[j] <<" "<<gpa[j]<<"\n" ;
		}
		j++ ;
	}
		
	return 0;
}
