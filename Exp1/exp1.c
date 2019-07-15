#include<stdio.h>
int main(){
	int i,j;
	char str[i];
	printf("Enter length of string: ");
	scanf("%d",&i);
	printf("Enter the string:  ");
	scanf("%s",&str[i]);
	for(j=str[0];j<=i;str[i]++){
		if(str[i]=='a'||str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='e'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='i'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='o'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='u'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z'){
			printf("char-->%s",str[i]);
		}
		else if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'){
			printf("integer-->%s",str[i]);
		}
	}
	return 0;
}
