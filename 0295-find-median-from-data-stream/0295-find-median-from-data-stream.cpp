class MedianFinder {
public:
    vector<int> arr;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    double median;
    
    MedianFinder() {
        median = 0.0;
    }   
    
    void addNum(int num) {
        arr.push_back(num);
        callMedian(num);
    }
    
    void callMedian(int element){
      switch(signum(maxheap.size(),minheap.size())){
          case 0:if(element>median){
              minheap.push(element);
              median = minheap.top();
             }else{
              maxheap.push(element);
              median = maxheap.top();
            }
           break;
         case 1:if(element>median){
              minheap.push(element);
              if(minheap.size() - maxheap.size() > 1){
                  maxheap.push(minheap.top());
                  minheap.pop();
              }
              median = ((double)minheap.top() +(double)maxheap.top())/2;
              }else{
              maxheap.push(element);
              if(maxheap.size() - minheap.size() > 1){
                  minheap.push(maxheap.top());
                  maxheap.pop();
              }
              median = ((double)minheap.top() + (double)maxheap.top())/2;
             }
          break;
        case -1: if(element>median){
             maxheap.push(minheap.top());
             minheap.pop();
             minheap.push(element);
             if(minheap.size() - maxheap.size() > 1){
                  maxheap.push(minheap.top());
                  minheap.pop();
              }
             median = ((double)minheap.top() + (double)maxheap.top())/2;
            }
            else{
             maxheap.push(element);
             if(maxheap.size() - minheap.size() > 1){
                  minheap.push(maxheap.top());
                  maxheap.pop();
              }
             median = ((double)minheap.top() + (double)maxheap.top())/2;
            }
           break;
      }
    }
    
    double findMedian() {
        return median;
    }
    
    int signum(int a,int b){
        if(a == b){
            return 0;
        }else if(a>b){  
           return 1;
        }else {
            return -1;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */