//      *  
//    * * *
//  * * * * *
//* * * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,space;
//     for(row=1;row<5;row++){
//         for(space=5-1;space>row;space--){
//             cout<<"  ";
//         }
//         for(col=1;col<=2*row-1;col++){
//             cout<<"* ";

//         }
//     cout<<"\n";
//     }
// } 
    /*
        *   *   *   *   *
          *   *   *   *
            *   *  *     
              *   *
                * 
    */
   #include<iostream>
   using namespace std;
   int main(){
    int row,col;
    for(row=5;row>=1;row--){
        for(col=5;col>=1;col--){
            if(row>=col){
                cout<<"* ";
            }
        else{
            cout<<" ";
        }
        }
        cout<<"\n";
    }
   }
