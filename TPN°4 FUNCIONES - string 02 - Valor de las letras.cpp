#include <bits/stdc++.h>
using namespace std;

int ContarValorLetras(string frase);

int main()

{
string frase;
    cout<<"Ingresa la frase: "<<endl;
    getline(cin,frase);
   
    cout<<"El valor de las letras es: "<<ContarValorLetras (frase)<<endl;
   
return 0;

}

int ContarValorLetras(string f)

{
int valor=0;
int contador=0;

for(int i=0; i< f.size();i++)
	{
if(f[i]=='a' || f[i]=='e' || f[i]=='A' || f[i]=='E')
	{
valor=1;
	}
if(f[i]=='o' || f[i]=='s' || f[i]=='O' || f[i]=='S')
	{
valor=2;
	}
if(f[i]=='d' || f[i]=='i' || f[i]=='n' || f[i]=='r' 
|| f[i]=='D' || f[i]=='I' || f[i]=='N' || f[i]=='R')
	{
valor=3;
	}
if(f[i]=='c' || f[i]=='l' || f[i]=='t' || f[i]=='u'
|| f[i]=='C' || f[i]=='L' || f[i]=='T' || f[i]=='U')
	{
	valor=4;
    }
if(f[i]=='m' || f[i]=='p' || f[i]=='M' || f[i]=='P')
	{
	valor=5;
    }
if(f[i]=='b' || f[i]=='f' || f[i]=='g' || f[i]=='h' || f[i]=='j' 
|| f[i]=='q' || f[i]=='v' || f[i]=='x' || f[i]=='y' || f[i]=='z'
|| f[i]=='B' || f[i]=='F' || f[i]=='G' || f[i]=='H' || f[i]=='J' 
|| f[i]=='Q' || f[i]=='V' || f[i]=='X' || f[i]=='Y' || f[i]=='Z')
	{
valor=6;
	}
if(f[i]=='k' || f[i]=='w' || f[i]=='K' || f[i]=='W')
	{
valor=7;
	}
contador+=valor;
	}

return contador;
}
