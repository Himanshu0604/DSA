vector<int> getSecondOrderElements(int n, vector<int> a) {
    int max = INT_MIN;
    int secondMax = INT_MIN;
    int min = INT_MAX;
    int secondMin = INT_MAX;
    vector<int> ans;

    for(int i = 0; i<n ; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    for(int i = 0; i<n ; i++) {
        if(a[i] > secondMax && a[i]!=max)
            secondMax = a[i];
        if(a[i] < secondMin && a[i]!= min)
            secondMin = a[i];
    }
    ans.push_back(secondMax);
    ans.push_back(secondMin);
    return ans;
}