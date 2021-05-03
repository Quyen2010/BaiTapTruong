// Viết chương trình nhập vào hai số a và b, nhập một trong các phép toán pt: +, -,* , /. ^. 
// In lên màn hình kết quả của biểu thức a pt b. Ví dụ: a=5, b=2, pt=^ thì trên màn hình hiển thị 5 ^ 2 = 25.
// Sửa lại chương trình trên để người dùng có thể thực hiện nhiều cho đến khi muốn kết thúc bằng ấn nhấn phím thoát (ESC, n…).
#include<stdio.h>
#include<math.h>
#include<conio.h>
void Nhap(int &a, int &b);
void Xuat(int a, int b);
int plus (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
void menu(int a, int b);
int main(){
    int a,b;
    Nhap(a,b);
    menu(a,b);
    return 0;
}
void Nhap(int &a, int &b){
    printf("a = ");
    scanf("%d\n",&a);
    printf("b = ");
    scanf("%d",&b);
}
void Xuat(int a, int b){
    printf("a = %d",a);
    printf("b = %d",b);
}
int plus (int a, int b){
    return a+b;
}
int subtract (int a, int b){
    return a-b;
}
int multiply (int a, int b){
    return a*b;
}
float divide (int a, int b){
    return (float)a/b;
}
void menu (int a, int b){
    int choise = 0;
    char k,c;
    do{
        printf("\t\t\t=================menu===================\n");
        printf("1. Cong hai so\n");
        printf("2.Tru hai so\n");
        printf("3.Nhan hai so\n");
        printf("4.Chia hai so\n");
        printf("you choise: ");
        scanf("%d",&choise);
        switch(choise){
            case 1 :
                printf("\n%d +%d = %d",a,b,plus(a,b));
                break;
            case 2:
                printf("\n%d - %d = %d",a,b,subtract(a,b));
                break;
            case 3:
                printf("\n%d * %d = %d",a,b,multiply(a,b));
                break;
            case 4:
                printf("\n%d / %d = %.2f",a,b,divide(a,b));
                break;
            default:
                printf("Loi!. Vui  long nhap lai.");
        }printf("\nban co muon thoat khoi ? nhan (esc)\n");
        k = getch();
        c = k ;
    }while( c!= 27);
}
