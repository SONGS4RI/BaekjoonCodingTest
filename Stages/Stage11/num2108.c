#include<stdio.h>
#include <math.h>
int main()
{
    int n, arr[8001]={0,},res[8001]={0,},num,sum=0;
    int max=0,cnt=0,middle;
    double mean;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum += num;
        arr[num+4000]++;
    }
    for(int i =0; i<8001; i++)
    {
        if(arr[i]!=0)
        {
            res[cnt] = i-4000;
            cnt++; 
        }
    }
    printf("--------------------\n");
    // ������
    mean = (double)sum/n;
    printf("%d\n",(int)round(mean));
    // �߾Ӱ�
    printf("%d\n",middle);
    // �ֺ�
    // for(int i = 0; i<8001; i++)
    // {
        
    // }
    // ����
    printf("%d\n",res[cnt]-res[0]);

    return 0;
}