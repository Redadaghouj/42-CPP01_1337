#include "File.hpp"
#include <iostream>

File::File(const std::string &filename, const std::string &s1, const std::string &s2) :
	_inFilename(filename),
	_outFilename(_inFilename + ".replace"),
	_s1(s1), _s2(s2) {};

bool File::openInFile(std::ifstream &inFile)
{
	inFile.open(_inFilename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Failed to open file '" << _inFilename << "'" << std::endl;
		return (false);
	}
	return (true);
}

bool File::openOutFile(std::ofstream &outFile)
{
	outFile.open(_outFilename.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Failed to open file '" << _outFilename << "'" << std::endl;
		return (false);
	}
	return (true);
}

bool File::_performReplace(std::ifstream &inFile, std::ofstream &outFile)
{
	std::string line;
	size_t startPos;
	size_t pos;

	while (std::getline(inFile, line))
	{
		startPos = 0;
		while ((pos = line.find(_s1, startPos)) != std::string::npos)
		{
			outFile << line.substr(startPos, pos - startPos) << _s2;
			startPos = pos + _s1.length();
		}
		if (startPos < line.length())
			outFile << line.substr(startPos);
		if (!inFile.eof())
			outFile << "\n";
		if (outFile.fail())
		{
			std::cerr << "Error writing to " << _outFilename << " file!" << std::endl;
			return (false);
		}
	}
	if (inFile.bad())
	{
		std::cerr << "Error reading from " << _inFilename << " file!" << std::endl;
		return (false);
	}
	return (true);
}

bool File::replaceKeyWord()
{
	std::ifstream inFile;
	std::ofstream outFile;
	std::string filenameReplace;

	if (!openInFile(inFile))
			return (false);
	if (!openOutFile(outFile))
			return (false);
	return (_performReplace(inFile, outFile));
}
