#include<iostream>
using namespace std;
int sumdiff(int a, int b){
    cout<<a+b<<" "<<a-b;
}
float sumdiff1(float a, float b){
    cout<<a+b<<" "<<a-b;
}
int main(){
	int a,b; float c,d;
    cin>>a>>b;
    cin>>c>>d;
    sumdiff(a,b);
    cout<<endl;
    sumdiff1(c,d);
    return 0;
}