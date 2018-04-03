#include<iostream>
using namespace std;

int main(){
	//Problem 1
	/*
	int edad=0;
	cout<<"Introdusca su edad: ";cin>>edad;
	if(edad >= 18){
		cout<<"Usted es mayor de edad";
	}
	else{
		cout<<"Usted es menor de edad";
	}
	*/
	
	//Problem 2
	/*
	int n=1,max;
	cout<<"ingresa tu valor max: ";cin>>max;
	while(n<=max){
		if(n<max){
			cout<<n<<",";
			n++;
			
		}
		else{
			cout<<n;
			n++;
		}
	}
	*/
	
	//Problem3
	/*
	int n1,n2,n3, prom=0, mayor=0, menor=0;
	
	cout<<"ingresa tu numero 1: ";cin>>n1;
	cout<<"ingresa tu numero 2: ";cin>>n2;
	cout<<"ingresa tu numero 3: ";cin>>n3;
	//mayor
	if(n1 > n2 && n1 > n3){
		mayor=n1;
	}
	else if(n2 > n1 && n2 > n3){
		mayor=n2;
	}
	else{
		mayor=n3;
	}
	//menor
	if(n1 < n2 && n1 < n3){
		menor=n1;
	}
	else if(n2 < n1 && n2 < n3){
		menor=n2;
	}
	else{
		menor=n3;
	}
	//promedio
	prom=(n1+n2+n3)/3;
	
	cout<<"El numero menor es: "<<menor<<endl;
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"El promedio de los tres numeros es: "<<prom<<endl;
	*/
	
	//Problem 4
	/*
	int m1,m2;
	cout<<"ingresa tu primer numero: ";cin>>m1;
	cout<<"ingresa tu segundo numero: ";cin>>m2;
	
	if(m1%2==0){
		cout<<"El primer numero es multiplo de 2"<<endl;
	}
	else{
		cout<<"El primer numero no es multiplo de 2"<<endl;
	}
	if(m2%2==0){
		cout<<"El segundo numero es multiplo de 2"<<endl;
	}
	else{
		cout<<"El segundo numero no es multiplo de 2"<<endl;
	}
	if(m1 % m2 == 0){
		cout<<"El primer numero es multiplo del segundo"<<endl;
	}
	else{
		cout<<"El primer numero no es multiplo del segundo"<<endl;
	}
	if((m1*m1)==m2){
		cout<<"El primero numero al cuadrado es igual al segundo"<<endl;
	}
	else{
		cout<<"El primer numero al cuadrado no es igual al segundo"<<endl;
	}
	*/
	
	//Problem 5
	/*
	int i,prim,cont=0;
	cout<<"ingresa un numero: ";cin>>prim;
	for(i=1;i<=prim;i++){
		if(prim%i==0){
			cont++;
		}
	}
	if(cont!=2){
		cout<<"El numero no es primo";
			
	}
	else{
		cout<<"El numero es primo";
	}
	*/
	
	//Problem 6
	/*
	int n=0,c=0,c2=0,res=0,nc=0;
  	cout<<"Introduce tu numero maximo: "; cin>>n;
  	for(c=1;c<=n;c++)
  	{
	    for(c2=1;c2<=c;c2++)
	    {
	    	res=c%c2;
	      	if(res==0)
	      	{
	        	nc=nc+1;
	      	}
	    }
	    if(nc==2)
	    {
	    	cout<<" "<<c;
	    }
	    nc=0;
  	}
	*/
	
	//Problem 7
	/*
	int num, val;
	cout<<"ingresa un numero de 5 digitos: ";cin>>num;
	
	cout<<num/10000;
	val=num%10000;
	cout<<"\t"<<val/1000;
	val=val%1000;
	cout<<"\t"<<val/100;
	val=val%100;
	cout<<"\t"<<val/10;
	val=val%10;
	cout<<"\t"<<val/1;
	*/
	
	//Problem 8
	/*
	int num,aux,resto,numInv=0;
 
 	cout<<"Ingrese numero de 5 digitos: ";cin>>num;
 
 	aux=num;
 
 	while(aux>0){
		resto=aux%10;
      	aux=aux/10;
      	numInv=numInv*10+resto;
      	
 	}
 
	if(numInv==num){
		cout<<"Numero es palindromo";
	}
	else{
		cout<<"Numero no palindromo";
	}
	*/
	
	//Problem 9
	//son bisiestos los años multiplos de 4, los multiplos de 100 no lo son amenos que sean multiplos de 400
	
	/*
	int fecha;
	cout<<"ingresa un anio: ";cin>>fecha;
	
	if((fecha%4 != 0) || (fecha%100==0 && fecha %400 != 0) ){
		cout<<"no es un anio bisiesto";
	}
	else{
		cout<<"es un anio bisiesto";
	}
	*/
	
	//Problem 10
	//fibonacci de n es fibonacci(n-1)+fibonacci(n+2);
	
	/*
	int n,a=0,b=1,c=0,i,p=1;
	
	cout << "Introduce un numero: ";cin >> n ;
	
    cout << endl;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout << "Numero " <<"["<< i <<"]"<< " en la serie Fibonacci: " << a << "\n";
		a=b; b=c;
 
	}
	*/
	
	//Problem extra
	/*
	int fact=1, numero;
	cout<<"introduce un numero: ";cin>>numero;
	for(int i=1;i<=numero;i++){
		fact=fact*i;
	
	}
	cout<<fact;
	*/
	
	return 0;
}
