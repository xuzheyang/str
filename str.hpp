#ifndef _STR_HPP__
#define _STR_HPP__

class str {
    public:
        static std::vector<std::string> splitString(const std::string& s, const std::string& c)
        {
            std::vector<std::string> ret;
            std::string::size_type pos1, pos2;
            pos2 = s.find(c);
            pos1 = 0;
            while(std::string::npos != pos2)
            {
                ret.push_back(s.substr(pos1, pos2-pos1));
        
                pos1 = pos2 + c.size();
                pos2 = s.find(c, pos1);
            }
            if(pos1 != s.length())
                ret.push_back(s.substr(pos1));
        
            return ret;
        };
        
        static bool startsWith(const std::string& str, const std::string& start)
        {
            int srclen = (int)str.size();
            int startlen = (int)start.size();
            if(srclen >= startlen)
            {
                std::string temp = str.substr(0, startlen);
                if(temp == start)
                    return true;
            }
        
            return false;
        };
        
        static bool endsWith(const std::string& str, const std::string& end)
        {
            int srclen = (int)str.size();
            int endlen = (int)end.size();
            if(srclen >= endlen)
            {
                std::string temp = str.substr(srclen - endlen, endlen);
                if(temp == end)
                    return true;
            }
        
            return false;
        };
};

#endif // _STR_HPP__