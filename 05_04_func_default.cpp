#include<iostream>
using namespace std;

    float moneyreceived(int money , float factor=1.04){
        return money*factor;
    }
int main(){
    int money = 100000;
    cout<<"If you have "<<money<<" Rs then you will receive "<<moneyreceived(money)<<endl;
    cout<<"If you are VIP and have "<<money<<" Rs then you will receive "<<moneyreceived(money,1.08);
    return 0;
}