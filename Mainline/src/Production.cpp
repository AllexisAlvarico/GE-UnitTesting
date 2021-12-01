
#include "../include/Production.h"

int Production::GenerateNumbers(int a)
{
	return a - a;
}

void Production::SelectNumbers(){

	for(int i = 0; i < 6; i++)
	{
		std::cout << "Select your number(only 1 - 46)" << std::endl;
		std::cout << "Number " <<  i << ": ";
		std::cin >> m_number[i];
		if(CheckSixNumbers(m_number[i]))
		{
			if(CheckDuplicate(m_number[i], i))
			{
				continue;
			}
			else
			{
				std::cout << "Error! found a duplicate redo it!" << std::endl; 
				std::cout << "Select your number(only 1 - 46)" << std::endl;
				std::cout << "Number " <<  i << ": ";
				std::cin >> m_number[i];
			}
		}
		else
		{
			std::cout << "Error! Select your number(only 1 - 46)" << std::endl;
			std::cout << "Number " <<  i << ": ";
			std::cin >> m_number[i];
		}
	}
	
	std::cout << "Lotto numbers: ";
	for (int i = 0; i < 6; i++)
	{
		std::cout << m_number[i] << ", " ;
	}
}

bool Production::CheckSixNumbers(int t_num){

	if(t_num > 0 && t_num < 48)
	{
		return true;
	}
	else{
		return false;
	}	


}

bool Production::CheckDuplicate(int t_num, int index){
	int m_numOfDup = 0;

	for (int i = 0; i < index; i++)
	{
		if(t_num == m_number[i])
		{
			m_numOfDup++;

			if(m_numOfDup >= 2)
			{
				return false;
			}
		}
		else
		{
			m_numOfDup = 0;
			return true;
		}
	}


}