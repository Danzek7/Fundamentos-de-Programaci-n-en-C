#include <stdio.h>
void main(){
	int i;
	int j;
	int sport[6];
	for(i=0;i<5;i++){
		printf("\nIngrese :");
		scanf("%i",&sport[i]);
	}
	int suma[11];
	int mayor=0;
		
		for(j=0;j<11;j++){
			suma[j]=0;
			if(sport[j]==1){
	   		    suma[1]=suma[1]+1;
	   		    if(suma[1]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==2){
			    suma[2]=suma[2]+1;
			    if(suma[2]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==3){
	    	    suma[3]=suma[3]+1;
	    	    if(suma[3]>mayor){
				    mayor=sport[i];
			    }
	        }
		    if(sport[j]==4){
			    suma[4]=suma[4]+1;
			    if(suma[4]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==5){
	    	    suma[5]=suma[5]+1;
	    	    if(suma[5]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==6){
			    suma[6]=suma[6]+1;
			    if(suma[6]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==7){
	    	    suma[7]=suma[7]+1;
	    	    if(suma[7]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==8){
			    suma[8]=suma[8]+1;
			    if(suma[8]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==9){
	    	    suma[9]=suma[9]+1;
	    	    if(suma[9]>mayor){
				    mayor=sport[i];
			    }
		    }
		    if(sport[j]==10){
			    suma[10]=suma[10]+1;
			    if(suma[10]>mayor){
				    mayor=sport[i];
			    }
		    }
		}
	printf("\n%i",mayor);
}
