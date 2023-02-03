#include<stdio.h>
void init_arr(int a[],int n){
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int  find_arr(int a[],int item, int i){
    
    if(a[i]==item)
    return i;
    else{
        i++;
        find_arr(a,item,i++);
    }
}
main(){
    int n;
    printf("enter the length of array");
    scanf("%d",&n);
    int a[50];   
    init_arr(a,n);
    if(find_arr(a,2,0)<n)
   printf("present at index  %d", find_arr(a,2,0));
   else
   printf("not present");

}