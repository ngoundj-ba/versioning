#include <stdio.h>
int main(){
    int x,n,somme=0,cpt=0;
    float moy;
    do{
        printf("saisir un entier  entier ");
        scanf("%d",&n);
    }while(n<0);
    printf("le nombre que tu as saisie est %d",x);
    for (int i=0;i<n;i++){
        do{
            puts("veuillez saisir un entier negatif");
            scanf("%d",&x);
        }while(x>0);
        printf("le nombre que tu as saisi est %d",x);
        if(x%2==0){
            somme+=x;
            cpt++;
        }
    }
    moy=somme/cpt;
}
