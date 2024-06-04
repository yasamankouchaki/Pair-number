//even odd
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"please enter number:";
    cin>>number;
    if(number>=0 && number<=10){
            if(number%2==0){
                    cout<<"Even"<<endl;
            if(number<5){
                    cout<<"smaller than";
            }else{
                cout<<"bigger than";
            }
        }
    }
    return 0;
}
