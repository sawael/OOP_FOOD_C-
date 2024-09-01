#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;

fstream regdata;
fstream cou;
static   const char *name;
static int counts;

long int receipt();
void test(int, int, int a[],string dish[]);
void edit(int i,string dish[],int price[]);
void exit(){
    exit(0);}


void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

class restaurant{
	protected:
	int totalstock;
	int employees;
	float stockcost;
	float totalcash;
 	public:
		int n,n1,b;
		restaurant(){
		totalstock=50;
		employees=50;
		stockcost=15.76;	
		totalcash=1000.50;
		}
		int price[20];
		string dish[20];
		int i;
		int t;
		
		virtual void show()=0;
		
	void set_totalcash(float cash){
		totalcash=cash;
	}
	void get_totalcash(){
		cout<<"Total cash in the vault: "<<totalcash<<endl;
	}
		public:
	void fire(){
		cout<<"Welcome to Fire's dessert'.\nKindly select your desired option.\n[1]:EXCLUSIVIE DESSERTSS\n[2]:CAKES \n[3]:CUPCAKE \n->";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                          \tEXCLUSIVE DESSERT\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Creme Brulee\nL.E 90\n\n[2]:Nutella Sundae\nL.E 50\n\n[3]:Red Velvet Sundae\nLE 60\n\n[4]:Summer Berry Grunt\nL.E 80 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER \n->"	;
		    cin>>n1;
		    int a[]={90,50,60,80};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Creme Brulee";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
				dish[i]="Nutella Sundae";
				i+=1;
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
				dish[i]="Red Velvet Sundae";
				i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
				dish[i]="Summer Berry Grunt";
				i+=1;
			}
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                            CAKES\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Cadbury Dairy Milk\t\nL.E 250\n\n[2]:Mousse Cake\nL.E 200\n\n[3]:Maltesers\nL.E 200\n\n[4]:Belgian Chocolate Cake\n L.E 230\n\n[5]:Chocolate Heaven\n LE 250\n\n[6]:Kit Kat Cake\n L.E 210";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		  int a[]={250,200,200,230,250,210};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Cadbury Dairy Milk";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="MouseCake";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Maltesers";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Belgian Chocolate Cake";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Chocolate Heaven";
		    	i+=1;
			}
			else if(n1==6)
			{
				price[i]=a[5];
				t+=a[5];
		    	dish[i]="KitKat Cake";
		    	i+=1;
			}
		 }     
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tCUPCAKES       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Classic Chocolate\nL.E 120\n\n[2]:Cream Cheese\nL.E 110\n\n[3]:Original Malt\nL.E 120\n\n[4]:Salted Caramel\n L.E 100\n\n[5]:Belgian Malt\n LE 150";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		    		  int a[]={120,110,120,100,150};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Classic Chocolate";
		    	i+=1;
		    
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Cream Cheese";
		    	i+=1;
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Original Malt";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Original Caramel";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Belgian Malt";
		    	i+=1;
			}
		
	}		int q;
		
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items\n->";
		cin>>q;
		
		if(q==1)
		{
			restaurant::fire();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"L.E"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)\n->";
		cin>>l;
		while(l=='y'||l=='Y'){ 
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)\n->";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill \n->";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::fire();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}
}
	
	void hells()
	{
		cout<<"welcome to Hell's Kitchen resturant.\nKindly select your desired option.\n[1]:EXCLUSIVIE DISCOUNT DEALS\n[2]VEG DEALS \n[3]BAR \n[4]FAST FOOD\n";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tEXCLUSIVE DEALS\n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]DEAL 1: Zinger with 250 ml softdrink\ntL.E 120\n\n[2]DEAL2:Zinger, chicken piece, fries and softdrink\ntL.E 150\n\n[3] DEAL 3: 2 Zinger, fries and 500ml softdrink\nLE 200 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER\n ->"	;
		    cin>>n1;
			int a[]={120,140,200};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Deal 1";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Deal 2";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Deal 3";
		    	i+=1;
}
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST DEALS\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Egg Sandwich with Spread Cheese with coffee\t\nL.E 130\n\n[2]:Chicken Mayo Garlic Wrap With Coffe\nL.E 110\n\n[3]:Falafel Wrap With Coffee\nL.E 90\n\n[4]:Chicken Strip Wrap With Coffee\n L.E 170\n\n[5]:Chicken Kabab Wrap With Coffee\n LE 150";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		    		  int a[]={130,110,90,170,150};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Egg Sandwich";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Cicken Mayo Garlic Wrap";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Falafel Wrap";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Chicken strips wrap";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Chicken Kabab Wrap";
		    	i+=1;
			}
		 }     
	    if(n==3){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tBARBEQUE  DEALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Beef Tikka\t\nL.E 160\n\n[2]:Beef Seekh Kabab\nL.E 110\n\n[3]:Chicken Seekh Kabba\nL.E 100\n\n[4]:Grilled Chicken With 300 ml Spiro Spathis\n L.E 200\n\n[5]:Chicken Tikka With 300 ml Spiro Spathis\n LE 180";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		    		  int a[]={160,110,100,200,180};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Beef Tikka";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Beef Seekh Kebab";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Chicken Seekh Kebab";
		    	i+=1;
			
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Grilled Chicken";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Chicken Tikka";
		    	i+=1;
			}
		
		}
		if(n==4){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tFASTFOOD  DEALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:4 Zing burgers, 4 regular fries & 1.5 litre soft drink\nL.E 600\n\n[2]:4 GMC burgers, 4 regular fries & 1.5 litre soft drink\nL.E 510\n\n[3]:3 Breast Pieces with regular fries & hot garlic mayo sauce\nL.E 200\n\n[4]:Beef Zinger Burger With 300 ml Spiro Spathis\n L.E 210\n\n[5]:Grilled Chicken Burger With 300 ml Spiro Spathis\n LE 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY \n->"	;
		    cin>>n1;
				  int a[]={600,510,200,210,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="4 Zing burgers Deal";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="4 GMC Burger Deal";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="3 Chicken Breast Pieces Deal";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Beef Zinger Burger Deal";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Grilled Chicken Deal";
		    	i+=1;
			}
		}
				int q;
		
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items\n->";
		cin>>q;
		
		if(q==1)
		{
			restaurant::hells();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"L.E"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)\n->";
		cin>>l;
		while(l=='y'||l=='Y'){
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)\n->";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill \n->";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::hells();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}
		}
		void kebab(){
			cout<<"welcome to Kabab House.\nKindly select your desired option.\n[1]:KK SPECIALITIES\n[2]:BBQ DISHES \n[3]:KATAKAT SPECIALITES \n[4]:BEVERAGES\n";
		cin>>n;
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tKK SPECIALITIES\n----------------------------------------------------------------------------------------------";
			cout<< "\n[1]:KABAB MIX PLATE\nL.E 600\n\n[2]:KABAB MASALA\nL.E 320\n\n[3]:KEBBDA MASALA\nLE 280\n\n[4]:CHICKEN MASALA\n L.E 250 \n\n[5]:KAPOORA MASALA WITH BUTTER \nL.E 240 ";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER \n->"	;
		    cin>>n1;
		    		  int a[]={600,320,280,250,240};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	
		    	dish[i]="Kabab Mix Plate";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Kabab Masala";
		    	i+=1; 
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Kebda Masala";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Chicken Masala";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Kapoora Masala With Butter";
		    	i+=1;
			}
		}
		if(n==3){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBBQ DISHES\n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:HOUSE SPECIAL KABAB BEEF\t\nL.E 260\n\n[2]:KEBDA\nL.E 120\n\n[3]:CHICKEN SHESH\nL.E 180\n\n[4]:REYASH\n L.E 400\n\n[5]:KABAB WRAP \n LE 250";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		    		  int a[]={260,120,180,400,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="House's Special";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Kebda";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Chicken Shesh";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Reyash";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Kebab Wrap";
		    	i+=1;
			}
		 }     
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           BEVERAGESS \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Spiro Spathis\t\nL.E 15\n\n[2]:Pepsi\nL.E 15\n\n[3]:Cola\nL.E 15\n\n[4]:Cola diet\n L.E 15\n\n[5]:Mineral water\n LE 10";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		     int a[]={15,15,15,15,10};
		    if(n1==1){
		    price[i]=a[0];
		    t+=a[0];
		    dish[i]="Spiro Spathis";
		    i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Pepsi";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Cola";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Cola Diet";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Mineral Water";
		    	i+=1;
			}
		
		}
		if(n==1){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tKARHAI  SPECIALS\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Mashwyat Family\nL.E 600\n\n[2]:Red Sauce Pasta\nL.E 120\n\n[3]:3White Sauce Pasta\nL.E 100\n\n[4]:Beef Biryani\nL.E 370\n\n[5]:Butter Chicken\n LE 250";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n-> "	;
		    cin>>n1;
		    		  int a[]={600,120,100,370,250};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Mashwyat Family";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Red Sauce Pasta";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="White Sauce Pasta";
		    	i+=1;
			
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Beef Beryani";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Butter Chicken";
		    	i+=1;
			}
		
		}		int q;
		
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items\n->";
		cin>>q;
		
		if(q==1)
		{
			restaurant::kebab();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"L.E"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)\n->";
		cin>>l;
		while(l=='y'||l=='Y'){
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)\n->";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill \n->";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::kebab();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}}
		
	void stonegloves(){
		cout<<"welcome to STONE GLOVES resturant.\nKindly select your desired option.\n[1]:BREAKFAST \n[2]:STARTELE \n[3]:PIZZA \n[4]:DESSERT\n[5]:MAIN COURSE\n->";
		cin>>n;
		if(n==1){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tBREAKFAST      \n----------------------------------------------------------------------------------------------";
			cout<<"\n[1]:Cheese & Mushroom Omelette\ntL.E 60\n\n[2]:Egyptian Omelette\ntL.E 40\n\n[3]:Breakfast Burrito\nLE 80 \n\n[4]:STONE GLOVES'S SPECIAL OMELETE\n\nL.E 120";
		    cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER \n->"	;
		    cin>>n1;
		    		  int a[]={60,40,80,120};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Cheese And Mushroom Omelette";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Egyptian Omelette";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Breakfast Buritto";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Special Omelette";
		    	i+=1;
			}
		
		}
		if(n==2){
			cout<<"----------------------------------------------------------------------------------------------\n                           \tSTARTERS      \n----------------------------------------------------------------------------------------------";
		   cout<<"\n[1]:Ceasar Salad\t\nL.E 90\n\n[2]:Chicken Strips\nL.E 90\n\n[3]:Drop Bites\nL.E 80\n\n[4]:Fries\n L.E 50\n\n[5]:Fries with Dip\n LE 65";
           cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		    		  int a[]={60,90,80,50,65};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Ceasar Salad";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Chicken Strips";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Drop Bites";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Fries";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Fries with Dip";
		    	i+=1;
			}
		 }     
	    if(n==4){
	    	cout<<"----------------------------------------------------------------------------------------------\n                           \tDESSERTS       \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Chocolate Decadence Cake Slice\t\nL.E 70\n\n[2]:Chocolate Malt Cake Slice\nL.E 70\n\n[3]:Chocolate Heaven Cake Slice\nL.E 70\n\n[4]:Red Velvet Cake Slice\n L.E 70\n\n[5]:New York Cheese Cake\n LE 70";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY\n->"	;
		    cin>>n1;
		    		  int a[]={70,70,70,70,70};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Chocolate Decadence";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Chocolate Malt Cake";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Chocolate Heaven";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Red Velvet Cake";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Newyork CheeseCake";
		    	i+=1;
			}
		
		}
		if(n==5){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tMAIN    COURSE\n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Grilled Chicken Sandwich\nL.E 100\n\n[2]:Penne Arrabiata\nL.E 90\n\n[3]:Fettuccine Alfredo\nL.E 120\n\n[4]:Classic Beef Burger\n L.E 120\n\n[5]:Chicken Mushroom Burger\n LE 160";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY \n->"	;
		    cin>>n1;
		    		  int a[]={100,90,120,120,160};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Grilled Chicken Sandwich";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Penne Arrabiata";
		    	i+=1;
				
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Fetuccinne Alfredo";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Classic Beef Burger";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="Mushroom Burger";
		    	i+=1;
			}
		
		}
		if(n==3){
				cout<<"----------------------------------------------------------------------------------------------\n                           \tPIZZAS        \n----------------------------------------------------------------------------------------------";
		    cout<<"\n[1]:Margherita\nL.E 90\n\n[2]:Chicken Tikka\nL.E 130\n\n[3]:Hot & Spicy\nL.E 100\n\n[4]:Pepperoni\n L.E 120\n\n[5]:SeaFood Pizza\n LE 180";
		   cout<<"\n\nTO SELECT YOUR DESIRED DEAL ENTER THE KEY \n->"	;
		    cin>>n1;
				  int a[]={90,130,100,120,180};
		    if(n1==1){
		    	price[i]=a[0];
		    	t+=a[0];
		    	dish[i]="Margherita";
		    	i+=1;
			}
			else if(n1==2)
			{
				price[i]=a[1];
				t+=a[1];
		    	dish[i]="Chicken Tikka";
		    	i+=1;	
			}
			else if(n1==3){
				price[i]=a[2];
				t+=a[2];
		    	dish[i]="Hot and Spicy";
		    	i+=1;
			}
			else if(n1==4)
			{
				price[i]=a[3];
				t+=a[3];
		    	dish[i]="Pepperoni";
		    	i+=1;
			}
			else if(n1==5){
				price[i]=a[4];
				t+=a[4];
		    	dish[i]="SeaFood Pizza";
		    	i+=1;
			}
		}
		int q;
		
		cout<<"Please Select the desired option:\n[1]Add More Item \n[2]Move To Bill\n[3]display your items\n->";
		cin>>q;
		
		if(q==1)
		{
			restaurant::stonegloves();
		
		}
		else if(q==2)
		{
			test(t,i,price,dish);
		}
		else if(q==3){
		char l;
		for(int j=0;j<i;j ++)
		
			cout<<"["<<j+1<<"] :"<<dish[j]<<"\n"<<"L.E"<<price[j]<<"\n\n";
		cout<<"do you want to delete an item? (Y/N)\n->";
		cin>>l;
		while(l=='y'||l=='Y'){
		{

			
	
			edit(i,dish,price);
			i--;
			cout<<"do you want to delete an item? (Y/N)\n->";
				cin>>l;
		
		if(l=='n'||l=='N')
		{
			break;
		}
			}
			}
			
				cout<<"Please Select the desired option again:\n[1]Add More Item \n[2]Move To Bill \n->";
			
				cin>>q;
								
		if(q==1)
		{
			restaurant::stonegloves();
		}
		else if(q==2)
		{
		test(t,i,price,dish);
		}
		

		
			
}}};


