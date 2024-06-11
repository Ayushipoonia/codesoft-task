#include<iostream>
#include<string>
#include<limits>
#include<iostream>
using namespace std;
int main(){
    int no_of_student;
    cin>>no_of_student;
    vector<string>name(no_of_student);
    vector<double>grades(no_of_student);
    for(int i=0;i<no_of_student;i++){
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin,name[i]);
        cin>>grades[i];
    }
    double sum=0;
    double high=grades[0];
    double low=grades[0];
    for(int i=0;i<no_of_student;i++){
        sum+=grades[i];
        if(grades[i]>high)high=grades[i];
        if(grades[i]<low)low=grades[i];
    }
    double avg=sum/no_of_student;
    cout<<avg<<endl;
    cout<<high<<endl;
    cout<<low<<endl;
}
