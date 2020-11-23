/*
 * needs to be copied to wherever appropriate
 */


// constructor
FileException::FileException(const string& m) : message(m) {}


string FileException::what() const {
	return message;
}

// go in header file
class FileException {
public:
	FileException(const string&);
	string what() const;
private:
	string message; // exception message
};