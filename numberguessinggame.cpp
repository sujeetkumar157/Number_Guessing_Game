#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int num=0;
    int a=1;
    do{
    cout<<"Guess a number between 1 and 200"<<endl;
    cin>>num;
    int guess=rand()%200+1;
    if(num==guess){
        cout<<"congratulations"<<endl;
        a=0;
    }
    else if(num<guess){
        cout<<"try a bigger number"<<endl;
    }
    else if(num>guess){
        cout<<"try a smaller number"<<endl;
    }

}
while(a==1);
return 0;
}