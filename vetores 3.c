/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
main(){

int x;
char c;
printf(" Pesquisa vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y\n\n");

printf("Digite uma letra: ");
scanf("%c",&c);
getchar();

x = pesquisar(c);

    if(c>13){
    printf("nao existe");

    }
    else{printf("A Posicao Digitada eh %d",x);

}
}


pesquisar(c){
int y,z;

char vet[]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};

for (y=0;y<13;y++){

    switch(c){

    case 'b': z=1;
    break;

    case 'd':z=2;
    break;

    case 'f':z=3;
    break;

    case 'h':z=4;
    break;

    case 'j':z=5;
    break;

    case 'k':z=6;
    break;

    case 'm':z=7;
    break;

    case 'o':z=8;
    break;

    case 'q':z=9;
    break;

    case 's':z=10;
    break;

    case 'u':z=11;
    break;

    case 'w':z=12;
    break;

    case 'y':z=13;
    break;

    default:
         printf("Digite um caracter valido\n");
         y=13;
    break;

    }

}

return(z);
}
