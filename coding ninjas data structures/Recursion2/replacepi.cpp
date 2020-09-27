#include<iostream>
#include<string.h>
void replacepihelper(char* input, int start){
    if(input[start]=='\0'){
        return;
    }
    replacepihelper(input, start+1);
    if(input[start]=='p'&&input[start+1]=='i'){
        for(int i=strlen(input);i>=start+2;i--){
            input[i+2]=input[i];
        }
        input[start]='3';
        input[start+1]='.';
        input[start+2]='1';
        input[start+3]='4';
    }
}
void replacePi(char* input){
    replacepihelper(input,0);
}
using namespace std;
int main(){
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
