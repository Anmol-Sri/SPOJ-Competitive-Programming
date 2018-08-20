#include <stdio.h>
#include <sstream>
#include <string.h>


using namespace std;

int main()
{
	
	int tests = 0;
	scanf("%d", &tests);
	
	//initialize variables needed
	int books = 0; // denoted as 'm'
	int scribs = 0; // denoted as 'k'
	int runningSum = 0;
	int average = 0;
	int nextBookPages = 0;
	int minimum = 0;
	while(tests > 0)
	{
		// first line (m k)
		scanf("%d", &books);
		scanf("%d", &scribs);
		int pages[books];
		// second line (p1, p2, ..., pm)
		for(int numOfPages = 0; numOfPages < books; numOfPages++)
		{
			scanf("%d", &pages[numOfPages]);
			runningSum = pages[numOfPages] + runningSum;
		}
		average = runningSum / scribs;
		scribs = scribs - 1;
		runningSum = 0;
		// output
		for(int booksToPrint = 0; booksToPrint < books; booksToPrint++)
		{
			nextBookPages = pages[booksToPrint];
			if(runningSum + nextBookPages > average
			&& scribs > 0) // print books until above average
			{
				if(runningSum < minimum)
				{
					minimum = runningSum;
				}
				printf("/ ");
				runningSum = 0;
				scribs = scribs - 1;
			}
			runningSum = runningSum + nextBookPages;
			printf("%d ", pages[booksToPrint]);
		}
		
		// reset/decrement counters
		printf("\n"); // new line for next test
		tests = tests - 1;
		runningSum = 0;
	}
	return 0;
}