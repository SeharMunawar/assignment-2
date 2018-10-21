#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int arr[1000];
int arr1[10];


void * TestThread(void *arg){
   int s=0;
int end=0;
int start=(int) arg;
end=start+100;
for(int i=start;i<end;i++){
s=s+arr[i];

}
return ((void *)s);
}

int main(){
  int sum;
int tSum=0;
  int j=0;
pthread_t thread_t1[10];
for(int i=0;i<1000;i++){
    arr[i]=i;
}

  for(int i=0;i<10;i++){
     pthread_create(&thread_t1[i],NULL,TestThread,(void *)(j));
      j=j+100;
     
  

}
 for(int i=0;i<10;i++){
pthread_join(thread_t1[i],(void **)& sum);
arr1[i]=sum;
}

for(int i=0;i<10;i++){
   tSum=tSum+arr1[i];
}
 
printf("\nTotal sum is: %d\n",tSum);

return 0;






}
