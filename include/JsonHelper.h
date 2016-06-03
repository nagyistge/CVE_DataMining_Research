#include <set>
#include <string>
#include <cstdio>
#include <map>
#include "rapidjson/document.h"

using namespace rapidjson;
using namespace std;

class Item
{
public:
    string CWE;
    set<string> CAPEC;
    string Risk;
    set<string> CPE;
};


class JsonHelper
{
public:
    Item* parse(FILE*); 
    
private:
    void getCWE(string&, Value&);
    void getCAPEC(set<string> &, Value&);
    void getRisk(string&, Value&);
    void getCPE(set<string> &, Value&);
    string CPEStringSimplify(string);   
    string CAPECStringfy(int);
};
