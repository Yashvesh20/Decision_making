Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;
    int num = a;
    if(b > num)
        num = b;
    if(c > num)
        num = c;
    cout << "The largest number is " << num << endl;
}

output:
Enter three numbers: 220
20
22
The largest number is 220
