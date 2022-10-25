#include<iostream>
using namespace std;


void print(int n){
    //base case
    if (n==0){
        return;
    } 
    //processing
    cout<<n<<" ";

    //recursive realtion
    print(n-1);

}

int main(){

    int num;
    cin>>num;


    print(num);
    return 0;
}