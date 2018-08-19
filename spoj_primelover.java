/**
A number is called prime-lover, if sum of its digits in base-3 is a prime number. For example 2, 6, and 31 are prime-lovers, sum of digits of all these numbers are prime.

2=(2)3 ,  6=(20)3 , 31=(1011)3

Checking whether a number is prime-lover or not is too easy for this contest, so solve this problem:

Given two integers N, K. Can you calculate K’th smallest prime-lover which is not greater than N?

Input
The first line of input indicates the number of test cases (There will be at most 1000 test cases)

Each test case consists of two space-separated integers N, K. (1 ≤ N, K ≤ 1013)

Output
For each test case, print the answer to the problem. If there is no such number, print -1.

Example
Input:
3
10 3
10 6
10 7

Output:
5
10
-1
Prime-Lover Numbers not greater than 10 are:

2, 4, 5, 6, 7, 10


*/


import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{

	public static long asBase3(int num)
	{
	    long ret = 0, factor = 1;
	    while (num > 0)
	    {
	        ret += num % 3 * factor;
	        num /= 3;
	        factor *= 10;
    	}
		return ret;
	}

	public static boolean isPrime(int n)
	{
    	return !new String(new char[n]).matches(".?|(..+?)\\1+");
	}
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		while(t>0)
		{
			long n=sc.nextLong();
			long k=sc.nextLong();


			t--;
		}
	}
}
