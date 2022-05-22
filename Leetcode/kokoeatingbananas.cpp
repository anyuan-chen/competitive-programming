/*
    input: piles (listof int) - represents the bannanas eaten/hr
    h - the hours that koko has to eat the bannanas

    solution 1: brute force; starting from 1 bannana per hour, 
    keep on testing if she can finish the bannanas with
    the given allotment of time until she is able to
    return the lowest banana/hour she is able to complete

    solution 2: binary search; the fastest koko can eat the piles of 
    bannana in hours is equal to the number of piles available - the
    correct rate for this situation will be equal to the maximum value
    of the piles array. the slowest rate will be 1, as there is no 
    lower bound specified by the function. 
	
*/
class Solution {
    public:
	int minEatingSpeed(vector<int>&piles, int h) {
	    int low = 1;
	    int maxRate = *max_element(piles.begin(), piles.end());
	    int mid;
	    while (low <= maxRate){
		mid = low + (maxRate - low)/2;
		bool isValid = validate(piles, mid, h);
		if (isValid && !validate(piles, mid-1, h)){
		    return mid;
		}
		else if (isValid){
		    maxRate = mid -1;
		} else{
		    low = mid + 1;
		}
	    }
	    return -1;
	}
	bool validate(vector<int>&piles, int h, int maximum){
	    int total = 0;
	    for (int i : piles){
		if (h =< 0){
		    return false;
		}
		total += i/h;
		if (i%h != 0){
		    total++;
		}
	    }
	    return total <= maximum;
	}
}
