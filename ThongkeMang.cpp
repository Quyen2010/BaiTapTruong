// viet chuong trinh nhap vao mot day so nguyen
//Tong day so nguyen,TBC
//tim MAX MIN
// thong ke so chan , x nhap tu ban phim
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Nhap(int *a,int &n);
int sum(int *a,int n);
float average(int *a,int n);
int findMAX(int *a, int n);
int findMIN(int *a, int n);
void sort(int *a, int n);
int evennumber(int *a, int n);
int main(){
    int n;
    int *a = (int *) malloc( 10 * sizeof( int ));
    do{
        printf("nhap n = ");
        scanf("%d",&n);
        if(n<= 0){
            printf("nhap n = ");
            scanf("%d",&n);
        }
    }while(n<=0);
    Nhap(a,n);
    sum(a,n);
        printf("Tong = %d",sum(a,n));
    average(a,n);
        printf("\nTBC = %.f",average(a,n));
    findMAX(a,n);
    findMIN(a,n);
    sort(a,n);
    evennumber(a,n);
    return 0;
}
void Nhap(int *a,int &n){
    printf("nhap day so nguyen\n");
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",(a+i));
    }
}
int sum(int *a,int n){
    int S = 0;
    for(int i = 0 ; i < n ; i ++){
        S = S + *(a+i);
    }
    return S;
}
float average(int *a,int n){
    float TBC = 0;
    for(int i = 0 ; i < n ; i ++){
        TBC = (float)sum(a,n)/n;
    }
    return TBC;
}
int findMAX(int *a, int n){
    int MAX = a[0] ;
    for(int i = 0 ; i< n ; i++){
        if(a[i]>MAX){
            MAX = a[i];
        }
    }
    printf("\nso lon nhat la: %d",MAX);
    return MAX;
}
int findMIN(int *a, int n){
    int MIN = a[0];
    for(int i = 0 ; i < n ; i++){
        if(a[i]<a[0]){
            MIN = a[i];
        }  
    }
    printf("\nso nho nhat la: %d",MIN);
    return 0;
}
void sort (int *a,int n){
    int temp ;
    for (int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if (*(a+i) > *(a+j)){
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    printf("\nday sau khi sap xep la:\n");
    for(int i = 0 ; i < n ; i ++){
        printf("%5d",*(a+i));
    }
}
int evennumber(int *a, int n){
    int x;
    printf("\nnhap x: ");
    scanf("%d",&x);
    sort(a,n);
    printf("\ncac so chan nho hon x la: %d",x);
    for(int i = 0 ; i < n ; i ++){
        if(*(a+i)%2==0 && *(a+i)<x ){
            printf("%d",*(a+i));
        }
    }
    return x;
}
