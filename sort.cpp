#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

void SelectionSort(auto &data);

int main()
{
  vector<string> inputs;
  string input;
  

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  
SelectionSort(inputs);

for(int x = 0; x < inputs.size(); x++)
{
	cout << inputs[x] << endl << endl;
}




  cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

}


void SelectionSort(auto &data)

{

int minIndex;
for( int i = 0; i < data.size(); i++)
	{
	
	minIndex = i;
	for( int j = i+1; j < data.size(); j++)
		
		{
		if (data[j] < data[minIndex])
			{minIndex = j;}		
		}
	if (minIndex != i)
		{
			swap (data[minIndex], data[i]);
		}	
	}
	
}







