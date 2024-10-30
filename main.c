#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum Triangolo { EQUILATERO, ISOSCELE, SCALENO } Triangolo;
typedef enum boolean { false, true } bool;

// verifica se il triangolo è rettangolo tramite l'equazione di Pitagora
bool isTRettangolo(float a, float b, float c) {
  if (a > b && a > c) { // a è l'ipotenusa
    return (a * a) == (b * b) + (c * c);
    
  } else if (b > a && b > c) { // b è l'ipotenusa
    return (b * b) == (a * a) + (c * c);
    
  } else { // c è l'ipotenusa
    return (c * c) == (a * a) + (b * b);
    
  }
}

// restituisce il tipo di triangolo in base ai cateti forniti
Triangolo tipoTriangolo(float a, float b, float c) {
  if (a == b && b == c) {
    return EQUILATERO;
  } else if (a == b || a == c || b == c) {
    return ISOSCELE;
  } else {
    return SCALENO;
  }
}

// verifica se i cateti forniti danno origine ad un triangolo o se sono invalidi
bool isTriangolo(float a, float b, float c) {
  // i cateti devono essere maggiori di 0 e la somma di due cateti deve essere maggiore del terzo
  return (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) ? true : false;
}

int main() {
  printf("UniPG - Tutoraggio: esercizio triangoli. Made by https://www.github.com/matbagnoletti\n\n");
  // cateti del triangolo
  float a, b, c;
  
  for(int i = 1; i < 4; i++) {
    printf("Inserisci il valore del %d^ cateto: ", i);
    switch (i) {
      case 1:
        scanf("%f", &a);
        break;
      case 2:
        scanf("%f", &b);
        break;
      case 3:
        scanf("%f", &c);
        break;
    }
  }
  
  // validazione dei cateti
  if (!isTriangolo(a, b, c)) {
    printf("Le misure dei cateti inserite NON danno origine ad un triangolo.\n");
    return 0;
  }
  
  
  printf("Le misure dei cateti inserite danno origine ad un triangolo ");
  switch(tipoTriangolo(a, b, c)) {
    case EQUILATERO:
      printf("equilatero.\n");
      // un triangolo equilatero non è mai rettangolo
      break;
      
    case ISOSCELE:
      printf("isoscele ");
      if (isTRettangolo(a, b, c)) {
          printf("rettangolo.\n");
      } else {
          printf("non rettangolo.\n");
      }
      break;
      
    case SCALENO:
      printf("scaleno ");
      if (isTRettangolo(a, b, c)) {
          printf("rettangolo.\n");
      } else {
          printf("non rettangolo.\n");
      }
      break;
  }
  
  return 0;
}