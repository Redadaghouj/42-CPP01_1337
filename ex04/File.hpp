#include <fstream>
#include <string>

class File
{
	private:
		const std::string _inFilename;
		std::string _outFilename;
		const std::string _s1;
		const std::string _s2;
		bool _performReplace(std::ifstream &inFile, std::ofstream &outFile);

	public:
		File(const std::string &filename, const std::string &s1, const std::string &s2);
		bool openInFile(std::ifstream &inFile);
		bool openOutFile(std::ofstream &outFile);
		bool replaceKeyWord();
};
