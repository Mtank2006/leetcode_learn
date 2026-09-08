class Solution {
public:
    string simplifyPath(string path) {
        string Npath = "";
        stringstream ss(path);
        string part;
        while (getline(ss, part, '/')) {
            if (part == ".") {

            }
            else if (part == "..") {
                size_t pos = Npath.rfind('/');
                if (pos != string::npos) {
                    Npath.erase(pos);
                }
            }
            else {
                if (part != "") {
                    Npath += "/" + part;
                }
            }
        }
        if (Npath.empty()) {
            Npath = "/";
        }
        return Npath;
    }
};
