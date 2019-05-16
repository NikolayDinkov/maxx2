#include <stdio.h>

using namespace std;
int big2(int *a, int sizer)
{
    int maxx=*a;
    int maxx2=*(a+1);
    for(int i=0; i<sizer; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }

    for(int i=0; i<sizer; i++)
    {
        if(a[i]>maxx2 && a[i]<maxx)
        {
            maxx2=a[i];
        }
    }
    //printf("%d\n", maxx);
    printf("%d\n", maxx2);

}
int main()
{
    int a[6]={1,2,5,50,6,7};
    big2(a, 6);
    return 0;
}
