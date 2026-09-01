#include <stdio.h>

int main() {
//Traversal
    int a[10]={1,21,43,54,45,96,17,38,29,10};
    #include <stdio.h>

int main() {
//Traversal
    int a[10]={1,21,43,54,45,96,17,38,29,10};
    for (int i=0;i<10;i++){
        printf("Element %d is %d\n ",i,a[i]);
    }
//Search
    int val = 54;
    for (int i=0;i<10;i++){
        if(a[i]==val){
            printf("Element %d found at %d" , val,i);
        }
    }
    
// Max and min
    int max=a[0];
    for (int i=0;i<10;i++){
        if(a[i]>max){
           max=a[i];
        }
       
    }
    
    int min=a[0];
    for (int i=0;i<10;i++){
        if(a[i]<min){
           min=a[i];
        }
        
    }
    printf("\n Max=%d",max);
    printf("\nMin=%d",min);
    
// insertion at position
    
    int pos,num;
    printf("\nEnter number needs to be added: ");
    scanf("%d",&num);
    printf("\n Enter position at which you number needs to be added: ");
    scanf("%d",&pos);

    
    for (int i=11;i>=pos;i--){
        if (i==(pos)){
            a[i]=num ;
    }
}
     for (int i=0;i<10;i++){
        printf("\nElement %d is %d\n ",i,a[i]);
    }
    
    
    
// deletion at given position







}

//Search
    int val = 54;
    for (int i=0;i<10;i++){
        if(a[i]==val){
            printf("Element %d found at %d" , val,i);
        }
    }
    
// Max and min
    int max=a[0];
    for (int i=0;i<10;i++){
        if(a[i]>max){
           max=a[i];
        }
       
    }
    
    int min=a[0];
    for (int i=0;i<10;i++){
        if(a[i]<min){
           min=a[i];
        }
        
    }
    printf("\n Max=%d",max);
    printf("\nMin=%d",min);
    
// insertion at beginning
    
    int numb=12;
    
    for (int i=10;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=numb;
    
    printf("\nat Beginning\n");
    for (int i=0;i<10;i++){
        printf("Element %d is %d\n ",i,a[i]);
    }
    
//at any pos
    int nump=14;
    int pos=3;
    
    for (int i=0 ;i<10;i++){
        if (i==pos){
            a[i]=nump;
        }
    }
    printf("\nat pos\n");
    for (int i=0;i<10;i++){
        printf("Element %d is %d\n ",i,a[i]);
    }
//at end 
    int nume=4578;
    for(int i=0;i<10;i++){
        a[i]=a[i+1];
    }
    a[9]=nume;
    printf("\nat end\n");
    for (int i=0;i<10;i++){
        printf("Element %d is %d\n ",i,a[i]);
    }


// deletion at beginning
    

    for(int i=0;i<10;i++){
        a[i]=a[i+1];
    }

    int n = 10;
    int posd = 4;
    if(posd>=1 && posd<=n){
        for (int i= posd-1 ;i<n-1;i++){
            a[i]=a[i+1];
        } 
        n--;
    }
    
printf("\n deletion at pos %d",posd);
    for (int i=0;i<10;i++){
        printf("\nElement %d is %d ",i,a[i]);
    }
//deletion at  end 
    if (n>0){
        n--;
    }
    printf("\n deletion at end ");
    for (int i=0;i<10;i++){
        printf("\nElement %d is %d ",i,a[i]);
    }

}
// Also add sum of all elements of array code
