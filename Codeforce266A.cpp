#include<iostream>
#include<string>
using namespace std;
int main(){
    int size;
    cin>>size;
    string input;
    cin>>input;
    int ans=0;
    for(int i=0;i<input.length();i++){
        if(input[i]==input[i+1])
        ans++;
    }
    cout<<ans;
    return 0;   
}