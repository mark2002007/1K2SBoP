#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
	ifstream i1("in1.txt");
	ifstream i2("in2.txt");
	string i1_names[100];
	string i2_names[100];
	int i1_num = 0;
	int i2_num = 0;
	for (int i = 0; i1; i++) {
		i1 >> i1_names[i];
		i1_num++;
	}
	for (int i = 0; i2; i++) {
		i2 >> i2_names[i];
		i2_num++;
	}
	i1.close();
	i2.close();
	ofstream fout("out.txt");
	for (int i = 0; i < i1_num; i++) {
		bool in = true;
		for (int j = 0; j < i2_num; j++) {
			if (i1_names[i] == i2_names[j]) in = false;
		}
		if (in) fout << i1_names[i] << " ";
	}
	for (int i = 0; i < i2_num; i++) {
		bool in = true;
		for (int j = 0; j < i1_num; j++) {
			if (i2_names[i] == i1_names[j]) in = false;
		}
		if (in) fout << i2_names[i] << " ";
	}


	return 0;
}