#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>

#include<sys/types.h>

#include<string.h>

#include<sys/wait.h>

int s=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0;
int arr1[10];

pid_t wait(int *stat_loc);
pid_t fork(void);
// A simple program, which takes in input from child process and send its output to a parent process

int main()
{

   int cpid;
int arr[1000];
for(int i=0;i<1000;i++){
arr[i]=i;
}
 int fd1[2],fd2[2],fd3[2],fd4[2],fd5[2],fd6[2],fd7[2],fd8[2],fd9[2],fd10[2];
   
 if (pipe(fd1)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
  

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
    cpid = fork();

 if (cpid ==0 )
    {
  
    
   printf("CHILD 1 PID: %d",getpid());
  
    for(int i=0;i<100;i++){
  s1=s1+arr[i];
}    
   write(fd1[1], &s1, sizeof(s1));
     close(fd1[1]);
   
   exit(0);
  
}
if(cpid>0){
   
   wait(NULL);
 
read(fd1[0], &s1, sizeof(s1));
 arr1[0]=s1;
   
   
  
  close(fd1[0]);
   
}



if (pipe(fd2)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
  

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
   
cpid = fork();
 if (cpid ==0 )
    {
  printf("\nCHILD 2 PID: %d",getpid());
    
   
  
    for(int i=100;i<200;i++){
  s2=s2+arr[i];
}    
   write(fd2[1], &s2, sizeof(s2));
     close(fd2[1]);
   
   exit(0);
  
  }
  
 if(cpid>0)
    {
   
   wait(NULL);
  
     read(fd2[0], &s2, sizeof(s2));
   
   arr1[1]=s2;
   close(fd2[0]);

   
 }




if (pipe(fd3)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
   

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
   
cpid = fork();
 if (cpid ==0 )
    {
  
    
     printf("\nCHILD 3 PID: %d",getpid());
  
    for(int i=200;i<300;i++){
  s3=s3+arr[i];
}    
   write(fd3[1], &s3, sizeof(s3));
     close(fd3[1]);
   
   exit(0);
  
  }
  
  if(cpid>0)
    {
   
   wait(NULL);
  
    read(fd3[0], &s3, sizeof(s3));
    arr1[2]=s3;
   
   close(fd3[0]);

   
 }




if (pipe(fd4)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
  
 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
   
 cpid = fork();

 if (cpid ==0 )
    {
  
    
   printf("\nCHILD 4 PID: %d",getpid());
  
    for(int i=300;i<400;i++){
  s4=s4+arr[i];
}    
   write(fd4[1], &s4, sizeof(s4));
     close(fd4[1]);
   
   exit(0);
  
  }
  
  if(cpid>0)
    {
   
   wait(NULL);
  
    read(fd4[0], &s4, sizeof(s4));
    arr1[3]=s4;
   
   close(fd4[0]);

   
 }



if (pipe(fd5)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
   

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
   cpid = fork();

 if (cpid ==0 )
    {
  
    
    printf("\nCHILD 5 PID: %d",getpid());
  
    for(int i=400;i<500;i++){
  s5=s5+arr[i];
}    
   write(fd5[1], &s5, sizeof(s5));
     close(fd5[1]);
   
   exit(0);
  
  }
  
  if(cpid>0)
    {
   
   wait(NULL);
  
   read(fd5[0], &s5, sizeof(s5));
     arr1[4]=s5;
   
   close(fd5[0]);

   
 }




if (pipe(fd6)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
 

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
 cpid = fork();  

 if (cpid ==0 )
    {
  
    
    printf("\nCHILD 6 PID: %d",getpid());
  
    for(int i=500;i<600;i++){
  s6=s6+arr[i];
}    
   write(fd6[1], &s6, sizeof(s6));
     close(fd6[1]);
   
   exit(0);
  
  }
if(cpid>0) 
    {
   
   wait(NULL);
  
    read(fd6[0], &s6, sizeof(s6));
   arr1[5]=s6;
   
   close(fd6[0]);

   
 }




if (pipe(fd7)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
   

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
   cpid = fork();

 if (cpid ==0 )
    {
  
    
   printf("\nCHILD 7 PID: %d",getpid());
  
    for(int i=600;i<700;i++){
  s7=s7+arr[i];
}    
   write(fd7[1], &s7, sizeof(s7));
     close(fd7[1]);
   
   exit(0);
  
  }
  if(cpid>0)
      {
   
   wait(NULL);
  
    read(fd7[0], &s7, sizeof(s7));
    arr1[6]=s7;
   
   close(fd7[0]);

   
 }





if (pipe(fd8)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
 

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
   
 cpid = fork();
 if (cpid ==0 )
    {
  
    
    printf("\nCHILD 8 PID: %d",getpid());
  
    for(int i=700;i<800;i++){
  s8=s8+arr[i];
}    
   write(fd8[1], &s8, sizeof(s8));
     close(fd8[1]);
   
   exit(0);
  
  }
  
  if(cpid>0)
    {
   
   wait(NULL);
  
   read(fd8[0], &s8, sizeof(s8));
    arr1[7]=s8;
   
   close(fd8[0]);

   
 }




if (pipe(fd9)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
  

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
   
cpid = fork();
 if (cpid ==0 )
    {
  
    
    printf("\nCHILD 9 PID: %d",getpid());
  
    for(int i=800;i<900;i++){
  s9=s9+arr[i];
}    
   write(fd9[1], &s9, sizeof(s9));
     close(fd9[1]);
   
   exit(0);
  
  }
  if(cpid>0)
      {
   
   wait(NULL);
  
    read(fd9[0], &s9, sizeof(s9));
   arr1[8]=s9;
   
   close(fd9[0]);

   
 }



if (pipe(fd10)==-1)
   
 {
        
printf("Pipe Failed" );
 
       return 1;
  
  }

  
  

 
   if (cpid < 0)
    {
      
  printf("fork Failed" );
  
      return 1;
   
 }
  cpid = fork(); 

 if (cpid ==0 )
    {
  
    
    printf("\nCHILD 10 PID: %d",getpid());
  
    for(int i=900;i<1000;i++){
  s10=s10+arr[i];
}    
   write(fd10[1], &s10, sizeof(s10));
     close(fd10[1]);
   
   exit(0);
  
  }
  
  if(cpid>0)
    {
   
   wait(NULL);
  
   read(fd10[0], &s10, sizeof(s10));
    arr1[9]=s10;
   
   close(fd10[0]);

   
 }


for(int i=0;i<10;i++){
s=s+arr1[i];
}
 printf("\nTOTAL SUM IS: %d\n", s);
  
}

	
	

