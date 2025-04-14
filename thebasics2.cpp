//factorial
#include<iostream>
using namespace std;
int main(){
    int f,num,i=1;
    cout <<"enter the number:";
    cin>>num;
    for(f=1;f<=num;f++){
        i*=f;
    }

    cout<<"the factorial of "<<num<<"is:"<<i<<endl;
}
