#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int mes;
	string x;
	cin>>mes;
	
	if(mes==1)
	{x="January";}
	else{
		if(mes==2)
		{x="February";}
		else{
			if(mes==3)
			{x="March";}
			else{
				if(mes==4)
				{x="April";}
				else{
					if(mes==5)
					{x="May";}
					else{
						if(mes==6)
						{x="June";}
						else{
							if(mes==7)
							{x="July";}
							else{
								if(mes==8)
								{x="August";}
								else{
									if(mes==9)
									{x="September";}
									else{
										if(mes==10)
										{x="October";}
										else{
											if(mes==11)
											{x="November";}
											else{
												if(mes==12)
												{x="December";}						
												
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	cout<<x<<endl;
	
}