#include <iostream>
#include <cstdlib>
#include <ctime>

// This code will sort the numbers in the array.
//
// Task: Modify the algorithm to reverse the sort, then comment on its efficiency in the space 
// provided below:
//
/*-----------------------------------------------------------------------------------------------------------------------------*/
// The sorting has nested for loops and they excute a fixed number of time. Hence the time complexity of the algorithm is O(1).
// The algorithm is building a new list of size 100 of sorted numbers. Hence the space complexity is O(n).


int main() 
{
  int unsorted[100] = {};
  srand (time(NULL));
  for (int i = 0; i < 100; i++) 
	{
    unsorted[i] = rand() % 100;
  }
  
	std::cout << "Here are the unsorted numbers:" << std::endl;
  for (int i = 0; i < 100; i++) 
	{
    std::cout << unsorted[i] << " ";
  }
  std::cout << std::endl;
  int sorted[100] = {};
  for (int i = 0; i < 100; i++) 
	{
    int low = 0;
    int hiIndex = -1;
    for (int j = 0; j < 100; j++) 
		{
      if (unsorted[j] > low) 
			{
        low = unsorted[j];
        hiIndex = j;
      }
    }
    sorted[i] = low;
    unsorted[hiIndex] = 0;
  }
  
	std::cout << "Here are the sorted numbers:" << std::endl;
  for (int i = 0; i < 100; i++) 
	{
    std::cout << sorted[i] << " ";
  }
  std::cout << std::endl;
}
