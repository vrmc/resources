//
//  main.cpp
//  Coin_Sum
//
//  Created by Ivan Feng Jun Kai on 3/1/17.
//  Copyright © 2017 company. All rights reserved.
//

#include <iostream>

using namespace std;

int howMany2p (int x){
    int whatToReturn =x/2;
    return whatToReturn;
}

int howMany5p (int x){
    int p=5;
    int whatToReturn = x/p;
    if (x-p>=2){
        x-=p;
        for (; x>=2; x-=p) {;
            whatToReturn+=howMany2p(x);
        }
    }
    return whatToReturn;
}

int howMany10p(int x){
    int p=10;
    int whatToReturn = x/10;
    int temp = x;
    if (x-p>=5){
        temp-=p;
        for (; temp>=5; temp-=p) {;
            whatToReturn+=howMany5p(temp);
        }
    }
    temp = x;
    if (x-p>=2){
        temp-=p;
        for (; temp>=2; temp-=p) {;
            whatToReturn+=howMany2p(temp);
        }
    }
    return whatToReturn;
}

int howMany20p(int x){
    int whatToReturn = x/20;
    
    int p=20;
    int temp = x;
    
    if (x-p>=10){
        temp-=p;
        for (; temp>=10; temp-=p) {;
            whatToReturn+=howMany10p(temp);
        }
    }
    temp = x;
    if (x-p>=5){
        temp-=p;
        for (; temp>=5; temp-=p) {;
            whatToReturn+=howMany5p(temp);
        }
    }
    temp = x;
    if (x-p>=2){
        temp-=p;
        for (; temp>=2; temp-=p) {;
            whatToReturn+=howMany2p(temp);
        }
    }
    
    return whatToReturn;
}

int howMany50p(int x){
    int p=50;
    int whatToReturn = x/p;
    
    int temp = x;
    if (x-p>=20){
        temp-=p;
        for (; temp>=20; temp-=p) {;
            whatToReturn+=howMany20p(temp);
        }
    }
    temp = x;
    if (x-p>=10){
        temp-=p;
        for (; temp>=10; temp-=p) {;
            whatToReturn+=howMany10p(temp);
        }
    }
    temp = x;
    if (x-p>=5){
        temp-=p;
        for (; temp>=5; temp-=p) {;
            whatToReturn+=howMany5p(temp);
        }
    }
    temp = x;
    if (x-p>=2){
        temp-=p;
        for (; temp>=2; temp-=p) {;
            whatToReturn+=howMany2p(temp);
        }
    }
    
    return whatToReturn;
}

int howMany100p(int x){
    int p=100;
    int whatToReturn = x/p;
    
    int temp = x;
    if (x-p>=50){
        temp-=p;
        for (; temp>=50; temp-=p) {;
            whatToReturn+=howMany50p(temp);
        }
    }
    temp = x;
    if (x-p>=20){
        temp-=p;
        for (; temp>=20; temp-=p) {;
            whatToReturn+=howMany20p(temp);
        }
    }
    temp = x;
    if (x-p>=10){
        temp-=p;
        for (; temp>=10; temp-=p) {;
            whatToReturn+=howMany10p(temp);
        }
    }
    temp = x;
    if (x-p>=5){
        temp-=p;
        for (; temp>=5; temp-=p) {;
            whatToReturn+=howMany5p(temp);
        }
    }
    temp = x;
    if (x-p>=2){
        temp-=p;
        for (; temp>=2; temp-=p) {;
            whatToReturn+=howMany2p(temp);
        }
    }
    
    return whatToReturn;
}

int howMany200p(int x){
    int p=200;
    int whatToReturn = x/p;
    
    int temp = x;
    if (x-p>=100){
        temp-=p;
        for (; temp>=100; temp-=p) {;
            whatToReturn+=howMany50p(temp);
        }
    }
    temp = x;
    if (x-p>=50){
        temp-=p;
        for (; temp>=50; temp-=p) {;
            whatToReturn+=howMany50p(temp);
        }
    }
    temp = x;
    if (x-p>=20){
        temp-=p;
        for (; temp>=20; temp-=p) {;
            whatToReturn+=howMany20p(temp);
        }
    }
    temp = x;
    if (x-p>=10){
        temp-=p;
        for (; temp>=10; temp-=p) {;
            whatToReturn+=howMany10p(temp);
        }
    }
    temp = x;
    if (x-p>=5){
        temp-=p;
        for (; temp>=5; temp-=p) {;
            whatToReturn+=howMany5p(temp);
        }
    }
    temp = x;
    if (x-p>=2){
        temp-=p;
        for (; temp>=2; temp-=p) {;
            whatToReturn+=howMany2p(temp);
        }
    }
    
    return whatToReturn;
}

int main (){
    int answer=1;
    int num = 200;
    
    
    answer+=howMany2p(num);
    answer+=howMany5p(num);
    answer+=howMany10p(num);
    answer+=howMany20p(num);
    answer+=howMany50p(num);
    answer+=howMany100p(num);
    answer+=howMany200p(num);
    
    cout << answer<<endl;
    return 0;
}
