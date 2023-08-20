#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
ifstream file1("personal.txt");
if (!file1)
{
    cout << "Error opening personal.txt\n";
    return 1;
}
string line1,line2,line3;
getline(file1, line1);
getline(file1, line2);
getline(file1, line3);

cout << "Personal Details:\n";
cout << "\tName: " << line1 << endl;
cout << "\tAge: " << line2 << endl;
cout << "\tAddress: " << line3 << endl;

file1.close();

ifstream file2("professional.txt");
getline(file2, line1);
getline(file2, line2);

if (!file2)
{
    cout << "Error opening professional.txt\n";
    return 1;
}

cout << "Professional Details:\n";
cout << "\tJob: " << line1 << endl;
cout << "\tSalary: " << line2 << endl;

file2.close();
return 0;

}