#include<iostream>
#include<string.h>
using namespace std;
void removeConsecutiveDuplicateshelper(char* input, int start){
   if(input[start]=='\0'){
        return;
    }
    if(input[start]==input[start+1]){
        for(int i=start;i<=strlen(input);i++){
            input[i]=input[i+1];
        }
        removeConsecutiveDuplicateshelper(input,start);
    }
    else{
        removeConsecutiveDuplicateshelper(input, start+1);
    }
}
void removeConsecutiveDuplicates(char *input) {	
    removeConsecutiveDuplicateshelper(input,0);
}
int main(){
    char input[10000];
    cin.getline(input, 10000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}
