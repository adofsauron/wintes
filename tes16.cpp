//
//  main.cpp
//  hdu_1040
//
//  Created by Alps on 15/1/3.
//  Copyright (c) 2015年 chen. All rights reserved.
//
//http://acm.hdu.edu.cn/showproblem.php?pid=1040

#include <iostream>
#include <vector>
using namespace std;

bool sortRule(int a, int b){
    return a < b;
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int num;
    int a = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d",&num);
        vector<int> list;
        while (num--) {
            scanf("%d",&a);
            list.push_back(a);
        }
        sort(list.begin(), list.end(), sortRule);
        vector<int>::iterator iter;
        for (iter = list.begin(); iter != list.end(); iter++) {
            printf("%d",*iter);
            if (iter == list.end()-1) {
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }
    return 0;
}
