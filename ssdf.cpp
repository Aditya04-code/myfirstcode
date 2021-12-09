#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char c[40];
    cout << "Enter the text to encrypted : " << endl;
    cin.getline(c, 40);
    ofstream off;
    off.open("bit", ios::binary);
    off.write((char *)c, sizeof(c));
    off.close();
    ifstream iff;
    iff.open("bit", ios::binary);
    iff.read((char *)c, sizeof(c));
    cout << "Encrypted data is : " << endl;
    cout << c[40] << endl;
    cout << "Encrption is done succesfully ! " << endl;
    iff.close();
    char x;
    cout << "Do you want to Decrypt the file enter (y/n) :" << endl;
    cin >> x;
    switch (x)
    {
    case 'y':
        cout << "decription " << endl;
        remove(c);
        rename("bit", c);
        cout << "file is : " << c <<endl<< "great sucess !" << endl;

        break;

    default:
        cout << "programm ended sucessfully " << endl;
        break;
    }
}
