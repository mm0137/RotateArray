#include<iostream>
#include<vector>



void rotate(std::vector<int>& nums, int k) {
	if (nums.empty() || nums.size() <= 1)
		return;

	int size = nums.size();

	if (k>size)
		k %= size;

	int current = 0;
	int temp1, temp2 = nums[current];

	for (int i = 0, j = 0; j<size; ++j)
	{
		temp1 = temp2;
		current = (current + k) % size;
		temp2 = nums[current];
		nums[current] = temp1;
		
		if (current == i) 
		{
			++i;
			current = i;
			temp2 = nums[current];
		}
	}


}

void print(std::vector<int>& nums)
{
	for (unsigned int i = 0; i < nums.size(); ++i)
		std::cout << nums[i] << " ";
}

int main()
{
	std::vector<int> nums;
	unsigned int n,k;
	std::cout << "Enter the size of the array ";
	do { std::cin >> n; } while (n <= 0);
	std::cout << '\n';
	
	std::cout << "Enter the elements of the array " ;

	for (unsigned int i = 0; i<n; ++i)
	{
		std::cin >> k;
		nums.push_back(k);
	}

	std::cout << '\n';

	std::cout << "Enter the  number of steps ";
	do { std::cin >> k; } while (k < 0);
	std::cout << '\n';
	rotate(nums, k);
	print(nums);
	
	std::cout << '\n';

	system("pause");
	return 0;
}














