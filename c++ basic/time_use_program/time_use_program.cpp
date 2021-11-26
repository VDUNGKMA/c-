#include <iostream>
#include <time.h>
using namespace std;

float count_pow(int n,float a)
{
    float resulf=1;
    for(int i=1;i<=n;i++)
    {
        resulf*=a;
    }
    return resulf;
}
int main(int argc, char const *argv[])
{
    int n;
    float a;
    cout <<"input n,a ";
    cin >>n>>a;
    clock_t start,end;
    double time_use;
    start=clock();
    count_pow(n,a);
    end=clock();
    time_use=(double)(end-start)/CLOCKS_PER_SEC ;
    cout <<time_use*1000.0;
    return 0;
}
