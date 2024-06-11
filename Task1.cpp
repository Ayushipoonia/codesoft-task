#include <iostream>
using namespace std;
int main(){
    int random_num=rand()%100+1;
    int guess=0;
    while(guess!=random_num){
        cin>>guess;
        if(guess<random_num){
            cout<<"your guess is too low."<<endl;
        }
        else if(guess>random_num){
            cout<<"your guess is too high"<<endl;
        }
        else{
            cout<<"you are correct"<<endl;
        }
    }
    return 0;

}
