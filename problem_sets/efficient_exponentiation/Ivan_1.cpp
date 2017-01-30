//
//  main.cpp
//  Efficient exponentiation
//
//  Created by Ivan Feng Jun Kai on 30/1/17.
//  Copyright © 2017 company. All rights reserved.
//

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int limit = 200;
int cost[201];
int path[201];

void Backtrack(int power, int depth) {
    if (power > limit || depth > cost[power]) return;
    cost[power] = depth;
    path[depth] = power;
    for (int i = depth; i >= 0; i--) Backtrack(power + path[i], depth + 1);
}

int main (){
    int result = 0;
    for (int i = 0; i <= limit; i++) cost[i] = numeric_limits<int>::max();
    Backtrack(1, 0);
    for (int i = 1; i <= limit; i++) result += cost[i];
    cout << result;
}




