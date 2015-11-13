#pragma once

#include <stdexcept>

class ROBOLException : public std::runtime_error
{
public:
	ROBOLException(std::string msg);
private:
	std::string msg;
};