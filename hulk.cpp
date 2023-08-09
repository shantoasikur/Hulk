#include<iostream>
#include<string>

using namespace std;
int main(){
    string feelings="I hate ";
    int i;
    int n;
    cin>> n;
    if(n==1){
        cout<< "I hate it"<<endl;
    }
    else if(n>1){
        cout<< "I hate that";
    }

    for(i=2;i<n;i++){
        if(i%2==0){
            cout<<" I love that";
        }

        else {
            cout<<" I hate that";

        }
    }
    if(n%2==0&&n>1){
        cout<< " I love it"<<endl;
    }
    else if(n%2==1&& n>1){
        cout<< " I hate it"<<endl;
    }

}













