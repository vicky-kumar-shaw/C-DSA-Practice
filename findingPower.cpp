#include<iostream>
using namespace std;
//power function
int pow(int a,int b ){
    //int a,b;
    int ans=1;
    for (int i=1;i<=b;i++){
        ans=ans*a;
    }
        return ans;
    }
//main function
int main(){
    int e;
    int f;
    cout<<"enter number"<<endl;
    cin>>e;
    cout<<"enter power"<<endl;
    cin>>f;
    int power=pow(e,f);
    cout<<e <<" to the power "<<f<<" is "<<power;
    return 0;

}
