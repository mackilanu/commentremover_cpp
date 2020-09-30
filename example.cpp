// This is a test file you can try the program with!
// All these comments
#include <iostream> // will be removed
#include <fstream>
#include <string>
using namespace std;

int main () {
    // once it runs
  string line;
  ifstream myfile ("example.txt"); // thru the cli command.
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}

//Have a nice one!