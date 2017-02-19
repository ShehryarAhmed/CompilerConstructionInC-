#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char ch;

    ifstream infile ("abc.txt");

while(!infile.eof()){
	infile.get(ch);
	cout << ch << "\n";
}

return 0;
}
