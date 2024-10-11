// to read the data from file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string arr[200];
    ifstream fin;
    fin.open("G:\\Tts_230(SK)\\C++prg\\theory\\friend function .txt");

    cout<<"Data are:"<<endl;
    for(int i=0;i<200;i++){
        fin>>arr[i];
    }
    fin.close();
      for(int i=0;i<200;i++){
        cout<<arr[i];
    }
}