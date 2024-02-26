#include <iostream>
using namespace std;

int main(){
    char dzialanie;
    int wynik,a,b;
while(cin>>dzialanie>>a>>b){
    switch(znak){
    case '+':
        wynik=a+b;
        break;
    case '-':
        wynik=a-b;
        break;
    case '*':
        wynik=a*b;
        break;
    case'/':
        wynik=a/b;
        break;
    case '%':
        wynik=a%b;
        break;

    }
cout<<wynik<<endl;
}
    return 0;
}
