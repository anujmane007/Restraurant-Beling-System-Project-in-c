/*Name: Anuj Rajendra Mane
Project Name: Restraurant Billing System
Div: c
Roll No: 66_FY_CSE*/
#include<stdio.h>

int main()
{
    printf("\t\t\t\t\t\tWELCOME TO THE HOTEL SATARA!!\n\n");
    int number;
    float Bill;
    float p,q=80,r,u,s=120,t,v,w=90,x;
    float bc,ba,bb=200,bd,be=150,bf,bg,bh=250,bi;
    char name[50];
    printf("Enter your name:\n");
    scanf("%s",&name);
    
    printf("\t\t\tVEG MENU\t\t\t\tNON-VEG MENU\n\n");
    printf("\t\t\t1.Shakahari Rice plate: 80\t\t4.Matan biryani: 200\n\n");
    printf("\t\t\t2.Special shakahari Rice plate: 120\t5.Chiken biryani: 150\n\n");
    printf("\t\t\t3.Veg biryani: 90\t\t\t6.Kolhapuri biryani: 250\n\n");
    printf("\t\t\t7.Total bill");
    printf("\n\nHi %s WELCOME TO HOTEL SATARA!! BILLING SYSTEM\n");

    while(1)
    {
        printf("\n\nEnter your dish numbers: ");   
        scanf("%d",&number);

    switch(number)
    {
                case 1:
                    printf("Enter the quantity you want to order: ");
                    
                    scanf("%f",&p);
                    r=p*q;
                    printf("Total: %.1f\n",r);
                    break;
                case 2:
                    printf("Enter the quantity you want to order: ");
                    
                    scanf("%f",&t);
                    u=s*t;
                    printf("Total: %.1f\n",u);
                    break;
                case 3:
                    printf("Enter the quantity you want to order: ");
                    
                    scanf("%f",&v);
                    x=v*w;
                    printf("Total: %.1f\n",x);
                    break;
                case 4:
                    printf("Enter the quantity you want to order: ");
                    
                    scanf("%f",&ba);
                    bc=ba*bb;
                    printf("Total: %.1f\n",bc);
                    break;
                case 5:
                    printf("Enter the quantity you want to order: ");
                    scanf("%f",&bd);
                    bf=bd*be;
                    printf("Total: %.1f\n",bf);
                    break;
                case 6:
                    printf("Enter the quantity you want to order: ");
                    
                    scanf("%f",&bg);
                    bi=bg*bh;
                    printf("Total: %.1f\n",bi);
                    break;
                case 7:
                printf("\t\t\t\t\t\t\t!!HOTEL SATARA!!\n");
                printf("\n\t\t\tMENU\t\t\t\tPRISE\t\tQUANTITY\tAMOUNT\n\n");
                printf("\t\t\t1.Shakahari Rice plate\t\t80\t\t%1.f\t\t%1.f\n",p,r);
                printf("\t\t\t2.Special shakahari Rice plate\t120\t\t%1.f\t\t%1.f\n",t,u);
                printf("\t\t\t3.Veg biryani\t\t\t90\t\t%1.f\t\t%1.f\n",v,x);
                printf("\t\t\t4.Matan biryani\t\t\t200\t\t%1.f\t\t%1.f\n",ba,bc);
                printf("\t\t\t5.Chiken biryani\t\t150\t\t%1.f\t\t%1.f\n",bd,bf);
                printf("\t\t\t6.Kolhapuri biryani\t\t250\t\t%1.f\t\t%1.f\n\n",bg,bi);
                Bill=r+u+x+bc+bf+bi;
                printf("\t\t\tTOTAL BILL : %1.f\n\n\n",Bill);
                printf("\t\t\t\t\t\tTHANK YOU %s FOR VISITING!! VISIT AGAIN!!\n",name);
                break;

                default:
                    printf("\n**********Invalid choice!***********\n");

        }
    }
    return 0;
}
