#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int numberOfsolders;
	cin >> numberOfsolders;
	int heightsOfTheSolders[numberOfsolders];

	for (int i = 0; i < numberOfsolders; i++)
	{
		cin >> heightsOfTheSolders[i];
	}

	int maxHeight = heightsOfTheSolders[0], minHeight = heightsOfTheSolders[0];

	// finding max and min height
	for (int i = 0; i < numberOfsolders; i++)
	{
		if (maxHeight < heightsOfTheSolders[i])
			maxHeight = heightsOfTheSolders[i];
		else if (minHeight > heightsOfTheSolders[i])
			minHeight = heightsOfTheSolders[i];
	}

	int b_lowestIndexForMaxHeight, s_highestIndexForMinHeight;

	// ref
	// pseudo code
	// int arr[5] = {4, 1, 3, 2, 6}, x;
	// x = find(3).arr;
	// pseudo code
	// To find the index, use std::distance and std::find from the<algorithm> header.
	// code
	// int x = std::distance(arr, std::find(arr, arr + 5, 3));
	// code
	// ref link - https://stackoverflow.com/questions/3909784/how-do-i-find-a-particular-value-in-an-array-and-return-its-index

	// find max min height index
	b_lowestIndexForMaxHeight = distance(heightsOfTheSolders, find(heightsOfTheSolders, heightsOfTheSolders + numberOfsolders, maxHeight));
	s_highestIndexForMinHeight = distance(heightsOfTheSolders, find(heightsOfTheSolders, heightsOfTheSolders + numberOfsolders, minHeight));

	// filtering highestIndexForMinHeight for cases like 10 10 58 31 .....
	for (int i = 0; i < numberOfsolders; i++)
	{
		if ((minHeight == heightsOfTheSolders[i]) && (s_highestIndexForMinHeight < i))
			s_highestIndexForMinHeight = i;
	}

	// cout<<"max index: "<<b_lowestIndexForMaxHeight<<" min index: "<<s_highestIndexForMinHeight;

	int numberOfsecondsToMoveBToStartPosition, numberOfsecondsToMoveSToEndPosition;
	if (b_lowestIndexForMaxHeight < s_highestIndexForMinHeight)
	{
		numberOfsecondsToMoveBToStartPosition = b_lowestIndexForMaxHeight;
		// numberOfsecondsToMoveSToEndPosition = (length - 1) - position of s
		numberOfsecondsToMoveSToEndPosition = (numberOfsolders - 1) - s_highestIndexForMinHeight;
	}
	else
	{
		numberOfsecondsToMoveBToStartPosition = b_lowestIndexForMaxHeight;
		// numberOfsecondsToMoveSToEndPosition = ((length - 1) - position of s ) - 1 for remove extra swap count
		numberOfsecondsToMoveSToEndPosition = ((numberOfsolders - 1) - s_highestIndexForMinHeight) - 1;
	}

	// cout<<"b "<<numberOfsecondsToMoveBToStartPosition<<" s "<<numberOfsecondsToMoveSToEndPosition;
	cout << numberOfsecondsToMoveBToStartPosition + numberOfsecondsToMoveSToEndPosition;
}