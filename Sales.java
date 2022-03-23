import java.util.Scanner;

public class Sales
{
	
	public static void main(String[] args) 
	{
		
		Scanner scan=new Scanner(System.in);
		account[] cust=new account[100];
		
		int customerlimit=100,productslimit=100;
		int productcount=0,customercount=1;
		int productsno=0;
		float revenue=0;
		
		System.out.println("Enter the details of the purchase\n");
		
		for(int a=1;a<cust.length;a++)
		{
			cust[a]= new account(0,0);
		}
		for(int i=1;i<=customerlimit;i++)
		{
		   System.out.println("Enter time of the purchase-");
		   cust[i].time=scan.nextFloat();
		   
		   System.out.println("Enter the price of the products");
		   System.out.println("(Enter the price as 0 to total)");
		   
		   for(int j=1;j<productslimit;j++)
		   {
			   productslimit=100;
			   productcount=0;
			   
			   System.out.println("Price of product"+j);
			   cust[i].price[j]=scan.nextFloat();
			   
			   productcount++;
			   
			   if(cust[i].price[j]==0)
			   {
				  productslimit=productcount+1; 
			   }
			   if(cust[i].price[j]!=0)
			   {
			   productsno++; 
			   }
		   }
		   		
			   for(int k=1;k<=productsno;k++)
			   {
				  cust[i].total=cust[i].total+cust[i].price[k]; 
			   }
			   
			   System.out.println("Total="+cust[i].total);
			   
			   customercount=+1;
			   
			   int z=0;
			   
			   System.out.println("\nEnter 1 if you want to end the sales");
			   z=scan.nextInt();
			   
			   if(z==1)
			   {
			   customerlimit=customercount;
			   }      
		}
		System.out.println("\nTotal no of products sold in this sales: "+productsno);
		
		for(int y=1;y<=customercount+1;y++)
		{
			revenue=revenue+cust[y].total;
		}
		
		System.out.println("\nTotal revenue made in this sales is: "+revenue);
	}

}

class account
{
	public float price[]=new float[100],total=0,time=0;
	{	
		
	for(int a=1;a<price.length;a++)
	{
		price[a]=0;
	}
	}
	account(float total,float time)
	{
		this.time=time;
		this.total=total;
	}
}