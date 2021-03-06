/*
 * ConsoleOut.h
 *
 *  Created on: Jan 19, 2016
 *      Author: jker3169
 */

#ifndef VIEW_CONSOLEIO_H_
#define VIEW_CONSOLEIO_H_

#include <iostream>
#include <string>

using namespace std;

class ConsoleIO
{
public:
	//Constructor
	ConsoleIO();

	//Member Methods
	void message(string message);
	void message(string message, bool doesEndLine);

	string getResponse(string message);
};

#endif /* VIEW_CONSOLEOUT_H_ */
