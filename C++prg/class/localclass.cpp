//local class : the class which is defined in the main function is called local class.
#include<iostream>
using namespace std;
int main(){
    class student{
        int rollno;
        float marks[4];
        public:
        int get_dt(){
            cout<<"Enter rollno:";
            cin>>rollno;
            cout<<"Enter marks:";
            for(int i=0;i<4;i++){
                cin>>marks[i];
            }
        }
        void show(){
        cout<<"Rollno="<<rollno<<endl;
        for(int i=0;i<4;i++){
            cout<<"Marks="<<marks[i]<<endl;
          }
        }
    };
    student st[2];  //array of objects.
    for(int i=0;i<2;i++){
        st[i].get_dt();
        st[i].show();
    }
}