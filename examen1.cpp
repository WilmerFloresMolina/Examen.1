    #include <iostream>
    #include <cstdlib>
	#include <math.h>
	#include <cstring>



    using std::cin;
    using std::cout;
    using std::endl;
    using namespace std;

    int ejercicio1(char*frase,char* abecedario);
    void liberar_Memoria_frase(char* frase);
    void CreandoMatriz (char** m);
    void liberar_Memoria(char** m);
    void ejercicio2(char** frases,char abecedario[]);

    int main(int argc, char const *argv[]){
    	


    	int opcion =1;

    	while(opcion<4){

    		cout<< "Ingrese su opcion:"<<endl;
    		cout << "1. ejercicio1"<<endl;
    		cout << "2. ejercicio2"<<endl;
    		cout << "3. ejercicio3"<<endl;
    		cout << "4. salir"<<endl;
    		cin>>opcion;
    		cin.ignore();
    		if(opcion==1){
    			char abecedario[] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    			char* frase = new char[100];

    			cout<<"ingrese una frase"<<endl;
    			cin.getline(frase,100);
    			if (ejercicio1(frase,abecedario)==1){
    				cout <<"si es pangramas "<<endl;
    			}else{
    				cout<<"no es pangramas "<<endl;
    			}



    			liberar_Memoria_frase(frase);
    		}

    		if(opcion==2){
    			int opcion2=1;
    			int contador2=0;
    			char** frases = new char*[100];
    			CreandoMatriz (frases);
    			char abecedario[] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    			while(opcion2==1){
    				//cin.ignore();
    				//cout << "entro" << endl;
    				cout<<"ingrese una frase"<<endl;
    				//cout << "salgo" << endl;
    				cin.getline(frases[contador2],100);
    				cout << "hago" << endl;
    				//cout << contador2 <<frases[contador2] << endl;
    				for(int i =0;i<3;i++){
    					for(int j=0;j<3;j++){
    					cout <<frases[i][j];
    					}
    					cout <<endl;
    				}
    				

    				cout<<"desea continuar [si=1/no=2]"<<endl;
    				cin >>opcion2;
    				cin.ignore();
    				//int limite = (sizeof(edades)/sizeof(edades[0]));

    				contador2++;
    			}
    			ejercicio2(frases,abecedario);


    			liberar_Memoria(frases);

    		}


    	}

    	

    	
    	return 0;
    }
    int ejercicio1(char*frase,char* abecedario){
    	int x=0;
    	int contador=0;
			for(int i =0;i<100;i++){
				if(frase[i] == '\0'){
					contador=i;
					break;
				}
			}

    	for(int i =0 ; i <contador ;i++){
 			for(int j = 0 ;j<27;j++){
 				if(frase[i]==abecedario[j]){
 					abecedario[j]='0';

 				}

 			}

    	}
    	int contador2=0;
    	for(int i =0 ; i <27 ;i++){
    		if(abecedario[i]=='0'){
    			contador2++;
    		}

    	}
    	cout<<contador<<endl;
    	cout<<contador2<<endl;
    	if(contador2==26){

    		x=1;
    	}

    	return x;
    }


	void liberar_Memoria_frase(char* frase){

		delete[] frase;
		
	}

	void CreandoMatriz (char** m){

		for (int i =0; i<100 ;i++){
				m[i]=new char[100];
		}





	}

	void liberar_Memoria(char** m){


		for(int i =0 ; i <100 ;i++){
			delete[] m[i];

		}

		delete[] m;

	}

	void ejercicio2(char** frases,char abecedario[]){
		int fila=0;
		for(int i =0;i<100;i++){
			if(frases[i][0] == '\0'){
				fila=i;
				break;
			}
		}
		cout<<fila<<endl;

		for(int i =0;i<fila;i++){
			//abecedario={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
			char abecedario2[27];
			strcpy(abecedario2,abecedario);
			int contador=0;
			for(int j =0;j<100;j++){
				if(frases[i][j] == '\0'){
					contador=j;
					break;
				}
			}
			int palabras=1;
			for(int j =0; j < contador;j++){
				if(frases[i][j]==' '){
					palabras++;
				}

			}


    	for(int j =0 ; j <contador ;j++){
 			for(int k = 0 ;k<27;k++){
 				if(frases[i][j]==abecedario[k]){
 					abecedario[k]='0';

 				}

 			}

    	}




			int letras = 26;

			for(int j =0 ; j <27 ;j++){
    			if(abecedario[j]=='0'){
    				letras--;
    			}

    		}



			cout<< "letras restantes que no se utilizaron en el abecedario es igual "<<letras<<endl;
			cout<<"palabras en la oracion "<<i<< " es igual a "<<palabras<<endl;	
		}






	}

	void ejercicio1(){

    /// llsad
	}