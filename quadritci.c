#include<stdio.h>
#define size 10
int i;
int hashtable[size];
int hash( int key)
{
    return key%size;

}
void insert(int key)
{
    int index;
    int temp;
    index=hash(key);
    int i=1;
    while(hashtable[index]!=-1)
    {
        printf("collision occurs at the index :%d\n",index);
        index=(index+i*i)%size;
        i++;

    }
    hashtable[index]=key;
    printf("%d is inserted at index %d\n",key,index);

}
void display()
{
    for(i=0;i<size;i++)
    {
        printf("%d\n",hashtable[i]);
}
}
int main()
{
    int key;
    for(i=0;i<size;i++)
    {
        hashtable[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        printf("enter a key to insert:\n");
        scanf("%d",&key);
        insert(key);

    }
    printf("hash table full:");
    display();
}