long int receipt(){

long int receipt=rand()%1000+1;
			return receipt;
}


class bill:public restaurant{
	public:
		int j;
		int total;
		
	public:
		void show(){cout<<"nothing";
		}
		bill(){
		}
		int operator+(int z)
		{
			return this->total+z;
		}
		
		void displaybill(int t,int i,int price[],string dish[])
		{
			
			cout<<"\n\t\t\t------------------------------------------------";
			cout<<"\n\t\t\t------------------Emla-Kershak---------------------";
			cout<<"\n\t\t\t--------------Customer Receipt:"<<receipt()<<"----------------";
			cout<<"\n\t\t\tITEM:\t\t\t\tAMOUNT:\n";
			for(int j=0;j<i;j++)
			{
				cout<<endl<<"\t\t\tITEM "<<j+1<<": "<<dish[j]<<"\t\t\t"<<price[j];
				total=total+price[j];
			}
			cout<<"\n--------------------------------------------------";
			cout<<endl<<"QUANTITY \t\t\t\t"<<i<<endl;
			cout<<endl<<"TOTAL\t\t\t\t"<<t<<endl;
			regdata.open(name,ios::out|ios::app);
			regdata<<"\t\t\tBill Info\t"<<"Receipt:\t"<<receipt()<<endl;
			regdata<<"\t\tItems=\t"<<i<<"\t\tTotal purchase value=\t"<<t<<endl;
			regdata.close();	
		}
		void rider(int t)
		{
			srand(time(NULL));
			string guy[]={"Arkam","Hassan","Ali","Mohamed","Ahmed","Emad","Sayed","Ramy","Tariq","Khalid","Mostafa"};
			int index=rand()%7;
			cout<<"\n\t\t\t\tThank you for choosing Emla-Kershak!\n";
			cout<<"\n\t\t\t\tPlease take notes the details provided below: \n";
			cout<<"\n\t\t\t\tReciept Number: "<<receipt()<<endl;
			cout<<"\n\t\t\t\tRider Name: "<<guy[index]<<endl;
			cout<<"\n\t\t\t\tRider Contact: 01200012301"<<endl;
			cout<<"\n\t\t\t\tTotal Amount: "<<t<<endl;
			cout<<"\n\t\t\t\tMode Of Payment: Cash On Delivery"<<endl;
			cout<<"\n\t\t\t\tDelivery Time: 45-60 minutes"<<endl;
			}
	void feedback()
{
	
	int d;
	string str;
    
	cout<<"Do you wish to provide feedback: \n[1]Yes\n[2]No\n->";
	cin>>d;
	if(d==2)
	{
		cout<<"Emla-Kershak wishes you a happy dinner! Thank You!\n";
		exit();
	}
	else if(d==1)
	{
		cout<<"Team Emla-Kershak will not take much of your time. Please answer the following questions: \n";
		cout<<"\nWas Emla-Kershak website user friendly enough? If no please explain.\n->";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the food upto mark? If no please explain.\n->";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the customer service helpful? If no please explain.\n->";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Was the delivery quick enough? If no please explain.\n->";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Would you choose Emla-Kershak again for ordering food? If no please explain.\n->";
		getline(cin,str);
		regdata<<endl<<str;
	
		cout<<"Please add further comments or suggestions: \n->";
		getline(cin,str);
		regdata<<endl<<str;
		cout<<"Thank You for providing us with feedback. It is now stored in the Emla-Kershak database for future consideration.\n\t\t\t\t Happy Eating! \n";
		regdata.close();
		exit();
	}
}	
};


