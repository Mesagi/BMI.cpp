#include<iostream>
#include<string>
#include"getBmi.h"
#include"getObesity.h"
using namespace std;
//#include "chapter4.h"

int e;
int main() {
	double height;
	double weight;
	double bmi;
	double bmiLevel;
	std::string bmiRank;

	cout << "身長（cm）を入力してくだしあ:";
	cin >> height;

	cout << "体重（kg）を入力してくだしあ:";
	cin >> weight;

	bmi = getBmi(height, weight);

	cout << "あなたのBMIは" << bmi << "です" << endl;

	bmiLevel = getObesity(bmi);

	if (bmiLevel == 4) bmiRank = "やばい";
	else if (bmiLevel == 3) bmiRank = "結構やばい";
	else if (bmiLevel == 2) bmiRank = "中々やばい";
	else if (bmiLevel == 1) bmiRank = "そこそこやばい";
	else if (bmiLevel == 0) bmiRank = "普通";
	else if (bmiLevel == -1) bmiRank = "痩せすぎ";

	cout << "あなたは" << bmiRank << "です" << endl;

	return 0;

	cin >> e;
}
