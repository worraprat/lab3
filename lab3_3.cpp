#include<iostream>
using namespace std;
int main(){
    int x=2;
    while(x<70){
        cout<< 1/x;
        x=1/(x+1);

    }
    return 0;
}
