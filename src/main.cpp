#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string get_filename(int num_arguments, char** args);

int main (int argc, char** argv) {
    string line;

    ifstream myfile (get_filename(argc, argv));
    if (myfile.is_open())
    {
        while ( getline (myfile, line) )
        {
            int idx = line.find("//");
            for(std::string::size_type i = 0; i < line.size(); ++i) {
                if (i < idx)
                    cout << line[i];
            }

            if(line.rfind("//", 0) != 0)
                cout << '\n';
        }
        
        myfile.close();
    }
    else cout << "Unable to open file" << endl; 

    return 0;
}

string get_filename(int num_arguments, char** args) 
{
    if(num_arguments != 2) {
        cout << "Please enter the file to remove comments from." << endl;
        exit (EXIT_FAILURE);
    }
    return args[1];
}