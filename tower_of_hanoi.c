#include<stdio.h>
void toh( int n, char startpin, char endpin, char workpin);
void tofh(int ndisk, char source, char temp, char dest);
int main(void)
{
    int n=15;
    char source='A', dest='C', temp='B';
    toh(n,'A', 'B', 'C');
    // tofh(n,source, temp,dest);
    return 0;
}
// void toh(int n, char startpin, char endpin, char workpin)
// {
//     if(n>0)
//     {
//         toh(n-1,startpin,workpin,endpin);
//         printf("move disk from %c to %c\n", startpin, endpin);
//         toh(n-1,workpin,endpin,startpin);
//     }
// }
void tofh(int ndisk, char source, char temp, char dest)
{
    if(ndisk==1)
    {
        printf("move disk %d form %c to %c\n",ndisk,source,dest);
    }
    else{
        tofh(ndisk-1,source,dest,temp);
        printf("move disk %d form %c to %c\n",ndisk,source,dest);
        tofh(ndisk-1,temp,source,dest);
    }
}
// for transferring a to b
void toh(int n, char startpin, char endpin, char workpin)
{
    if(n>0)
    {
        toh(n-1,startpin,workpin,endpin);
        printf("move disk from %c to %c\n", startpin, workpin);
        toh(n-1,endpin,startpin,workpin);
    }
}