void edit(int i,string dish[],int price[]){
	int pos;
		
					
				
			cout<<"select the item you want to delete\n->";
			cin>>pos;
			
   if(pos>i)
   {
   cout<<"\n\nThis value is out of range: select again\n->";
   cin>>pos;
   
   }
   else
   {
   --pos;
   for(int k=pos;k<i;k++)
   {
    dish[k]=dish[k+1];
    price[k]=price[k+1];
   }
   cout<<"\n\nNew items in your cart: ";
   for(int k=0;k<i-1;k++)
   {
   cout<<"\n"<<dish[k]<<"\t"<<"L.E"<<price[k]<<"\n\n";
  	
				}
			}
		}

		
		
		

void test(int t, int i,int a[],string dish[]){
	bill b;
	b.displaybill(t,i,a,dish);
    
	b.rider(t);
	b.feedback();
	
}



class admin:public restaurant{
	private:
	string aid;
	string apass;
	public:
	admin(){
	apass="1234";
	aid="admin";
	}
	void show(){
		cout<<"just for formality";
	}
bool login(string ai,string pa){
	if(ai=="admin" && pa=="1234"){	
	}
	}
void control_panel(){
	mark:
    
	cout<<endl<<"-------------------------------------------------------------"<<endl;
	cout<<"1:for editing stocks"<<endl<<"2:for checking stocks"<<endl;
	cout<<"3:for editing employee number"<<endl<<"4:for checking total employees"<<endl;
	cout<<"5: for checking total revenue\n ->";
	cout<<endl;
	int v;
	cin>>v;
	if(v==1){
	int tst;
	cout<<endl<<"Enter the total number of stock that you want to set= \n ->"<<endl;
	cin>>tst;
	set_tstock(tst);
	admin::get_tstock();
	goto mark;
}
else if(v==2){
	get_tstock();
	goto mark;
}
else if(v==3){
	cout<<endl<<"Enter the updated amount of employees, current employees are= \n ->"<<endl;
	int en;
	cin>>en;
	set_enumb(en);
	goto mark;
}
else if(v==4){
	cout<<endl<<"Current employeees are"<<endl;
	get_enumb();
	goto mark;
}
else if(v==5){
	get_totalcash();
	goto mark;
}
}

