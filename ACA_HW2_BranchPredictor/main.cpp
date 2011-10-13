#include<vector>
#include<fstream>
#include<string>
#include<iostream>
#include<cstdlib>
#include <sstream>
using namespace std;
int main(int argc,char* argv[]){
	argc=2;
	argv[1]="64";
	if(argc<2){
		cout << "Missing BTB entries!" << endl;
		return 1;
	}

	vector<int> BTB( atoi( argv[1] ) );
	ifstream fin("history.txt");
	string str, brPC, brTarget;
	int taken;
	while(getline(fin,str)){
		istringstream sin(str);
		sin >> brPC >> brTarget >> taken;
		cout << brPC << " " << brTarget << " " <<taken<<endl;
	}
	system("PAUSE");
}