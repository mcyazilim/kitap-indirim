#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bookprice,orderquantity;
    float discountrate,nodiscountprice,discountprice,sum;
    bookprice=10;
    orderquantity=0;

    printf("Kac adet kitap siparis etmek istiyorsunuz:");
    scanf("%d",&orderquantity);

    if(orderquantity>=50){
        discountrate=0.30;
    }else if(orderquantity>=30 && orderquantity<60){
        discountrate=0.20;
    }else if(orderquantity>=10 && orderquantity<30){
        discountrate=0.10;
    }else{
        discountrate=0.01;
    }

    nodiscountprice= orderquantity*bookprice;
    printf("Kitaplarin indirimsiz tutari: %f\n",nodiscountprice);

    discountprice= nodiscountprice*discountrate;
    printf("Indirim tutari: %f\n",discountprice);

    sum=nodiscountprice-discountprice;
    printf("Siparislerin toplam tutari: %f\n",sum);

    return 0;

}
