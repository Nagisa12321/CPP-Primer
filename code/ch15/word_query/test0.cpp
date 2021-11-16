#include "query.h"
using namespace std;

int main() {
    query q = query("fiery") & query("bird") | query("wind");
}