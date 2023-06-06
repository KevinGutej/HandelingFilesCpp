#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>


using namespace std;

float randomNumber() {
	float randomNum = rand() % 100001;
  return randomNum;
}

void creatingFile(string fileName)  {
	ofstream file(fileName.c_str());
  file.close();
}

void randomFloatNumbers(string fileName) {
	int i;
	float divisor = 100;
  ofstream file(fileName.c_str(), ios::app);
	for(i=0; i <= 9; i++)
  {
  	float randomFloatNumber = rand() / divisor;
    file << " " << randomFloatNumber;
    
  }
  //995 -> 9.95
    file.close();
}

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





























