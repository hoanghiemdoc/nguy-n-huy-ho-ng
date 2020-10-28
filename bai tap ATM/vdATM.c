#include <stdio.h>
int main ()
{
	printf("welcom to hoang's' bank");
	int mathe, mapin;
	printf("\nnhap ma the");
	scanf("%d", &mathe);
	printf("\nnhap ma pin");
	scanf("%d", &mapin);
    
    if (mathe == 6666 && mapin == 1234)
    {
    	 int a;
    	printf("nhap lua chon cua ban:\n1.Rut tien\n2.chuyen khoan.n3\kiem tra so du.n4\ket thuc chuong trinh\n");
    	scanf("%d", &a);
    	if (a ==3)
    	 {
    	 	int sodu =400;
    	 	printf("so du cua ban la:%d", sodu);
    	 }
    	 else if (a==1)
    	 {
    	 	int sotien;
    	 	printf("nhap so tien ban muon rut");
    	 	scanf("%d", &sotien);
    	 	if (sotien%40==0 && sotien<300)
    	 	{
    	 		char ans = 'y';
    	 		printf("giao dich nay mat phi ban co muon tiep tuc: (yes or no)");
    	 		fflush(stdin);
    	 		scanf ("%c", &ans);
    	 		int tienphi = 4;
    	 		int sodu = 400;
    	 		if (ans == 'y')
    	 		{
    	 			printf("so du con lai la:%d", sodu-sotien-tienphi);
    	 			
				 }
				 else
				 printf("ban can nhap so tien la boi cua 50 va nho hon 300 trieu");
    	 		
			 }
			 else if (a ==2)
			 {
			 	int stk;
			 	printf("so tai khoan nguoi nhan");
			 	scanf("%d", &stk);
			 	if (stk=400)
			 	{
			 		int sodu = 400;
			 		int tienchuyen;
			 		printf("so tien muon chuyen");
			 		scanf("%d", &tienchuyen);
			 		if (tien chuyen <=400)
			 		{
					 printf("so du con lai cua ban la:%d", sodu-tienchuyen);
			 	}
				 else
				 printf("ban can chuyen so tien nho hon 400 trieu");
			   }
		  	    else
			       printf("tai khoan khong dung");
			   }
			   else if (a ==4)
			   {
			   	printf ("hoan tat chuong trinh");
			   }
			   else
			    printf("ma pin hoac ma the  khong dung");
			       
			 
			 
			 	
			 }
			 return 0;
		 }
    	
    	
    

