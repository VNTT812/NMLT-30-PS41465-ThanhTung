#include<stido.h>
int main()
{   ///for biet trc so lan lap 
    /// while , do whlie chua biet trc so lan lap '
    ///while , do while co dung cho truong hop biet trc so lan lap dc ko ? dc 
    /// for cho truong hop ko biet trc so lan lap co dc ko ? ko
    /// Xuat so boi cua 4 tu 1 den 100
    int n , s ;
    for ( int i = 1 ; i <= 100 ; i++)
    {   if (i%4==0)
        printf ("%d\t",1);
    }   
        ///S = 1 + 3 + 5 + 7 ... + (2n + 1)
        s = 0 ;
        n = 3 ;
        for ( int i = 0 ; i <= 5 ; i++)
        {
            s = s + ( 2 * i + 1); // s += (2 * i + 1)
            printf ("%d\t\n",i,s);
        }
        printf ("\n");
    return 0;
}