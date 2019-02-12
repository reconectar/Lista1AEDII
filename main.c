#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



//Lista 1 AEDII, 2019/1

void q1(){
    float area, perimetro, b, h;
    int i;
    for(i=0; i<10; i++){
        printf("Insira o valor da base: ");
        scanf("%f", &b);
        printf("Insira o valor da altura: ");
        scanf("%f", &h);
        area = b*h;
        perimetro = 2*b+2*h;
        printf("Area = %f, Perimetro = %f\n", area, perimetro);
    }
}

void q2(){
    float b=0,h,soma=0, area, perimetro;

    while(b>=0){
        printf("Insira o valor da base: ");
        scanf("%f", &b);
        if(b>=0){
            printf("Insira o valor da altura: ");
            scanf("%f", &h);
            area=b*h;
            perimetro=(b*2)+(h*2);
            soma+=area;
            printf("Perimetro = %f\n", perimetro);
            printf("Area = %f\n", area);
        }
    }
    printf("\nSomatorio = %f\n", soma);
}

void q3(){
    int i;
    float area, PI = 3.14159265;
    for(i=10; i<=100; i++){
        area = PI*(float)i*(float)i;
        printf("Area = %f\n", area);
    }
}

void q4(){
    int i;
    float r, area, PI = 3.14159265;
    for(i=10; i<=50; i++){
        if(i%2==1){
            area = PI*(float)i*(float)i;
            printf("Area = %f\n", area);
        }
    }
}

void q5(){
    float a,x,y,i,p;

    printf("Insira o valor de x: ");
    scanf("%f", &x);
    printf("Insira o valor de y: ");
    scanf("%f", &y);
    printf("Insira o valor de p: ");
    scanf("%f", &p);
    for(i=x;i<=y;i=i+p){
        a=3.14*i*i;
        printf("Area de r = %f = %f\n", i, a);
    }
}

void q6(){ //Com erro no print (imprecisao de float?)
    float i, a;
    for(i=1;i<=10;i=i+0.1){
        a=3.14*i*i;
        printf("Area de r = %f = %f\n", i, a);
    }
}

void q7(){
    int b, h;
    float area, perimetro;

    for(b=1; b<=10; b++){
        for(h=5; h<=8; h++){
            area=h*b;
            perimetro=2*h+2*b;
            printf("Perimetro = %f\n", perimetro);
            printf("Area = %f\n\n", area);
        }
    }
}

void q8(){
    float area,perimetro,b1,h1,b2,h2,p1,p2,i,j;

    printf("Insira o valor de b1: ");
    scanf("%f", &b1);
    printf("Insira o valor de b2: ");
    scanf("%f", &b2);
    printf("Insira o valor de p1: ");
    scanf("%f", &p1);
    printf("Insira o valor de h1: ");
    scanf("%f", &h1);
    printf("Insira o valor de h2: ");
    scanf("%f", &h2);
    printf("Insira o valor de p2: ");
    scanf("%f", &p2);

    for(i=b1;i<=b2;i=i+p1){
        for(j=h1;j<=h2;j=j+p2){
        area=i*j;
        perimetro=2*i+2*j;
        printf("area = %f\n", area);
        printf("perimetro = %f\n", perimetro);
        }
        printf("\n");
    }
}

void q9(){
    float x1, x2, y;
    int a, b, c, i;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    printf("Insira o valor de c: ");
    scanf("%d", &c);
    printf("Insira o valor de x1: ");
    scanf("%f", &x1);
    printf("Insira o valor de x2: ");
    scanf("%f", &x2);
    for(i=x1;i<=x2;i++){
        y = a*i*i+b*i+c;
        printf("y = %f\n", y);
    }
}

void q10(){
    float y, x, z, h;
    for(x=1;x<=5;x++){
        for(z=3;z<=6;z++){
            for(h=2;h<=4;h++){
                y = 3/(4*x)+5*z-7*h;
                printf("y = %.4f\n", y);
            }
        }
    }
}

void q11(){
    int i,r,n;
    printf("Insira o numero: ");
    scanf("%d", &n);
    for(i=1;i<=10;i++){
        r=n*i;
        printf("%d * %d = %d\n", n , i, r);
    }
}


void q12(){
    int i,j,r;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            r=i*j;
            printf("%d * %d = %d\n", i , j, r);
        }
        printf("\n");
    }
}

void q13(){
    float a, r=0;
    int b;

    printf("Insira o valor de a: ");
    scanf("%f", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);

    for(b;b!=0;b--){
        r+=a;
    }
    printf("Multiplicao = %f", r);
}