	void set_tstock(int tst){
		totalstock=totalstock+tst;
	}
	void get_tstock(){
		cout<<"Total stock of the restaurant="<<totalstock;
	}	
	
	void set_enumb(int en){
		employees=en;
	}
	void get_enumb(){
		cout<<"Total employees of the restaurant ="<<employees;
	}

};


class customer: protected restaurant{
	protected:
		string email_id,emailid,emaiid;
		string pass,pw,password;
		string pass2;
		
		int choice;
		string add;
		int n;
		string n1;
		
	public:
		void menu(){
			
			cout<<"Enter area you wish to have food delivered to: \n->";
			cin>>add;
			cout<<"redirecting..";
			delay(400);
			
			cout<<"Please wait while we locate restaurants in "<<add<<endl;
			delay(800);
			
			cout<<"\n\n\n\n\t\t\t\t\tLOADING";
			cout<<"\n\n\n\n\t\t\t\t\t";
			for(int v=0;v<12;v++)
			{
				delay(400);
			}
			
			cout<<"\nRestaurants found in "<<add<<"! Please choose your desired restaurant to view their menu: \n";
			cout<<"[1]HELL'S KITCHEN\n";
			cout<<"[2]FIRE DESSERTS\n";
			cout<<"[3]HOUSE OF KEBABS\n";
			cout<<"[4]STONE GLOVES (HIGHLY RECOMMENDED)\n->";
			cin>>n;
			if(n==1)
			{
				
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
		      	
		      	i=0;
		      	t-0;
			
			//	cout<<"Welcome to HELL'S KITCHEN!\n";
		         restaurant::hells(); 	
			}
			
			else if(n==2)
			{
				
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
			    
			    i=0;
			    t=0;
			
				//cout<<"Welcome to FIRE DESSERTS!\n";
			     restaurant::fire();
			}
			else if(n==3)
			{
				
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
			    
			    i=0;
			    t=0;
			
			//	cout<<"Welcome to HOUSE OF KEBAB!\n";
			restaurant::kebab();
			}
			else if(n==4)
			{
				
			    cout<<"Redireting you to your chosen restaurant!Please wait..";
			    delay(1000);
			    
			    i=0;
			    t=0;
			
			}
				//cout<<"Welcome to STONE GLOVES!\n";
			restaurant::stonegloves();
			}	
		
