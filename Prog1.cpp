#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter a letter or a number "<< endl;
cin>>ch;
if (ch>='a' && ch<='z') {
    cout<<ch<<"--input is lower case";
}
else if (ch>='A' && ch<='Z') {
    cout<<ch<<"--input is upper case";
}
else{
    cout<<ch<<"--input is numeric";
}
}