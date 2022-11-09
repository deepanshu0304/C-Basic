#include<iostream>
#include<string>
using std::string;
using namespace std;
class binary{
private:
  string s;
  public:
  void Sets(){
    cin>>s;

  }
  void binarycheck(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){ /* here in if condition u need to use coma at 0 and 1 
        because u r comparng strng which intkae  charater  so 0 and 1 should act as character */
            cout<<"not binary "<<endl;
            break;

        }
        else{
        cout<<"binary";
        break;
        }
    }
    
  }

};
int main(){
    binary b;
    b.Sets();
    b.binarycheck();
    
    return 0;
}