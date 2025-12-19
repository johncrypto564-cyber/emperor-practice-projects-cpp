 //it is also called sequiential algorithm
#include<iostream>
using namespace std;
int main(){
    int arrnum[6];
    int target;
    cout<<"Enter your array numbers"<<endl;
    for(int i=0; i < 6; i++){
        cin>>arrnum[i];
    }
    cout<<"set target"<<endl;
    cin>>target;
    for(int i=0; i < 6; i++){
        if(arrnum[i]==target){

            cout<<"number is in"<<" "<<arrnum[target]<<"  position.";
        }
        
    }
    return 0;


}