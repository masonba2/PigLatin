// PigLatin.cpp : Defines the entry point for the console application.
//
#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int translateToPigLatin(char wordArray[47]);
char latinArray[50] = "";

int main()
{
	char wordArray[47];
	cout << "please enter a word for translation: ";
	cin >> wordArray;
	cout << endl;
	cout << "The pig Latin form of" << wordArray << "is: " << latinArray << endl;
	return 0;
}

int translateToPigLatin(char wordArray[47])
{	
	int length; int i;
	char firstLetter = wordArray[0];
	char num[] = { '0','1','2','3','4','5','6','7','8','9' };
	char isVowel[] = { 'a','o','i','e','u','y'};

	length = strlen(wordArray);

	for (i = 0; i < length; i++)
		{
		wordArray[i] = toupper(wordArray[0]);				
		}

	for (i = 0; i < length; i++)
	{
		if (firstLetter == num[i])
		{
			return -1;
		}

		else if (firstLetter == isVowel[i])
		{
			wordArray.append(1, first);
		}
		else if (firstLetter != num[i] || wordArray)


	}