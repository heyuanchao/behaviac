﻿// -------------------------------------------------------------------------------
// THIS FILE IS ORIGINALLY GENERATED BY THE DESIGNER.
// YOU ARE ONLY ALLOWED TO MODIFY CODE BETWEEN '///<<< BEGIN' AND '///<<< END'.
// PLEASE MODIFY AND REGENERETE IT IN THE DESIGNER FOR CLASS/MEMBERS/METHODS, ETC.
// -------------------------------------------------------------------------------

#include "FirstAgent.h"

///<<< BEGIN WRITING YOUR CODE FILE_INIT

///<<< END WRITING YOUR CODE

FirstAgent::FirstAgent()
{
	p1 = 0;
	pInstance = NULL;
///<<< BEGIN WRITING YOUR CODE CONSTRUCTOR
	p1 = 0;
	pInstance = NULL;
///<<< END WRITING YOUR CODE
}

FirstAgent::~FirstAgent()
{
///<<< BEGIN WRITING YOUR CODE DESTRUCTOR

///<<< END WRITING YOUR CODE
}

void FirstAgent::SayHello()
{
///<<< BEGIN WRITING YOUR CODE SayHello
	printf("\nHello Behaviac!\n\n");
///<<< END WRITING YOUR CODE
}


///<<< BEGIN WRITING YOUR CODE FILE_UNINIT
void FirstAgent::SetSecondAgent(SecondAgent* instance)
{
	pInstance = instance;
}
///<<< END WRITING YOUR CODE