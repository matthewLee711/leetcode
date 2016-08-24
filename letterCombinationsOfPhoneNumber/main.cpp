const vector<string> keyboard { " ", "", "abc", "def", // '0','1','2',...
            "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

vector<string> letterCombinations (const string &digits) {
    if (digits == "") return {};//empty
    vector<string> result;//store results
    dfs(digits, 0, "", result);
    return result;
}

//recursive
void dfs(const string &digits, size_t cur, string path, vector<string> &result) {
    //Store unique combo
    if (cur == digits.size()) {
        result.push_back(path);
        return;
    }
    for (auto c : keyboard[digits[cur] - '0']) {
        dfs(digits, cur + 1, path + c, result);
    }
}
