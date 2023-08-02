#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
bool check_sub_1()
{
    int n = inf.readInt(1, 1000, "n"); inf.readEoln();
    for (int i = 1; i <= n; i++) {
        inf.readInt(1, 100000, "a[]");
        if (i < n) inf.readSpace();
    }
    inf.readEof();
    return true;
}
bool check_sub_2()
{
    int n = inf.readInt(1, 100000, "n"); inf.readEoln();
    for (int i = 1; i <= n; i++) {
        inf.readInt(1, 100000, "a[]");
        if (i < n) inf.readSpace();
    }
    inf.readEof();
    return true;
}
bool check_sub_3()
{
    int n = inf.readInt(1, 100000, "n"); inf.readEoln();
    for (int i = 1; i <= n; i++) {
        inf.readInt(1, 1000000000, "a[]");
        if (i < n) inf.readSpace();
    }
    inf.readEof();
    return true;
}
int main(int argc, char* argv[])
{
    registerValidation(argc, argv);
    int subtask = stoi(validator.group());
    if (subtask == 1) ensuref(check_sub_1(), "The test doesnt satisfy subtask 1's constraints");
    if (subtask == 2) ensuref(check_sub_2(), "The test doesnt satisfy subtask 2's constraints");
    if (subtask == 3) ensuref(check_sub_3(), "The test doesnt satisfy subtask 3's constraints");
}



