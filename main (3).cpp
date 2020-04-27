#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
        int no_printer,no_fax,no_scanner,no_tapedrives;
        int no_printer_hold,no_fax_hold,no_scanner_hold,no_tapedrives_hold;
       struct Employee
       {
              int Id;
              char Name[25];
              int no_printer_hold;
              int no_fax_hold;
              int no_scanner_hold;
              int no_tapedrives_hold;
       };

       void Calculate(struct Employee*);
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
            cin>>no_tapedrives;
            struct Employee Emp1 = {1,"Kumar",rand()%no_printer,rand()%no_fax,rand()%no_scanner,rand()%no_tapedrives};
            struct Employee Emp2 = {1,"Harsh",rand()%no_printer,rand()%no_fax,rand()%no_scanner,rand()%no_tapedrives};
            struct Employee Emp3 = {1,"Vipul",rand()%no_printer,rand()%no_fax,rand()%no_scanner,rand()%no_tapedrives};
            struct Employee Emp4 = {1,"Ramesh",rand()%no_printer,rand()%no_fax,rand()%no_scanner,rand()%no_tapedrives};
              Calculate(&Emp1);
              Calculate(&Emp2);
              Calculate(&Emp3);
              Calculate(&Emp4);
              return 0;
       }

       void Calculate(struct Employee *E)
       {
                    printf("\n\nEmployee Id : %d",E->Id);
                    printf("\nEmployee Name : %s",E->Name);
                    printf("\nno of printers on hold : %d",E->no_printer_hold);
                    printf("\nno of fax on hold : %d",E->no_fax_hold);
                     printf("\nno of scanner on hold : %d",E->no_scanner_hold);
                      printf("\nno of tapedrives on hold : %d",E->no_tapedrives_hold);
       }