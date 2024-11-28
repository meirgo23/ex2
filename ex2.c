#include <stdio.h>

int main() {
    int num;
	char c;
	while(1) {
    printf("Choose an option:\n");
	printf("	1. Happy Face\n");
	printf("	2. Balanced Number\n");
	printf("	3. Generous Number\n");
	printf("	4. Circle Of Joy\n");
	printf("	5. Happy Numbers\n");
	printf("	6. Festival Of Laughter\n");
	printf("	7. Exit\n");
	scanf("%d", &num);
	
	//ex1
	   if(num==1){
	    char e, n, m;
		int i;
        printf("Enter symbols for the eyes, nose, and mouth:\n");
        scanf(" %c %c %c", &e, &n, &m);
		printf("Enter face size:\n");
		scanf(" %d",&i);
		while(i<=0||i%2==0){
			printf("The face's size must be an odd and positive number, please try again:\n");
			scanf(" %d", &i);
			scanf("%*[^\n]%*c");
		}
		printf("%c", e);
		for(int j=0;j<i;j++){
			printf(" ");
		}
		printf("%c", e);
		printf("\n", i);
	
	    int z;
	    z=(i + 1) / 2;

	    for(int y = 0; y < z; y++){
		  printf(" ");
	    }
    	printf("%c", n);
	    for(int y = 0; y < z; y++){
	      printf(" ");
    	}
    	printf("\n", z);
	    printf("\\");
	    for(int f=0 ;f<i ;f++){
	    	printf("%c", m);
	    }
	    printf("/\n", i);
	    }
	    
	    //ex2
        else if(num==2){
	    int n, n1, i, d, side1=0, side2=0;
	    int lg=0;
	    printf("Enter a number:\n");
	    scanf(" %d", &n);
	    while(n<1){
	        printf("Only positive number is allowed, please try again:\n");
	        scanf(" %d", &n);
	    }
	    d=n;
	    n1=n;
	    while(d>0){
	            d=d/10;
	            lg++;
	        }
	    if((lg%2)==1){
	        lg=lg/2;
	        for(i=0;i<lg;i++){
	            side1=side1+(n%10);
	            n1=(n/10);
	        }
	        n1=n1/10;
	        for(i=0;i<lg;i++){
	            side2=side2+(n1%10);
	            n1=n1/10;
	        }
	        }else if(num==3){
	        lg=lg/2;
	        for(i=0;i<lg;i++){
	            side1=side1+(n1%10);
	            n1=n1/10;
	        }
	        for(i=0;i<lg;i++){
	            side2=side2+(n1%10);
	            n1=n1/10;
	        }
	        }
	        if(side1==side2)
	          printf("This number is balanced and brings harmony!\n");
	        else
	          printf("This number isn't balanced and destroys harmony.\n");
	     
	     //ex3
	   }else if (num==3){
	     int w, z;
	     printf("Enter a number:\n");
	     scanf(" %d", &w);
	     while(w<=0){
	         printf("Only positive number is allowed, please try again:\n");
	         scanf(" %d", &w);
	     }
	     int sumd=0;
	     for(int i=w; i>1; i--){
	         z=w/i;
	         if(w%z==0)
	            sumd=sumd+z;
	     }
	     if(sumd>w)
	       printf("This number is generous!\n");
	     else
	       printf("This number does not share.\n");
	}
	//ex4
	else if(num==4){
	    int w, count=0;
	    printf("Enter a number:\n");
	    scanf("%d", &w);
	    while(w<1){
	        printf("Only positive number is allowed, please try again:\n");
	        scanf("%d", &w);
	    }
	   for(int i=w-1; i>1; i--){
	       if(w%i==0)
	       count++;
	   }
	    
	   if(count==0&&w!=1)
	     printf("This number completes the circle of joy!\n");
	   else
	     printf("The circle remains incomplete.\n");
	    
	    //ex5
	}else if(num==5){
	    int n, number=0, digit, sum;
	    
	    printf("Enter a number:\n");
	    scanf("%d", &n);
	    while(n<1){
	      printf("Only positive number is allowed, please try again:\n");
	      scanf("%d", &n);
	    }
	    printf("Between 1 and %d only these numbers bring happiness: 1", n);
        for(int i=1; i<=n; i++){
         number=i;    
         while (number != 1 && number != 4) {
          sum = 0;
          while (number > 0) {
            digit = number % 10;         
            sum += digit * digit;       
            number /= 10;                
          }

         number = sum;
        }
          if(sum==1){
          printf(" %d", i);
         }
	    }
	    printf("\n");
	    }
	    
	    
	    //ex6
    else if(num==6){
      int smileNumber, cheerNumber, n = 0;

      printf("Enter a smile and cheer number:\n");

      while (1) {
        

        if (scanf(" smile: %d , cheer: %d", &smileNumber, &cheerNumber) == 2 &&
            smileNumber > 0 && cheerNumber > 0 && smileNumber != cheerNumber) {
            break;
        }

        printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
        scanf("%*[^\n]");
        scanf("%*c");
    }

    while (1) {
        printf("Enter maximum number for the festival:\n");

        if (scanf("%d", &n) == 1 && n > 0) {
            break;
        }

        printf("Only positive maximum number is allowed, please try again:\n");
        scanf("%*[^\n]");
        scanf("%*c");
    }

    for (int i = 1; i <= n; i++) {
        if (i % smileNumber == 0 && i % cheerNumber == 0) {
            printf("Festival!\n");
        } else if (i % smileNumber == 0) {
            printf("Smile!\n");
        } else if (i % cheerNumber == 0) {
            printf("Cheer!\n");
        } else {
            printf("%d\n", i);
        }
    }

   
    }
	
	//ex7
	else if(num==7){
		
	    printf("Thank you for your journey through Numeria!!");
	    break;
		
	} 

}
return 0;

}
