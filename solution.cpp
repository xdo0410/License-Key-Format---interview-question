// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string solution(string &S, int K) {
    // write your code in C++14 (g++ 6.2.0)
    string output = "";
    int j = 0;
    for (int i = S.length()-1; i>=0; --i){
        if(S[i] == '-') continue;
        output = string(1, toupper(S[i])) + output;
        if((++j) % K == 0){
            output = "-" + output;
        }
    }
    return output[0] == '-' ? output.substr(1) : output;
}
