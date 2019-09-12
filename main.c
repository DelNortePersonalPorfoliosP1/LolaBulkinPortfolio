//
//  main.c
//  datatypeslab
//
//  Created by Bulkin, Lola on 9/12/19.
//  Copyright © 2019 Bulkin, Lola. All rights reserved.
//

#include <stdio.h>
    
int main()
    {
        int arr1[100];
        int i, mx, mn, n;
        
        printf("Input the number of elements that you want to be stored in the array:");
        scanf("%d",&n);
        
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
        {
            printf("element number %d : ",i);
            scanf("%d",&arr1[i]);
        }
        
        
        mx = arr1[0];
        mn = arr1[0];
        
        for(i=1; i<n; i++)
        {
            if(arr1[i]>mx)
            {
                mx = arr1[i];
            }
            
            
            if(arr1[i]<mn)
            {
                mn = arr1[i];
            }
        }
        printf("According to your inputs, the maximum element is : %d\n", mx);
        printf("According to your inputs, the minimum element is : %d\n\n", mn);
        
        return 0;
    }




