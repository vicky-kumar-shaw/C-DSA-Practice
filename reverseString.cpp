#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
if(i>j){
    return;
}
swap(str[i],str[j]);
i++;
j--;
reverse(str,i,j);
}
int main(){
    string strr;
    cout<<"enter a string "<<endl;
    cin>>strr;
    //string str="abcde";
    int j=strr.length()-1;
    reverse(strr,0,j);
    cout<<"the reverse is --> "<<strr;
}
