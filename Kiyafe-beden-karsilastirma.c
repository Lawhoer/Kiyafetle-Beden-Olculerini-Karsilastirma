#include<stdio.h>

int main() {

 int iB, eB , ai ,ae;

     printf("Beden numaraniz: ");
 	 scanf("%d", &iB);
	 printf("Pantalonun beden numarasi: ");
	 scanf("%d", &eB);
	
/* �rn: iB=13, eB= 26 olsun bunlar� int olarak 10'a b�lersek iB=1, eB=2 gelir bunlar e�itse ayn� de�ilse farkl� s�n�flardad�r */
	
     ai = iB/10;  
     ae = eB/10; 

/* Hata k�sm� */

  if(ai<=0) {
  	printf("Hatali girdiniz: Insan bedeni cok kucuk\n");
  }	
  if(ai>=7) {
  	printf("Hatali girdiniz: Insan bedeni cok buyuk\n");
  }
  if(ae<=0) {
  	printf("Hatali girdiniz: Pantalon cok kucuk\n");
  }	
   if(ae>=7) {
  	printf("Hatali girdiniz: Pantalon cok buyuk\n");
  }
      
if((ai>0 && ae>0) && (ai<7 && ae<7)) {


/*Ayn� grupta ise*/

	if(ai == ae) {		
	   	printf("Tam\n");	
    	}
    	
/* Beden pantalondan 1 t�k b�y�kse */ 
  
	if((ai-ae) == 1) {
		printf("Dar\n");
	}
	
/* Beden pantalondan 2 t�k b�y�kse */	

    if((ai - ae) == 2 ) {
		printf("Cok dar\n");
	}
			
/* Beden pantalondan 3 t�k b�y�kse */	

    if((ai - ae) >= 3 ) {
		printf("Cok cok dar\n");
	}	

/* Pantalon bedenden 1 t�k b�y�kse */	

    if((ae- ai) == 1 ) {
		printf("Bol\n");
	}  
	
/* Pantalon bedenden 2 t�k b�y�kse */	

    if((ae- ai) == 2 ) {
		printf("Cok bol\n");  	   	
	}  	  

/* Pantalon bedenden 3 t�k b�y�kse */	

    if((ae- ai) >= 3 ) {
		printf("Cok cok bol\n"); 	   	
	} 			
}	
system("pause");
return 0;
}
