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
    int factor =90;
    int answer = 0;
    for (int a=990; a>100; a=11*factor) {
        for (int b=999; b>100; b--) {
            int sum = a*b;
            string product = to_string(sum);
            int temp = stoi(Reverse(product));
            if (temp==sum && sum>answer) {
                answer=sum;
            }
            if (answer>sum) {
                break;
            }
        }
        factor--;
    }
    cout << answer<<endl;
    return 0;
}
