#include <iostream>
using namespace std;
#include <filesystem>
#include <fstream>
int main(int argc, char const *argv[])
{
    cout << "Project Name : ";
    string porjnm = "";
    cin >> porjnm;
    cout << "Project Folder (parent folder) : ";
    string pf = "";
    cin >> pf;
    string proj = pf + "/" + porjnm;
    filesystem::create_directories(proj);
    cout << "file created at '" << proj << "'" << endl;
    string bf = proj + "/build.sh";
    ofstream outFile(bf);
    outFile << "g++ -std=c++17 -o cpm main.cpp\nx86_64-w64-mingw32-g++ -std=c++17 -o cpm.exe main.cpp";
    string bcmd = "chmod +x " + bf;
    system(bcmd.c_str());
    string maincpp = proj + "/main.cpp";
    ofstream outf(maincpp);
    outf << "int main(){\nreturn 0;\n}";
    cout << "CREATED PROJECT AND NECESSERY FILES!" << endl;
    cin.get();
    return 0;
}
