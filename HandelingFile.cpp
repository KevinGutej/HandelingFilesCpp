#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>


using namespace std;


int main() {
	string fileName;
 	srand(time(NULL));
  cout << "Enter file name: ";
  cin >> fileName;
  creatingFile(fileName);
	randomFloatNumbers(fileName);
	return 0;
}





// Functions:
// - (filename) create an empty file
// - (filename) generate 10 floating point numbers and put them into the file
// - (filename) read 10 numbers from the file and calculate average, returns the average





























