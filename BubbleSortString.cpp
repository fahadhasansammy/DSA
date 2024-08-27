#include<iostream>
using namespace std;
int main(){
    string book[] = {
        "Cinderella", "Mermaid", "Puss in Boots", "Rumpelstiltskin", 
        "Little Red Riding Hood", "Sleeping Beauty", "Goldilocks and the Three Bears", 
        "Aladdin", "Blue Fairy", "Tinkerbell", "Humpty Dumpty", "Wonderland", "Jungle King"
    };
    int n=sizeof(book)/sizeof(book[0]);
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(book[j]>book[j+1]){
                swap(book[j],book[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<book[i]<<endl;
    }

}