#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int count,i,a,b,null=0,count1=0,null1=0,count2=0,null2=0,count3=0,null3=0;
    char r;
    string s1,s2("love"),s3;
    cout<<"Enter girl name:";
    getline(cin,s1);
    cout<<"Enter boy name:";
    getline(cin,s3);
    count=0;
    for(i=0;i<20;i++)
    {
        if(s1[i]==s2[0])
        count++;
        if(s3[i]==s2[0])
        null++;
    }
    for(i=0;i<20;i++)
    {
        if(s1[i]==s2[1])
        count1++;
        if(s3[i]==s2[1])
        null1++;
    }
    for(i=0;i<20;i++)
    {
        if(s1[i]==s2[2])
        count2++;
        if(s3[i]==s2[2])
        null2++;
    }
    for(i=0;i<20;i++)
    {
        if(s1[i]==s2[3])
        count2++;
        if(s3[i]==s2[3])
        null2++;
    }
    a=count+null+count1+null1+count2+null2+count3+null3;
    if(a<1 || a>9)
    cout<<"Your score is "<<a<<" you go together like coke and mentos.";
    else if(a==4 || a==5)
    cout<<"Your score is "<<a<<" you are alright together.";
    else
    cout<<"Your score is "<<a;
} 
