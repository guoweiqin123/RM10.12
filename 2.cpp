#include <iostream>
using namespace std;
class Func{
 public:
  static void function(){
    int x;
    cout<<"請輸入1-10之間的整數:";//提示輸入數字
    cin>>x;//獲取數字
    for ( x; x>0; x--){
    cout<<"Hello,RoboMaster!"<<endl;
}
}
};
int main()
{
    Func::function();
 return 0;
}