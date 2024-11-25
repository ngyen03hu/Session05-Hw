#include<stdio.h>

int main (){
	int thang;
	
	printf("Moi ban nhap vao thang ");
	scanf ("%d",&thang);
	
	
	
	switch(thang) {
    	case 1:case 3 :case 5 :case 7 :case 8 :case 10 :case 12:
            printf(" co 31 ngay ");
        break; 
	    case 4 : case 6 : case 9:  case 11 :
	       printf("co  30 ngay ");
	    break;
	    case 2:
           printf(" co  29 ngay ");
	    break;
	default:
	     printf(" so thang khong hop le . ");
	     break;	 	 
	}

	return 0; 
}
