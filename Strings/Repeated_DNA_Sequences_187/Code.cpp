class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        map<string, int> encounter;
        string dna;

        int size = s.size();

        for(int i = 0; i < size-9; i++){
            dna = s.substr(i, 10);
            if(encounter.find(dna) == encounter.end()){
                encounter.insert({dna, 1});
            }
            else{
                if(encounter[dna] == 1){
                    ans.push_back(dna);
                }
                encounter[dna] = 2;
            }
        }
        return ans;
    }
};