void q14(){
    float a, r=1;
    int b;

    printf("Insira o valor de a: ");
    scanf("%f", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);


    for(b;b!=0;b--){
        r*=a;
    }
    printf("Resultado = %f", r);
}

void q15(){
    int a, b, r, aux=0;

    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    r=a;

    while(r>0){
        if((r-b)>=0){
            r-=b;
            aux=r;
        }else{
            r=0;
        }
    }
    printf("Resto = %d", aux);
}

void q16(){
    int a, b, r, cont=0;

    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    r=a;

    while(r>0){
        if((r-b)>=0){
            r-=b;
            cont++;
        }else{
            r=0;
        }
    }
    //cont-=b;
    printf("Quociente = %d", cont);
}

void q17(){
    int n, i;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    for(i=n-1;i>1;i--){
        n=n*i;
    }
    printf("Fat = %d", n);
}

void q18(){
    int a=1, b=1, c, n, i;
    printf("Insira n: ");
    scanf("%d", &n);
    printf("%d, ", b);
    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        printf("%d, ", b);
        b=c;
    }
}

void q19(){
    int i, n;
    float d=1, H=0;
    printf("Insira n: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        H+=1/d;
        d++;
    }
    printf("%f\n", H);
}

void q20(){
    int i, n;
    float a=1,b=1, L=0;
    printf("Insira n: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        L+=a/sqrt(b);
        a++;
        b=b+2;
    }
    printf("%f\n", L);
}

void q21(){ //Nao está contabilizando os que nao existem porque nao entra no FOR
    int a, b, c, n1, n2, n3, contExiste=0, contNExiste=0;
    printf("Insira um valor para A, maior ou igual a 1: ");
    scanf("%d", &a);
    printf("E até onde ele vai variar: ");
    scanf("%d", &n1);
    printf("Insira um valor para B, maior ou igual a 1: ");
    scanf("%d", &b);
    printf("E até onde ele vai variar: ");
    scanf("%d", &n2);
    printf("Insira um valor para C, maior ou igual a 1: ");
    scanf("%d", &c);
    printf("E até onde ele vai variar: ");
    scanf("%d", &n3);
    for(a;a<=n1;a++){
        for(b;b<=n2;b++){
            for(c;c<=n3;c++){
                if((a<b+c)||(b<a+c)||(c<b+a)){
                    contExiste++;
                }else{
                    contNExiste++;
                }
            }
        }
    }
    printf("\n%d existem\n", contExiste);
    printf("%d nao existem\n", contNExiste);
}

void q22(){
    char nome[50], nomeMaisNova[50];
    int ano, idade, idadeNovo=2019, contAntes=0, contDepois=0, cont=0, n=3;
    float alturaMediaAntes=0, alturaMediaDepois=0, altura;
    while(n!=2){
        printf("1. Nova pessoa\n");
        printf("2. Sair\n");
        printf("Selecione a opcao desejada: ");
        scanf("%d", &n);
        system("cls");
        if(n==1){
            printf("Insira o nome: ");
            scanf("%s", &nome);
            printf("Insira o valor da altura: ");
            scanf("%f", &altura);
            printf("Insira o ano de nascimento: ");
            scanf("%d", &ano);
            system("cls");
            if(ano<2005){
                cont++;
            }
            if(ano<1985){
                contAntes++;
                alturaMediaAntes+=altura;
            }else{
                contDepois++;
                alturaMediaDepois+=altura;
            }
            idade=2019-ano;
            if(idadeNovo>idade){
                idadeNovo=idade;
                strcpy(nomeMaisNova, nome);
            }
        }
    }
    alturaMediaAntes/=contAntes;
    alturaMediaDepois/=contDepois;
    printf("%d pessoas nasceram antes de 2005\n", cont);
    printf("%f e a altura media das pessoas que nasceram antes de 1985\n", alturaMediaAntes);
    printf("%f e a altura media das pessoas que nasceram depois ou em 1985\n", alturaMediaDepois);
    printf("%s e o nome da pessoa mais nova, cuja idade e = %d\n", nomeMaisNova, idadeNovo);
}

int main()
{
    //q1();
    //q2();
    //q3();
    //q4();
    //q5();
    //q6();
    //q7();
    //q8();
    //q9();
    //q10();
    //q11();
    //q12();
    //q13();
    //q14();
    //q15();
    //q16();
    //q17();
    //q18();
    //q19();
    //q20();
    //q21();
    //q22();

    return 0;
}
