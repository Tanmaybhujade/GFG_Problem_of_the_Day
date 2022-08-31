Class Solution {
public:
	vector<int> DistinctSum(vector<int>v){
	    vector<int> p(10005,0);
	    p[0]=1;
	    for(auto x:v){
	        auto np=p;
	        for(int i=0;i<p.size();i++){
	            if(p[i]){
	                np[i+x]=1;
	            }
	        }
	        p=np;
	    }
	    vector<int> a;
	    for(int i=0;i<p.size();i++){
	        if(p[i]){
	            a.push_back(i);
	        }
	    }
	    return a;
	}
};
