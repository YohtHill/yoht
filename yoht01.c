#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
/*
int main()
{
    int i = 0;
    for(i=100;i<=200;i++)
    {
        int j = 0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
*/


/*
int binary_search(int arr[],int k,int sz)
{
    int left = 0;
    int right = sz-1;
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(arr[mid]<k)
        {
            left = mid+1;
        }
        else if(arr[mid]>k)
        {
            right = mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = binary_search(arr,k,sz);
    if(ret == -1)
    {
        printf("找不到数字。\n");
    }
    else
    {
        printf("找到了下标是%d\n",ret);
    }
    return 0;

}
*/

void menu()
{
    printf("##############################\n");
    printf("########1.play   0.exit#######\n");
    printf("##############################\n");
}

void game()
{
    int ret = 0;
    int guess = 0;
    ret = rand()%100+1;
    while(1)
    {
       printf("Guess the number:>");
       scanf("%d",&guess);
       if(guess > ret)
       {
        printf("Bigger than the number.\n");
       }
       else if(guess < ret)
       {
        printf("Less than the  number.\n");
       }
       else 
       {
        printf("Bingo!\n");
        break;
       }
    }
    


}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do 
    {
        menu();
        printf("请选择>:\n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("游戏结束...\n");
            break;
        default:
            printf("选择错误...\n");
            break;
        }
    }
    while(input);
    return 0;
}
