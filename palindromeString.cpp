#include<iostream>
using namespace std;
//check function
bool check(string str,int i,int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
      //recursive call
        return check(str,i+1,j-1);
    }
}
int main(){
    string str;
    cout<<"enter your string"<<endl;
    cin>>str;
    int j=str.length()-1; //length of string
    if(check(str,0,j)){
        cout<<"Its a palindrome string";
    }
    else{
        cout<<"It is not a palindrome string";
    }

}
