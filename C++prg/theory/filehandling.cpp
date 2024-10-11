// file handling program to write a data to any text file .
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("G:\\Tts_230(SK)\\C++prg\\student.txt");
    int rollno;
    string name;
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin,name);
    fout<<"Rollno:"<<rollno<<"\n name="<<name<<endl;

    cout<<"Data inserted successfully.";
}