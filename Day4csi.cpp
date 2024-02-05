#include<iostearm>
user namespace std;

int factorial(int a);
int main () {
int a = 5;
return 0;
}
int factorial(int a){
int fac;
if(a==0||a==1){
   return 1;
}
else {
fac = a*factorial(a-1);
return fac
}
}
