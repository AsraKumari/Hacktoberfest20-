#include <fstream>
class FileUtils {
public:
    int countLines(string filename) {
        ifstream file(filename);
        string line;
        int count = 0;
        while (getline(file, line)) count++;
        file.close();
        return count;
    }
};
