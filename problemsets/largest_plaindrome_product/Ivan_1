#include <iostream>
#include <string>

using namespace std;

string Reverse(string str){
    string reverseString;
    
    for(long i = str.size() - 1;i >= 0; --i){
        reverseString += str[i];
    }
    
    return reverseString;
}

int main() {
    int a = 999;
    int b = 999;
    int sum = 0;
    int answer = 0;
    int temp = 0;
    string product;
    
    for (; a>100; a--) {
        for (; b>100; b--) {
            sum = a*b;
            product = to_string(sum);
            temp = stoi(Reverse(product));
            if (temp==sum && sum>answer) {
                answer=sum;
            }
            if (answer>sum) {
                break;
            }
        }
        b=999;
    }
    cout << answer<<endl;
    return 0;
}
