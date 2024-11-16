#include <iostream>
#include <fstream>
#include <ostream>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));

	ofstream ofile("quizresults.txt");
	if (!ofile) {
		cerr << "Error opening file\n";
		return 1;
	}

	cout << "This is the test.\n";

	for (int i = 0; i < 3; ++i)
	{
		int num1 = rand() % 10;
		int num2 = rand() % 10;
		char operators[] = { '+', '-', '*', '/' };
		char op = operators[rand() % 4];

		cout << "Question" << i + 1 << ":" << num1 << " " << op << " " << num2 << " = ";
		int answer;
		cin >> answer;

		ofile << num1 << " " << op << " " << num2 << " = " << answer << "\n";
	}

	ofile.close();
	cout << "Results saved to quizresults.txt\n";

	return 0;
}