#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;
        int no_printer,no_fax,no_scanner,no_tapedrive;
        int no_printer_hold,no_fax_hold,no_scanner_hold,no_tapedrives_hold;
        int sum=0,sum1=0,sum2=0,sum3=0;
        int r1,r2,r3,r4;
       int fraction[4];
	   int fraction1[4];
	   int fraction2[4];
	   int fraction3[4];
	   int request[4];
	   int request1[4];
	   int request2[4];
	   int request3[4];
       int available[4];
        void Calculate();
       int main()
       {
            cout<<"*************************Welcome to office resources usage software*************************"<<endl;
            cout<<"************//////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\****************"<<endl;
            cout<<"************\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//////////////////////////////////****************"<<endl;
            cout<<"*********                                                                        ***********"<<endl;
            cout<<"............................................................................................"<<endl;
            cout<<"............................................................................................"<<endl;   
            cout<<"............................................................................................"<<endl;
            cout<<"............................................................................................"<<endl;
            cout<<"Enter the number of printers your company has"<<endl;
            cin>>no_printer;
            cout<<"Enter the number of fax your company has"<<endl;
            cin>>no_fax;
            cout<<"Enter the number of scanner your company has"<<endl;
            cin>>no_scanner;
            cout<<"Enter the number of tapedrive your company has"<<endl;
            cin>>no_tapedrive;
            cout<<"Enter the printer,fax,scanner,tapedrive requirements for Kumar";
            for(int i=0;i<4;i++)
                {
                    cin>>request[i];
                }
            cout<<"Enter the printer,fax,scanner,tapedrive requirements for Harsh";
            for(int i=0;i<4;i++)
                {
                    cin>>request1[i];
                }
            cout<<"Enter the printer,fax,scanner,tapedrive requirements for Vipul";
            for(int i=0;i<4;i++)
                {
                    cin>>request2[i];
                }
            cout<<"Enter the printer,fax,scanner,tapedrive requirements for Ramesh";
            for(int i=0;i<4;i++)
                {
                    cin>>request3[i];
                }
            
            srand(time(0));
	        int randnum[4];
	        int randnum1[4];
	        int randnum2[4];
	        int randnum3[4];
	        for (int i = 0; i < 4; i++)
	            {
		        randnum[i]=((double) rand() / (RAND_MAX))*no_printer;
		        randnum1[i]=((double) rand() / (RAND_MAX))*no_fax;
		        randnum2[i]=((double) rand() / (RAND_MAX))*no_scanner;
		        randnum3[i]=((double) rand() / (RAND_MAX))*no_tapedrive;
		        sum+=randnum[i];
		        sum1+=randnum1[i];
		        sum2+=randnum2[i];
		        sum3+=randnum3[i];
	            }

	           
	          for (int i = 0; i < 4; i++)
	          {
	        	fraction[i]=(no_printer*randnum[i]/sum);
	        	fraction1[i]=(no_fax*randnum1[i]/sum1);
	        	fraction2[i]=(no_scanner*randnum2[i]/sum2);
	        	fraction3[i]=(no_tapedrive*randnum3[i]/sum3);
	           }
                 cout<<"\n\n\t ********** Displaying Total Resource Details ********** \n"<<" ";
                 cout<<"\n\t"<<"Printer"<<"\t"<<"Fax"<<"\t"<<"Scanner"<<"\t"<<"Tapedrive";
                 cout<<"\n\t"<<no_printer<<"\t"<<no_fax<<"\t"<<no_scanner<<"\t"<<no_tapedrive;
                 cout<<"\n\t"<<"**********************************************************\n\n"<<" ";
                 cout<<"\n\n\t ********** Displaying Resource on hold by employee Details ********** \n\n"<<" ";
                 cout<<"\n\tEmployee id"<<"\t"<<"Name"<<"\t"<<"Printer"<<"\t"<<"Fax"<<"\t"<<"Scanner"<<"\t"<<"Tapedrive";
                 cout<<"\n\t\t"<<1<<"\t"<<"Kumar"<<"\t"<<fraction[0]<<"\t"<<fraction1[0]<<"\t"<<fraction2[0]<<"\t"<<fraction3[0];
                 cout<<"\n\t\t"<<2<<"\t"<<"Harsh"<<"\t"<<fraction[1]<<"\t"<<fraction1[1]<<"\t"<<fraction2[1]<<"\t"<<fraction3[1];
                 cout<<"\n\t\t"<<3<<"\t"<<"Vipul"<<"\t"<<fraction[2]<<"\t"<<fraction1[2]<<"\t"<<fraction2[2]<<"\t"<<fraction3[2];
                 cout<<"\n\t\t"<<4<<"\t"<<"Ramesh"<<"\t"<<fraction[3]<<"\t"<<fraction1[3]<<"\t"<<fraction2[3]<<"\t"<<fraction3[3];
                 cout<<"\n\t"<<"**********************************************************\n\n"<<" ";
                 
                r1=fraction[0]+fraction[1]+fraction[2]+fraction[3];
                r2=fraction1[0]+fraction1[1]+fraction1[2]+fraction1[3];
                r3=fraction2[0]+fraction2[1]+fraction2[2]+fraction2[3];
                r4=fraction3[0]+fraction3[1]+fraction3[2]+fraction3[3];
            cout<<"\n\t"<<"**********************************************************\n\n"<<" ";
            
            cout<<"\n\n\t ********** Displaying Total Resource on hold Details ********** \n"<<" ";
            cout<<"\n\t"<<"Printer"<<"\t"<<"Fax"<<"\t"<<"Scanner"<<"\t"<<"Tapedrive";
            cout<<"\n\t"<<r1<<"\t"<<r2<<"\t"<<r3<<"\t"<<r4;
             cout<<"\n\t"<<"**********************************************************\n\n"<<" ";
             
              cout<<"\n\n\t ********** Displaying Total Resources available ********** \n"<<" ";
            cout<<"\n\t"<<"Printer"<<"\t"<<"Fax"<<"\t"<<"Scanner"<<"\t"<<"Tapedrive";
            cout<<"\n\t"<<no_printer-r1<<"\t"<<no_fax-r2<<"\t"<<no_scanner-r3<<"\t"<<no_tapedrive-r4;
             cout<<"\n\t"<<"**********************************************************\n\n"<<" ";
             available[0]=no_printer-r1;
             available[1]=no_fax-r2;
             available[2]=no_scanner-r3;
             available[3]=no_tapedrive-r4;
             Calculate();
              return 0;
       }
       void Calculate()
       {
           int c1,c2,c3,c4;
           c1=0,c2=0,c3=0,c4=0;
            do
            {
                c1=0,c2=0,c3=0,c4=0;                        
            
                    for(int i=0;i<4;i++)
                    {
                        if(request[i]<=available[i])
                            c1+=1;
                        else
                            c1=-1;
                        if(c1==4)
                            {
                                for(int i=0;i<4;i++)
                                {
                                    request[i]+=available[i];
                                }
                            }
                    }
                    for(int i=0;i<4;i++)
                    {
                        if(request1[i]<=available[i])
                            c2+=1;
                        else
                            c2=-1;
                        if(c2==4)
                            {
                                for(int i=0;i<4;i++)
                                {
                                    request1[i]+=available[i];
                                }
                            }
                    }
                    for(int i=0;i<4;i++)
                    {
                        if(request2[i]<=available[i])
                            c3+=1;
                        else
                            c3=-1;
                        if(c3==4)
                            {
                                for(int i=0;i<4;i++)
                                {
                                    request2[i]+=available[i];
                                }
                            }
                    }
                    for(int i=0;i<4;i++)
                    {
                        if(request3[i]<=available[i])
                            c4+=1;
                        else
                            c4=-1;
                        if(c4==4)
                            {
                                for(int i=0;i<4;i++)
                                {
                                    request3[i]+=available[i];
                                }
                            }
                    }
                    if(c1!=4 && c2!=4 && c3!=4 && c4!=4)
                    cout<<"The system is in deadlock state";
            }while(c1==4||c2==4||c3==4||c4==4);     
       }