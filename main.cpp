//
//  main.cpp
//  array
//
//  Created by 20141105048 on 15/12/9.
//  Copyright © 2015年 20141105048. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[3],b[3];
    
    for(int i=0;i<=3;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i=0;i<=3;i++)
    {
        printf("%d %x %d %x\n",a[i],&a[i],b[i],&b[i]);
    }
        return 0;
}
