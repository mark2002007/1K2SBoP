#include <iostream>
#include <fstream>
#include <cstring>
#include "Header.h"
using namespace std;

int main() {
	ifstream fin("IN.txt");
	Box box[100];
	string buff[100][3];
	float param[100][3];


	int b_num = 0;

	for (int i = 0; fin; i++) {
		fin >> buff[i/3][i%3];
		if (i % 3 == 2) b_num++;
	}
	fin.close();
	for (int i = 0; i < b_num; i++) {
		for (int j = 0; j < 3; j++) {
			param[i][j] = atof(buff[i][j].c_str());
		}
	}
	for (int i = 0; i < b_num; i++) {
		box[i].height = param[i][0];
		box[i].width = param[i][1];
		box[i].lenght = param[i][2];
		box[i].CountVol();
	}
	insertionSort(box,b_num);
	ofstream fout("OUT.txt");
	for (int i = 0; i < b_num; i++) {
		fout << box[i].height << " " << box[i].width << " " << box[i].lenght << " " << box[i].volume << endl;
	}
	fout.close();
	int max_l_b_i = 0;
	int max_l = 0;
	for (int i = 0; i < b_num; i++) {
		if (box[i].lenght > max_l) max_l_b_i = i;
	}
	cout << "Box with largest lenght >>> height : " << box[max_l_b_i].height << "; width : " << box[max_l_b_i].width << "; length : " <<  box[max_l_b_i].lenght << "; volume : " << box[max_l_b_i].volume << endl;
		
	return 0;
}