		void show(){cout<<"same";}
		void SignIn(){
			string emaiid,p;
			
			cout<<"Enter username or email address: \n->";
			cin>>email_id;
			cout<<"Enter password: \n->";
			cin>>pass;
			regdata.open(name,ios::in);
			regdata.seekg(0,ios::beg);
			while(!regdata.eof()){
				getline(regdata,emaiid);
				getline(regdata,pw);
				regdata.close();
			if((email_id==emaiid) && (pass==pw)){
				
				customer::menu();
				
			}
			
			
			else
			{
			   	cout<<"\nAccess Denied!Do you wish to try again?\n[1]YES\n[2]NO\n->";
			
				cin>>choice;
				if(choice==1)
				{
					
					cout<<"Redirecting back to login page.. Please Wait!\n";
					
					customer::SignIn();
				}
				else if(choice==2)
				{
					exit();
				}
			}
			regdata.close();}
		}
		void SignUp()
		{
			
	int ph;
			cout<<"Enter your email address: \n->";
			cin>>emailid;
			cout<<"enter phone number: \n->";
			cin>>ph;
			cout<<"Enter a strong password: \n->";
			cin>>password;
			cout<<"Enter a strong password again: \n->";
			cin>>pass2;
			if(password==pass2)
			{	regdata.open(name,ios::app);
			regdata<<emailid<<"\n"<<password<<"\n";
				regdata.close();
				cout<<"Your Sign Up was successful! Emla-Kershak will send you regular notifications with our weekly deals. Thank You!\n";
				cout<<"Do you want to place an order? press 1\n->";
				int A;
				cin>>A;
				if (A==1){
				
				customer::SignIn();}
			}
		else if (pw!=pass)
			{
				cout<<"Passowrds do not match!Please Try again.\n->";
				cin>>pass2;
				
			}
			cout<<"Your Sign Up was successful! Emla-Kershak will send you regular notifications with our weekly deals. Thank You!\n";
			cout<<"do you want to place an order? press 1\n->";
				customer::SignIn();

		}
		void start()
		{char n[20];
			
			cout<<"\nWelcome to Emla-Kershak!\n";
			cout<<"Please enter your name for referencing purposes: \n->";
			cin>>n;
			name=n;
			
			cout<<"Thank You "<<name<<" for choosing Emla-Kershak!\n";
			cout<<"Choose the appropriate option: \n [1] Sign Up\n [2]Sign In\n->";
			cin>>choice;
			if(choice==1)
			{
				customer::SignUp();
			}
			else if(choice==2)
			{
				customer::SignIn();
			}
		}
};


