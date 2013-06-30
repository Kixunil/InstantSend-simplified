#include <string>

using namespace std;

string combinePath(const string &dir, const string &file);
string getUserDir();
string getSystemDataDir();
string getSystemPluginDir();
string getSystemCfgDir();

char *getFileName(const char *path);

void makePath(const string &path);
bool pathIsUnsafe(const string &path);
