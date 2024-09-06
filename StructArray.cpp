//Write a program that uses an array of structure Student to hold the Name, ID, Semester, Age, and CGPA of 10 students. Find the average CGPA of the students, the students who are under probation, the students aged more than 21 years and last semester students. 
#include<iostream>
using namespace std;
struct Students
{
    string name;
    int id;
    int samester;
    int age;
    float cgpa;
};

int main(){
    Students s[10];
    float totalcgpa=0;
    int avgcgpa=0;
    int numofpro=0;
    int morethan21years=0;
    for(int i=0;i<10;i++){
        cout<<"Enter the details of student "<<i+1<<":"<<endl;
        cout<<"Enter the name";
        cin>>s[i].name;
        cout<<"Enter the id:";
        cin>>s[i].id;
        cout<<"Enter the samester:";
        cin>>s[i].samester;
        cout<<"Enter the age:";
        cin>>s[i].age;
        cout<<"Enter the cgpa:";
        cin>>s[i].cgpa;
        totalcgpa+=s[i].cgpa;
    }
    avgcgpa=totalcgpa/10;
    cout<<"Total cgpa of those 10 students is :"<<avgcgpa<<endl;
    cout<<"Students of under probation:";
    for(int i=0;i<10;i++){
        if(s[i].cgpa>2.50){
           numofpro++;
           cout<<"Name:"<<s[i].name<<endl<<"ID:"<<s[i].id<<endl<<endl;
        }
    }
    if(numofpro==0){
        cout<<"There is no students get probation";
    }
    cout<<"The students more than 21 years:"<<endl;
    for(int i=0;i<10;i++){
        if(s[i].age>21){
            morethan21years++;
            cout<<"Name:"<<s[i].name<<endl<<"ID:"<<s[i].id<<endl<<endl;
        }
    }
    if(morethan21years==0){
        cout<<"There are no students more than 21 years"<<endl;

    }
    
}