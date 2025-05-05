class Solution {
public:
    bool isAnagram(string s, string t) {

        // s & t are not valid anagrams if the lengths are not equal
        if(s.length() != t.length())
            return false;
        
        int res = 0, i =0;

        //sort string s
        sort(s.begin(), s.end());
        //sort string t
        sort(t.begin(), t.end());

        //Traverse s & t togetherly
        for(i = 0 ; i < s.length() ; i++)
        {
            //If there is any deviation between s & t 
            //then it no longer considered to be valid anagrams
            if (s[i] != t[i])
                return false;

        }
        
        //if all are equal then return those as valid anagrams
        return true;
        
    }
};