class choice{
	public:	
	choice(){
	admin ad;
	int acc;
	
	cout<<"\n\t\t\t\t\t\t\tFOOD ORDERING SYSTEM\n";
	cout<<"\t\t\t\t\t\t\t\t(Emla-Kershak)\n";
	cout<<"PRESENTED BY:\n{ Al-Saaeed Wael (412300177) SEC-1 }\n\n\n";
	delay(300);
    
cout<<"\n\t\t\t\t-(Emla-Kershak)-"<<endl<<endl;
cout<<"\t\t\t\tEnter your choice"<<endl;
cout<<"\t\t\t\t1: Customer Access"<<endl;
cout<<"\t\t\t\t2: Admin access"<<endl;
cout<<"\t\t\t\t3: Return back\n"<<endl<<endl<<"->";
LOOP:cin>>acc;
if(acc==2){
cout<<endl<<endl<<"\n\t\t\t\tEnter ID:\n\t\t\t\t->";
string id,pass;
cin>>id;
cout<<"\n\t\t\t\tPASSWORD:\n\t\t\t\t->";
cin>>pass;
if(ad.login(id,pass)==1){
	cout<<"login successful"<<endl;
	ad.control_panel();
}
else{

	cout<<"ERROR-Authorisation Required"<<endl<<endl<<endl;
	cout<<"Try again? 1 for YES\n"<<endl<<"->";
	int lo;
	cin>>lo;
	if(lo==1){
		cout<<"Enter the choice again\n"<<endl<<"->";
	goto LOOP;
}
else{
	cout<<"Thanks for visiting Emla-Kershak page"<<endl;
}
}
}
else if(acc==1){
		customer obj;
	obj.start();
}
else if(acc==3){
	cout<<"Thanks for visitng Emla-Kershak page"<<endl;
}
}
};

int main(){

choice ch;
}
