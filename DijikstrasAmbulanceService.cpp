using namespace std;
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<stdlib.h>
#include<conio.h>
int r=0,b=0,y=0,g=0;
class Patients;
class Admin    //Class which stores all the information of a hospital
{
	int c;
	int i;
	char name[50];
	char redregions[15][30];
	struct hospital
	{
		char name[50];
		char area[50];
		struct queue
		{
			int front;
			int rear;
			char ambNo[100][10];
		}q;
	}h[1000];
	
	public:
		
		Admin()
		{
			i=0;
			for(int j=0;j<1000;j++)
			{
				h[j].q.front=0;
				h[j].q.rear=-1;
		    }
		}
		friend void initialise();
		friend void newInputAdmin();	
		friend void displayAdmin();
		friend void AmbulanceServices();
		friend class Patients;
		friend void displayHospitals(char* area,int c);
};
Admin red;//Objects of the class admin representing different region of the city
Admin blue;
Admin green;
Admin yellow;
       void initialise(int c)
        {
        	char redregions[][30]={"Palur","Thakkolam","Arakkonam","Nagavedu","Nemili","Panapakkam","Kaveripakkam","Kalavai","Mambakkam","Thimiri","Walajapet","Ammur","Kondapalaiyam","Sholinghur"};
        	char blueregions[][30]={"Ponnai","Vallimalai","Katpadi","Paradram","Kavanur","Virinchipuram","Anaikattu","Kanniyambadu","Vallam","Kavanur","Villapakkam","Arcot","Ranipettai"};
			char yellowregions[][30]={"Gudiyattam","Sachiguntam","Pernampet","Melpatti","Kailasagiri","Ambur","Odugathu","Aganam","Madhanur","Pallikondam"};
			char greenregions[][30]={"Vaniyambadi","Alangayam","Kavalur","Mittur","Yellagiri hills","Jolarpettai","Tirupattur","Vishamangalam","Kanthili","Panchur"};
			if(c==1)
			{
				for(int i=0;i<14;i++)
	        	{
	        		cout<<"\n"<<i+1<<"."<<redregions[i];
	        	}
	        	cout<<endl;
	    	}
	    	if(c==2)
			{
				for(int i=0;i<13;i++)
	        	{
	        		cout<<"\n"<<i+1<<"."<<blueregions[i];
	        	}
	        	cout<<endl;
	    	}
	    	if(c==3)
			{
				for(int i=0;i<10;i++)
	        	{
	        		cout<<"\n"<<i+1<<"."<<yellowregions[i];
	        	}
	        	cout<<endl;
	    	}
			if(c==4)
			{
				for(int i=0;i<10;i++)
	        	{
	        		cout<<"\n"<<i+1<<"."<<greenregions[i];
	        	}
	        	cout<<endl;
	    	}
        }
        
		void newInputAdmin()
		{
			int c;
			char name1[50];
			cout<<"Enter colour code:\n1.Red\n2.Blue\n3.Yellow\n4.Green\n5.Exit\nYour choice:";
			cin>>c;
			system("cls");
			initialise(c);
			switch(c)
			{
				case 1:
						system("color 4f");
						cout<<"Enter area name:";
					    cin.ignore();
						cin.getline(red.h[r].area,50);
						cout<<"Enter hospital name:";
						cin.getline(red.h[r].name,50);
						r++;
						cout<<"You have successfully registered your hospital"<<endl;
	    		      	system("pause");
						system("cls");
						break;
				case 2:
						system("color 1f");
						cout<<"Enter area name:";
						cin.ignore();
						cin.getline(blue.h[b].area,50);
						cout<<"Enter hospital name:";
						cin.getline(blue.h[b].name,50);
						b++;
						cout<<"You have successfully registered your hospital"<<endl;
	    		      	system("pause");
						system("cls");
						break;
				case 3:	
						system("color e0");
						cout<<"Enter area name:";
						cin.ignore();
						cin.getline(yellow.h[y].area,50);
						cout<<"Enter hospital name:";
						cin.getline(yellow.h[y].name,50);
						y++;
						cout<<"You have successfully registered your hospital"<<endl;
	    		      	system("pause");
						system("cls");
						break;
				case 4:	
						system("color 2f");
						cout<<"Enter area name:";
						cin.ignore();
						cin.getline(green.h[g].area,50);
						cout<<"Enter hospital name:";
						cin.getline(green.h[g].name,50);
						g++;
						cout<<"You have successfully registered your hospital"<<endl;
	    		      	system("pause");
						system("cls");
						break;
				
			}
		}
		
		void displayAdmin()
		{
			int c,i;
		   do
		   {
			cout<<"Enter colour code:\n1.Red\n2.Blue\n3.Yellow\n4.Green\n5.Exit\nYour choice:";
			cin>>c;
			system("cls");
			switch(c)
			{
				case 1:
						for(i=0;i<r;i++)
						{	
							cout<<red.h[i].name;
							cout<<"\t"<<red.h[i].area;
							cout<<"\n";
						}
						break;
				case 2:
						
						for(i=0;i<b;i++)
						{	
							cout<<blue.h[i].name;
							cout<<"\t"<<blue.h[i].area;
							cout<<"\n";
						}
						break;
				case 3:	
						
						for(i=0;i<y;i++)
						{	
							cout<<yellow.h[i].name;
							cout<<"\t"<<yellow.h[i].area;
							cout<<"\n";
						}
						break;
				case 4:	
						
						for(i=0;i<g;i++)
						{	
							cout<<green.h[i].name;
							cout<<"\t"<<green.h[i].area;
							cout<<"\n";
						}
						break;
				
			}
	       }while(c!=5);
		}
		void AmbulanceServices()
		{
			int c,c1,n,a;
				cout<<"\nSelect your colour code: \n1.Red \n2.Blue \n3.Yellow \n4.Green \nYour choice: ";
				cin>>c;
				system("cls");
				switch(c)
				{
					case 1:
							 system("color 4f");
						     for(int i=0;i<r;i++)
						     {
						     	cout<<i+1<<". "<<red.h[i].name<<endl;
						     }
						     cout<<"\n Your Choice:";
						     cin>>n;
						     cout<<"\n1.Register your ambulance service \n2.New/Returning Ambulance \nYour choice: ";
						     cin>>c1;
						     system("cls");
						     switch(c1)
						     {
						     	case 1:
						     		    cout<<"\nEnter the number of ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>red.h[n-1].q.ambNo[++red.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
	    		      				    system("pause");
						     		    break;
						     	case 2:
						     			cout<<"\nEnter the number of new/returning ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>red.h[n-1].q.ambNo[++red.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
	    		      				    system("pause");
						        }
						     break;
					
					case 2:
							 system("color 1f");
						     for(int i=0;i<b;i++)
						     {
						     	cout<<i+1<<". "<<blue.h[i].name<<endl;
						     }
						     cout<<"\n Your Choice:";
						     cin>>n;
						     cout<<"\n1.Register your ambulance service \n2.New/Returning Ambulance \nYour choice: ";
						     cin>>c1;
						     system("cls");
							 switch(c1)
						     {
						     	case 1:
						     		    cout<<"\nEnter the number of ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>blue.h[n-1].q.ambNo[++blue.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
	    		      				    system("pause"); 
						     		    break;
						     	case 2:
						     			cout<<"\nEnter the number of new/returning ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>blue.h[n-1].q.ambNo[++blue.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
	    		      				    system("pause");
						     }
						     break;
					case 3:
							 system("color e0");
						     for(int i=0;i<y;i++)
						     {
						     	cout<<i+1<<". "<<yellow.h[i].name<<endl;
						     }
						     cout<<"\n Your Choice:";
						     cin>>n;
						     cout<<"\n1.Register your ambulance service \n2.New/Returning Ambulance \nYour choice: ";
						     cin>>c1;
						     system("cls"); 
							 switch(c1)
						     {
						     	case 1:
						     		    cout<<"\nEnter the number of ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>yellow.h[n-1].q.ambNo[++yellow.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
	    		      				    system("pause");
						     		    break;
						     	case 2:
						     			cout<<"\nEnter the number of new/returning ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>yellow.h[n-1].q.ambNo[++yellow.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
   	    		      				    system("pause");
						     }	     
						     break;
					case 4:
							 system("color 2f");
						     for(int i=0;i<g;i++)
						     {
						     	cout<<i+1<<". "<<green.h[i].name<<endl;
						     }
						     cout<<"\n Your Choice:";
						     cin>>n;
						     cout<<"\n1.Register your ambulance service \n2.New/Returning Ambulance \nYour choice: ";
						     cin>>c1;
						     system("cls"); 
						     switch(c1)
						     {
						     	case 1:
						     		    cout<<"\nEnter the number of ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>green.h[n-1].q.ambNo[++green.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
	    		      				    system("pause");
						     		    break;
						     	case 2:
						     			cout<<"\nEnter the number of new/returning ambulances: ";
						     		    cin>>a;
						     		    for(int i=0;i<a;i++)
						     		    {
						     		    	cout<<"\nEnter the ambulance number "<<i+1<<":";
						     		    	cin>>green.h[n-1].q.ambNo[++green.h[n-1].q.rear];
						     		    }
						     		    cout<<"\nYour ambulances have been registered successfully\n";
	    		      				    system("pause");
						     }
						  
				}
	
}
void displayHospitals(char* area,int c)
{
	char name[50];
	int j=1;
	if(c==1)
	{
		for(int i=0;i<r;i++)
		{
			if(strcmpi(area,red.h[i].area)==0)
			{
				cout<<j++<<". "<<red.h[i].name<<":15 minutes"<<endl;
				if(i>=1)
				cout<<j++<<". "<<red.h[i-1].name<<":30 minutes"<<endl;
				if(r!=i)
				cout<<j++<<". "<<red.h[i+1].name<<":30 minutes"<<endl;
				if(i>=2)
				cout<<j++<<". "<<red.h[i-2].name<<":45 minutes"<<endl;
				if(r!=i+1)
				cout<<j++<<". "<<red.h[i+2].name<<":45 minutes"<<endl;
				break;
			}
		}
		cout<<"Enter the name of the hospital:";
		cin.getline(name,50);
		for(int i=0;i<r;i++)
		{
			if(strcmpi(name,red.h[i].name)==0)
			{
				
				cout<<"\nAmbulance number "<<red.h[i].q.ambNo[red.h[i].q.front++]<<" will reach your address in the specified time\n";
			}
		}
	}
	if(c==2)
	{
		for(int i=0;i<b;i++)
		{
			if(strcmpi(area,blue.h[i].area)==0)
			{
				cout<<j++<<". "<<blue.h[i].name<<":15 minutes"<<endl;
				if(i>=1)
				cout<<j++<<". "<<blue.h[i-1].name<<":30 minutes"<<endl;
				if(b!=i)
				cout<<j++<<". "<<blue.h[i+1].name<<":30 minutes"<<endl;
				if(i>=2)
				cout<<j++<<". "<<blue.h[i-2].name<<":45 minutes"<<endl;
				if(b!=i+1)
				cout<<j++<<". "<<blue.h[i+2].name<<":45 minutes"<<endl;
				break;
			}
		}
		cout<<"Enter the name of the hospital:";
		cin.getline(name,50);
		for(int i=0;i<b;i++)
		{
			if(strcmpi(name,blue.h[i].name)==0)
			{
				
				cout<<"\nAmbulance number "<<blue.h[i].q.ambNo[blue.h[i].q.front++]<<" will reach your address in the specified time\n";
			
			}
		}
	}

	if(c==3)
	{
		for(int i=0;i<y;i++)
		{
			if(strcmpi(area,yellow.h[i].area)==0)
			{
				cout<<j++<<". "<<yellow.h[i].name<<":15 minutes"<<endl;
				if(i>=1)
				cout<<j++<<". "<<yellow.h[i-1].name<<":30 minutes"<<endl;
				if(y!=i)
				cout<<j++<<". "<<yellow.h[i+1].name<<":30 minutes"<<endl;
				if(i>=2)
				cout<<j++<<". "<<yellow.h[i-2].name<<":45 minutes"<<endl;
				if(y!=i+1)
				cout<<j++<<". "<<yellow.h[i+2].name<<":45 minutes"<<endl;
				break;
			}
		}
		cout<<"Enter the name of the hospital:";
		cin.getline(name,50);
		for(int i=0;i<y;i++)
		{
			if(strcmpi(name,yellow.h[i].name)==0)
			{
				
				cout<<"\nAmbulance number "<<yellow.h[i].q.ambNo[yellow.h[i].q.front++]<<" will reach your address in the specified time\n";
			
			}
		}
	}
	if(c==4)
	{
		for(int i=0;i<g;i++)
		{
			if(strcmpi(area,green.h[i].area)==0)
			{
				cout<<j++<<". "<<green.h[i].name<<":15 minutes"<<endl;
				if(i>=1)
				cout<<j++<<". "<<green.h[i-1].name<<":30 minutes"<<endl;
				if(g!=i)
				cout<<j++<<". "<<green.h[i+1].name<<":30 minutes"<<endl;
				if(i>=2)
				cout<<j++<<". "<<green.h[i-2].name<<":45 minutes"<<endl;
				if(g!=i+1)
				cout<<j++<<". "<<green.h[i+2].name<<":45 minutes"<<endl;
				break;
			}
		}
		cout<<"Enter the name of the hospital:";
		cin.getline(name,50);
		for(int i=0;i<g;i++)
		{
			if(strcmpi(name,green.h[i].name)==0)
			{
				
				cout<<"\nAmbulance number "<<green.h[i].q.ambNo[green.h[i].q.front++]<<" will reach your address in the specified time\n";
			
			}
		}
	}
}

