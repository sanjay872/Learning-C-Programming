#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[10];

    arr[0]=42;
    arr[1]=1332;
    arr[2]=-21;

    //printf("%p == %p \n",arr,&arr[0]);

    // printf("Values in Array\n");
    // for(int i=0;i<10;i++)
    //     printf("%d\n",arr[i]);

    int * const arr1=alloca(sizeof(int)*10); // this is same as arr[10]
    //printf("%d",*arr++); // this won't work

    int *ptr=alloca(sizeof(int)*10); // to allocate memory in stack

    *(ptr+0)=42;
    *(ptr+1)=1332;
    *(ptr+2)=-21;

    //printf("%d\n",*ptr++); //this will work

    // printf("values in fake array\n");
    // for(int i=0;i<10;i++)
    //     printf("%d\n",*(ptr+i));

    // real difference b/w real and fake array
    
    // printf("%p\n",arr++); //won't work;
    // printf("%p \n",ptr++); //works
    
    printf("%p\n%p\n",&arr,arr); // &arr and arr are pointing to same address but they are different type of pointers
    printf("%d %d\n",sizeof(&arr),sizeof(arr));
    printf("%p\n%p\n",&arr+1,arr+1); // &arr is incremented by big number and arr is incremented by a small number, because of it type;

    printf("\n");

    printf("%p\n%p\n",&ptr,ptr); // &ptr and ptr are not same because &ptr is pointer to a pointer and ptr is a pointer
    printf("%p\n%p\n",&ptr+1,ptr+1); // pointer to pointer is 8 bytes and a interger pointer is 4 bytes

    printf("\n");

    printf("%d\n",sizeof(arr)); // 40
    printf("%d\n",sizeof(ptr)); // 8

    return 0;
} 