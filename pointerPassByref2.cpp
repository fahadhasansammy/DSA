#include<iostream>
using namespace std;
void FindFirstAndLastIndex(string s,char ch,int *first, int *last){
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }
    for(int i=s.size()-1; 0>=i; i--){
        if(s[i]==ch){
            *last = i;
            break;
        }
    }

}

int main(){
    string s = "aaabac";
    char ch = 'a';

    int first = -1;
    int last = -1;
     
    int *p1 = &first;
    int *p2 = &last;

    FindFirstAndLastIndex(s,ch,p1,p2);

    cout<<*p1<<" "<<*p2;
}