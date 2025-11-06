class CustomStack {
    int size;
    int top;
    int arr[];
    public CustomStack(int maxSize) {
        size = maxSize;
        top = -1;
        arr = new int[size];
    }
    
    public void push(int x) {
        if (top == size-1){
            return;
        }
        arr[++top]=x;
    }
    
    public int pop() {
        if(top==-1){
            return -1;
        }
        return arr[top--];
    }
    
    public void increment(int k, int val) {
        int m1 = Math.min(k,top+1);
        for(int i =0;i<m1;i++){
            arr[i]=arr[i]+val;
        }
    }
}

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack obj = new CustomStack(maxSize);
 * obj.push(x);
 * int param_2 = obj.pop();
 * obj.increment(k,val);
 */