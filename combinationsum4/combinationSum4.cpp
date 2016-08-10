void genCombinations() {
  //DFS
	if (target<0) {
	        return;
	}
	else {
	  if (target==0) {
	      res.push_back(r);
	  }
		else {
	      while (i<candidates.size() && target-candidates[i]>=0){
	          r.push_back(candidates[i]);
	          dfs(candidates,target-candidates[i],res,r,i);
	          i++;
	          r.pop_back();
	      }
	  }
	}
}

int combinationSum4(vector<int>& nums, int target) {
  int j, temp;
	//insertion sort
  for (int i = 0; i < nums.size(); i++) {
    j = i;
    while (j > 0 && nums[j] < nums[j-1]) {
	  	temp = nums[j];
	  	nums[j] = nums[j-1];
	  	nums[j-1] = temp;
	  	j--;
		}
	}
	for(int i = 0; i < nums.size(); i++) {
	    cout << nums[i] << endl;
	}
	vector<vector<int> > res;
	return res;
}
