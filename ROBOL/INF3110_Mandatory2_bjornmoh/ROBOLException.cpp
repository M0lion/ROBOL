#include "ROBOLException.h"

ROBOLException::ROBOLException(const std::string msg) : std::runtime_error(msg)
{
	this->msg = msg;
}