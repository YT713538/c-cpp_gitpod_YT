#include <iostream>

using namespace std;
int main(){
    int num1,num2,sum;
    cout<<"输入第一个数字：";
    cin>>num1;
    cout<<"输入第二个数字：";
    cin>>num2;
    cout<<num1<<"+"<<num2<<"=";
    cin>>sum;
if(num1+num2==sum){
    cout<<"正确";
}else{
    cout<<"错误";
}
}
