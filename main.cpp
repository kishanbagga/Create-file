#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create a file and write data to it
    ofstream ofile;
    ofile.open("Countries.txt");
    ofile<<"India"<<endl
         <<"USA"<<endl
         <<"Australia"<<endl;

    ofile.close();
}
/*
    ifstream ifile;
    ifile.open("Countries.txt");
    string s;

    ifile>>s;
    cout<<s<<endl;

    ifile>>s;
    cout<<s<<endl;

    ifile>>s;
    cout<<s<<endl;

    ifile.close();

    return 0;
}
*/
