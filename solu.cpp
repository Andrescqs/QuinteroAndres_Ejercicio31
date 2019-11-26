#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

void difusion(int Nx);

int main(void){
    
    difusion(10);
	difusion(30);
	difusion(100);
	
	return 0;
}

void difusion(int Nx){
    
    double x_1 = -1;
    double x_2 = 1;
    double Dx = (x_2-x_1)/Nx;
	double C = 1;
    double Dt = (Dx*Dx)/(2*C);    
    double s = 1;   
    double Psi_n[Nx+2],Psi[Nx+2];
    double Cambio_psi, Cambio_max, Psi_max;
    Cambio_psi=1;
    
    
    for(int i = 0; i < Nx+2; i++){
            Psi[i] = 0;
    }

    while (Cambio_psi > 10e-5){
        Cambio_max=0;
        Psi_max=0;
        
        for (int j = 1; j < Nx+1; j++){
            Psi_n[j] = (1.0/2) * Psi[j+1] + (1.0/2) * Psi[j-1]+s * (Dx*Dx)/(2*C);
			
            if (abs(Psi_n[j] - Psi[j]) > Cambio_max){
			
                Cambio_max = abs(Psi_n[j] - Psi[j]);
				
				
            }
			cout << Psi_n[j] << j << "\n" << endl;
		}
	}
}
            
            
            
            
            
            

            
            
