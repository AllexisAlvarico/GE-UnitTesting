#include <iostream>
#include <vector>

class Production{
public:
	int GenerateNumbers(int a);
	void SelectNumbers();
	bool CheckSixNumbers(int t_num);
	bool CheckDuplicate(int t_num, int index);


private:
	int m_number[6];
	std::vector<int> m_lottoNumbers;
};
