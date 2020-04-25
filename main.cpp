#include <iostream>

using namespace std;
struct printer_machine
{
    int id;
    int used;
}
struct fax_machine
{
    int id;
    int used;
}
struct scanner_machine
{
    int id;
    int used;
}
struct shredder_machine{
    int id;
    int used;
}
printer_machine printer1={1,1};
printer_machine printer2={2,1};
printer_machine printer3={3,1};
fax_machine fax1={1,1};
fax_machine fax2={2,1};
fax_machine fax3={3,1};
scanner_machine scanner1={1,1};
scanner_machine scanner2={2,1};
scanner_machine scanner3={3,1};
shredder_machine shredder1={1,1};
shredder_machine shredder2={2,1};
shredder_machine shredder3={3,1};
int resource_1 = 0; //Represents resource1
int resource_2 = 0; //Represents resource2
int resource_3 = 0; //Represents resource3

int found_someone = 0; //Used to determine if any of the processes have found someone or not

void release_resource_1()
{
	resource_1 = 1; //releasing resource1
}
void find_resource_1()
{
	if(resource_1)
	{
		cout<<"Got resource 1"<<endl;
	}
	else
	{
		cout<<"Process3 requesting for resource1.....requesting...requesting"<<endl;
	}
}

void release_resource_2()
{
	resource_2 = 1; //releasing resource_2
}

void find_resource_2()
{
	if(resource_2)
	{
		cout<<"Got resource2"<<endl;
	}
	else
	{
		cout<<"Process1 requesting for resource_2....requesting....requesting....requesting"<<endl;
	}
}

void release_resource_3()
{
	resource_3 = 1;
}

void find_resource_3()
{
	if(resource_3)
	{
		cout<<"Got resource_3"<<endl;
	}
	else
	{
		cout<<"Process2 requesting for resource3...requesting....requesting....requesting"<<endl;
	}
}


void Ramesh()
{
	find_resource_2();
	
	if(resource_2)
	{
		release_resource_1();
		found_someone = 1;
	}
}

void Suresh()
{
	find_resource_3();
	
	if(resource_3)
	{
		release_resource_3();
		found_someone = 1;
	}
}

void Rajat()
{
	find_resource_1();
	
	if(resource_1)
	{
		release_resource_1();
		found_someone = 1;
	}
}

void Manvee()
{
    find_resource_1();
	
	if(resource_1)
	{
		release_resource_1();
		found_someone = 1;
	}
}

int main()
{	
	while(!found_someone)
	{
		Ramesh();
		Suresh();
		Rajat();
		Manvee();
	}
}
