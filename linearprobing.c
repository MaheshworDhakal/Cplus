#include<stdio.h>
#define size 10
int hashtable[size];
int i;
int hash(int key)
{
    return key%size;

}
void insert(int key)
{
    int index ,temp;
    index=hash(key);
    temp=index;
    while(hashtable[index]!=-1)
    {
        printf("collision occur at index :%d\n",index);
        index=(index +1)%size;
        if(index==temp)
         {
            printf("hash table full:\n");
            return;
         }
    }
    hashtable[index]=key;
    printf("%d is stored at index :%d\n",hashtable[index],index);
    
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
    insert(72);
    insert(27);
     insert(36);
     insert(24); 
     insert(63);
     insert(81);
    insert(92);
    insert(101);
      insert(103);
      insert(97);
      insert(102);
    display();
    return 0;
}
  