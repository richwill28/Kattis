#include <bits/stdc++.h>
using namespace std;

void zeroPad(string& str, int width) {
    str.insert(str.begin(), width - str.length(), '0');
}

bool parseInstruction(vector<string>& reg, vector<string>& ram, int& location, string instr) {
    if (instr[0] == '0') {
        // goto the location in register d unless register s contains 0
        int d = instr[1] - '0';
        int s = instr[2] - '0';
        if (stoi(reg[s]) != 0) {
            location = stoi(reg[d]);
            return false;
        }
    } else if (instr[0] == '1') {
        // halt
        return true;
    } else if (instr[0] == '2') {
        // set register d to n
        int d = instr[1] - '0';
        char n = instr[2];
        reg[d] = {n};
        zeroPad(reg[d], 3);
    } else if (instr[0] == '3') {
        // add n to register d
        int d = instr[1] - '0';
        int n = instr[2] - '0';
        reg[d] = to_string((stoi(reg[d]) + n) % 1000);
        zeroPad(reg[d], 3);
    } else if (instr[0] == '4') {
        // multiply register d by n
        int d = instr[1] - '0';
        int n = instr[2] - '0';
        reg[d] = to_string((stoi(reg[d]) * n) % 1000);
        zeroPad(reg[d], 3);
    } else if (instr[0] == '5') {
        // set register d to the value of register s
        int d = instr[1] - '0';
        int s = instr[2] - '0';
        reg[d] = reg[s];
    } else if (instr[0] == '6') {
        // add the value of register s to register d
        int d = instr[1] - '0';
        int s = instr[2] - '0';
        reg[d] = to_string((stoi(reg[d]) + stoi(reg[s])) % 1000);
        zeroPad(reg[d], 3);
    } else if (instr[0] == '7') {
        // multiply register d by the value of register s
        int d = instr[1] - '0';
        int s = instr[2] - '0';
        reg[d] = to_string((stoi(reg[d]) * stoi(reg[s])) % 1000);
        zeroPad(reg[d], 3);
    } else if (instr[0] == '8') {
        // set register d to the value in RAM whose address is in register a
        int d = instr[1] - '0';
        int a = instr[2] - '0';
        reg[d] = ram[stoi(reg[a])];
    } else if (instr[0] == '9') {
        // set the value in RAM whose address is in register a to the value of register s
        int s = instr[1] - '0';
        int a = instr[2] - '0';
        ram[stoi(reg[a])] = reg[s];
    }

    location++;
    return false;
}

int run(vector<string>& reg, vector<string>& ram) {
    int location = 0;
    string instr;
    while (cin >> instr) {
        ram[location] = instr;
        location++;
    }

    int counter = 0;
    location = 0;
    while (true) {
        counter++;
        string instr = ram[location];
        bool isHalt = parseInstruction(reg, ram, location, instr);
        if (isHalt) {
            break;
        }
    }
    return counter;
}

int main() {
    vector<string> reg(10, "000");
    vector<string> ram(1000, "000");
    cout << run(reg, ram) << endl;
    return 0;
}
