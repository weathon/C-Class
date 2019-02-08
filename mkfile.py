file="""
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    return 0;
}"""
f=open(input("File name:"),"w")
f.write(file)
f.close()