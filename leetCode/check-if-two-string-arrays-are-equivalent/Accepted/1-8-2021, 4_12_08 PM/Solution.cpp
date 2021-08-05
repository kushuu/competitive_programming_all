// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
private:
    class StringArrayIterator {
    private:
        const vector<string>& m_w;
        int m_wi = 0;
        int m_si = 0;
        
    public:
        StringArrayIterator(const vector<string>& w) noexcept : m_w(w) {
        }
        
        int size() const noexcept {
            int res {};
            for (const auto& s : m_w) {
                res += s.size();
            }
            return res;
        }
        
        bool isEnd() const noexcept {
            return m_wi == m_w.size();
        }
        
        char getAndInc() noexcept {
            const auto res = m_w[m_wi][m_si];
            ++m_si;
            if (m_si >= m_w[m_wi].size()) {
                m_si = 0;
                ++m_wi;
            }
            return res;
        }
    };
    
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        StringArrayIterator it1(word1), it2(word2);
        if (it1.size() != it2.size()) {
            return false;
        }
        while (!it1.isEnd()) {
            if (it1.getAndInc() != it2.getAndInc()) {
                return false;
            }
        }
        return true;
    }
};