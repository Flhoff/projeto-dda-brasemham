#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (void ){
	int escolha;
	void algoritimoDDA(), algoritimoBresenham();
	printf(
"(0) - Sair\n"
"(1) - Imprime uma reta (Algoritmo DDA)\n"
"(2) - Imprime uma reta (Algoritmo de Bresenham)\n "
"(3) - Imprime polilinhas formando um polígono (Algoritmo DDA)\n "
"(4) - Imprime polilinhas formando um polígono (Algoritmo de Bresenham)\n"
"(5) - Imprime o traçado de um círculo (Teorema de Pitágoras)\n"
"(6) - Imprime o traçado de um círculo (Sistemas de coordenadas polares)\n"
"(7) - Imprime o traçado de um círculo (Algoritmo de Bresenham)\n");	
 scanf("%d", &escolha);
  
  switch ( escolha )
  {
       case 1 :
    algoritimoDDA();
    break;
    
    case 2 :
    algoritimoBresenham();
    break;
    
    case 3 :
    printf ("Terça\n");
    break;
    
    case 4 :
    printf ("Quarta\n");
    break;
    
    case 5 :
    printf ("Quinta\n");
    break;
    
    case 6 :
    printf ("Sexta\n");
    break;
    
    case 7 :
    printf ("Sabado\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
}
	
}

void algoritimoDDA(){
int Xini, Xfina, Yini, Yfina, DX, DY, step, Xinc, Yinc, Xaux, Yaux;
printf("entre como o valor inicial para X\n");
scanf("%d\n",&Xini);
printf("entre como o valor inicial para Y\n");
scanf("%d\n",&Yini);
printf("entre como o valor final para X\n");
scanf("%d\n",&Xfina);
printf("entre como o valor final para Y\n");
scanf("%d\n",&Yfina);

DX = Xfina-Xini;
DY = Yfina-Yini;

if (DX>= DY){
	step = DX;
} else{
step =DY;
} 

Xinc = DX/step;
Yinc = DY/step;

Xaux = Xini;
Yaux = Yini;

while(Xaux <= Xfina){
	Xaux = Xaux + Xinc;
	printf ("valore de X %d\n",Xaux);
}


}

void algoritimoBresenham(){
	
int Xini, Xfina, Yini, Yfina, DX, DY, Pini, Pfina, Paux, Xaux, Yaux;
printf("entre como o valor inicial para X\n");
scanf("%d\n",&Xini);
printf("entre como o valor inicial para Y\n");
scanf("%d\n",&Yini);
printf("entre como o valor final para X\n");
scanf("%d\n",&Xfina);
printf("entre como o valor final para Y\n");
scanf("%d\n",&Yfina);

DX = Xfina-Xini;
DY = Yfina-Yini;

Pini = (2*DY)-DX;
Paux = Pini;

Xaux = Xini;
Yaux = Yini;

while(Yaux <= Yfina){
if (Paux < 0) {
	printf("o valor de X e %d ", Xaux);
	printf("e o valor de Y e %d\n",Yaux);
	Paux = Paux+(2*DY);
	Xaux = Xaux+1;
}else{
	printf("o valor de X e %d ", Xaux);
	printf("e o valor de Y e %d\n",Yaux);
	Paux = Paux+(2*DY)-DX;
	Xaux = Xaux+1;
	Yaux = Yaux+1;
}

}
}

void poligonoDDA(){
}

void poligonoBresenham(){
}

void circuloPitagoras(){
}

void circuloPolar(){
int Xini, Xfina, Yini, Yfina, Pnorte, Psul, Poeste, Pleste, Raio;
printf("entre como a coordenada X para o centro do circulo\n");
scanf("%d\n",&Xini);
printf("entre como a coordenada Y para o centro do circulo\n");
scanf("%d\n",&Yini);
printf("entre como o valor para o raio do circulo\n");
scanf("%d\n",&Raio);

Pnorte = Yini + Raio
Psul = Yini - Raio
Poeste = Xini - Raio
Pleste = Xini - Raio



void q1{ 
Xini = Pleste
Xfina = Xini

Yini = Yini
Yfina = Pnorte

}

void q2{
Xini = Xini
Xfina = Poeste

Yini = Pnorte
Yfina = Yini
}

void q3{
Xini = Poeste
Xfina = Xini

Yini = Yini
Yfina = Psul
}


void q2{
Xini = Xini
Xfina = Pleste

Yini = Psul
Yfina = Yini
}
}

void circuloBresemham(){





}
