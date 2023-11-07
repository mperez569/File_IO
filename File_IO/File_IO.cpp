#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //creates the txt file in the cpp folder
    ofstream myFile("mp.txt");
    myFile << "FirstName Perez\n";
    myFile << "Michael Lewis\n";
    myFile.close();

    //you can create an html file in C++, so weird
    ofstream site("index.html");
    site << "<html><head><title>Created in C++</title></head>\n</html>";

    //Checks if the file exists
    //Having ".." before in a file path means that you are going back a file 
    //so having "../.." means you go back 2 files

    string line;
    ifstream files("mp.txt");

    //copies the text from one file and pastes it onto another file
    ofstream newFile("gustavo.txt");

    if (files.is_open()) {
        //reads the document and prints out the text
        while (getline(files, line)) {
            cout << line << endl;
            newFile << line << endl;
        }
    }
    else {
        cout << "The file does not exist";
    }
    files.close();
    newFile.close();
}