#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;
//Variable for number of printers,fax,scanner and tapedrive
        int no_printer,no_fax,no_scanner,no_tapedrive;
//Used for calculating the random assignment of resources
        int sum=0,sum1=0,sum2=0,sum3=0;
//Variable for number of printers,fax,scanner and tapedrive on hold by users
        int r1,r2,r3,r4;
//fraction[]->It is used for randomly storing the number of resources allocated at any time
       int fraction[4];
	   int fraction1[4];
	   int fraction2[4];
	   int fraction3[4];
//request[]->It is used for storing the resources requested by users at any time.
	   int request[4];
	   int request1[4];
	   int request2[4];
	   int request3[4];
/*available[]->It is used to check for the resources available by substracting the total number of resources available 
with total number of resources on hold.*/

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
            /*srand(time0)-It used for generating a seed at a particular time otherwise if we use rand() in c++ directly
            then it will always return the same random numbers after executing multiple times.
            So by using srand() we will be generating random numbers.*/

            srand(time(0));
	        int randnum[4];
	        int randnum1[4];
	        int randnum2[4];
	        int randnum3[4];
	        //for loop Used for generating random numbers within the max limit
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

	           //for loop used for random distribution of resources 
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
             cout<<"\n\n\t ********** Displaying Resource required by employee Details ********** \n\n"<<" ";
                 cout<<"\n\tEmployee id"<<"\t"<<"Name"<<"\t"<<"Printer"<<"\t"<<"Fax"<<"\t"<<"Scanner"<<"\t"<<"Tapedrive";
                 cout<<"\n\t\t"<<1<<"\t"<<"Kumar"<<"\t"<<request[0]<<"\t"<<request[1]<<"\t"<<request[2]<<"\t"<<request[3];
                 cout<<"\n\t\t"<<2<<"\t"<<"Harsh"<<"\t"<<request1[0]<<"\t"<<request1[1]<<"\t"<<request1[2]<<"\t"<<request1[3];
                 cout<<"\n\t\t"<<3<<"\t"<<"Vipul"<<"\t"<<request2[0]<<"\t"<<request2[1]<<"\t"<<request2[2]<<"\t"<<request3[3];
                 cout<<"\n\t\t"<<4<<"\t"<<"Ramesh"<<"\t"<<request3[0]<<"\t"<<request3[1]<<"\t"<<request3[2]<<"\t"<<request3[3];
                 cout<<"\n\t"<<"**********************************************************\n\n"<<" ";
                 
             available[0]=no_printer-r1;
             available[1]=no_fax-r2;
             available[2]=no_scanner-r3;
             available[3]=no_tapedrive-r4;
             Calculate();
              return 0;
       }
       /* We calculate the resources available and take the resources requested by users as input and 
       check for possibility of assigning the resources by taking   counters if the resources requested by a particular person is less 
       i.e. the number of printers,scanners,tapedrive,fax then the counter value is increased till 4.
       If the counter value turns out to be 4 then 
       resources are assigned to the person and the total resources available at that time 
       is added upon by the persons resources in the available matrix. 
       If the counter does not go upto 4 in any case then deadlock is  detected.*/
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
                                    available[i]+=request[i];
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
                                    available[i]+=request1[i];
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
                                    available[i]+=request2[i];
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
                                    available[i]+=request3[i];
                                }
                            }
                    }
                    if(c1!=4 && c2!=4 && c3!=4 && c4!=4)
                    {
                    cout<<"The system is in deadlock state";
                    break;
                    }
                    else{
                    cout<<"The system is not in deadlock";
                    break;
                    }
            }while(c1==4||c2==4||c3==4||c4==4);     
       }