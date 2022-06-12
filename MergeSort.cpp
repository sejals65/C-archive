void merge(int input[], int si, int ei){
    int mid = (si + ei)/2;
    int i = si, j = mid+1;
    int temp[ei+1]={0};
    int k = 0;
    
    while(i <= mid && j <= ei){
        if(input[i] < input[j])
            temp[k++] = input[i++];
        else
            temp[k++] = input[j++];
    }
    
    while(i <= mid){
        temp[k++] = input[i++];
    }
    
    while(j <= ei){
        temp[k++] = input[j++];
    }
    int p = 0;
    for(int i = si; i <= ei; i++)
        input[i] = temp[p++];
    
}


void mergeSort(int input[], int si, int ei){
    if(si >= ei)
        return;
    int mid = (si + ei)/2;
    mergeSort(input, si, mid);
    mergeSort(input, mid+1, ei);
    merge(input, si, ei);
}