class Patients//Class to take the information from the patient and display the ambulance at service to their location
{
	char pArea[15];
	char pAddress[100];
	char pName[30];
	char pNumber[10];
	public:
		void PatientInput()
		{   int c;
			cout<<"Enter colour code:\n1.Red\n2.Blue\n3.Yellow\n4.Green\n5.Exit\nYour choice:";
			cin>>c;
			system("cls");
			initialise(c);
			switch(c)
			{
				case 1:
					    system("color 4f");
						cout<<"\nEnter your details:";
						cout<<"\nArea: ";
						cin.getline(pArea,15);
						displayHospitals(pArea,c);
						cout<<"\nName: ";
						cin.getline(pName,30);
						cout<<"\nAddress: ";
						cin.getline(pAddress,100);
						cout<<"\nPhone Number: ";
						cin>>pNumber;
						break;
			   case 2:
			   	        system("color 1f");
						cout<<"\nEnter your details:";
						cout<<"\nArea: ";
						cin.getline(pArea,15);
						cout<<"\nName: ";
						cin.getline(pName,30);
						cout<<"\nAddress: ";
						cin.getline(pAddress,100);
						cout<<"\nPhone Number: ";
						cin>>pNumber;
				        break;
			   case 3:
			   	        system("color e0");
						cout<<"\nEnter your details:";
						cout<<"\nArea: ";
						cin.getline(pArea,15);
						cout<<"\nName: ";
						cin.getline(pName,30);
						cout<<"\nAddress: ";
					    cin.getline(pAddress,100);
						cout<<"\nPhone Number: ";
						cin>>pNumber;
			           	break;
			   case 4:
			   	        system("color 2f");
						cout<<"\nEnter your details:";
						cout<<"\nArea: ";
						cin.getline(pArea,15);
						cout<<"\nName: ";
						cin.getline(pName,30);
						cout<<"\nAddress: ";
						cin.getline(pAddress,100);
						cout<<"\nPhone Number: ";
						cin>>pNumber;
						
		    }
		}
	
};
int main()
{	
	Patients p;
	int c,c1;
	do
	{
		
		system("color f0");
		cout<<"\n\t\tWELCOME TO MEDILIFE HEALTHCARE SERVICES";
		getch();
		system("cls");
	    cout<<"\n1.Administrator \n2.Patient \n3.Exit \nYour choice: ";
	    cin>>c;
	    system("cls");
	    switch(c)
	    {
	    	case 1:
	    		      	cout<<"\n1.Register your hospital \n2.Ambulance service \n3.Exit \nYour choice: ";
	    		      	cin>>c1;
	    		      	system("cls");
	    		      	switch(c1)
	    		      	{
	    		      		case 1:  newInputAdmin();
	    		      				 system("cls");
	    		      		         break;
	    		      		         
	    		      		case 2:   AmbulanceServices();
	    		      				  system("cls");
							          break;
							
							default:
								     if(c1!=3)
								     cout<<"\nInvalid Choice ";
	    		      	}
	    		      	system("cls");
	    		      	break;
	    	
	    	case 2:		
	    				p.PatientInput();
	    				system("cls");
	    		        break;
	    
	        default:
				     if(c!=3)
				     cout<<"\nInvalid Choice ";
			
	    }
    }while(c!=3);
    cout<<"\n\t\tThank you for choosing us.\n\t\tStay safe. Stay healthy.\n";
    getch();
    system("cls");
    cout<<"\n\t\tCSE220 PROJECT by\n\t\tChhandak Bagchi[14BCE0758]\n\t\tKhushbu Chopra[14BCE0777]";
    getch();
   return 0;
}
