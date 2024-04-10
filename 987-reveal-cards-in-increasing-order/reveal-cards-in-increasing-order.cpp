class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        //Push indexes in queue
        for(int i=0;i<deck.size();i++){ q.push(i);}
        //Sort the deck
        sort(deck.begin(), deck.end());

        vector<int> ans(deck.size());
        for(int i=0;i<deck.size();i++){
            //Put deck[i] in ans at q.front() index
            ans[q.front()] = deck[i];
            q.pop();
            
            //If queue not empty push the front element to last
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};