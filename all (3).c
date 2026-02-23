#include <stdio.h>

int main() {
	int choice;
	float a,b;
	printf("enter two numbers:\n");
	scanf("%f %f",&a,&b);
	
	printf("choose operation\n");
	printf("1.arithematic operation\n");
	printf("2.assignment operators\n");
	printf("3.relational opertors\n");
	printf("4.logical operators\n");
	scanf("%d",&choice);
	
	switch(choice){
	    
	    case 1:
	    printf("arithematic operators\n");
	    printf("addition:%.2f\n",a+b);
	    printf("subraction:%.2f\n",a-b);
	    printf("division:%.2f\n",a/b);
	    printf("multiplication:%.2f\n",a*b);
	    break;
	    
	    case 2:
	    printf("assignment operators\n");
	    a+=b;
	    printf("a+=b %.2f\n",a);
	    a-=b;
	    printf("a-=b %.2f\n",a);
	    break;
	    
	    case 3:
	    printf("relational operators\n");
	    printf("a==b %d\n",a==b);
	    printf("a!=b %d\n",a!=b);
	    printf("a>=b %d\n",a>=b);
	    printf("a<=b %d\n",a<=b);
	    printf("a<b %d\n",a<b);
	    printf("a>b %d\n",a>b);
	    break;
	    
	    case 4:
	    printf("logical operators");
	    printf("a>0 && b>0 %d\n",(a>0 && b>0));
	    printf("a>0 || b>0 %d\n",(a>0 || b>0));
	    break;
	    
	    default:
	       printf("invalid");
	    
	    
	    
	    
	    
	    
	}
	
	
    

    

}

