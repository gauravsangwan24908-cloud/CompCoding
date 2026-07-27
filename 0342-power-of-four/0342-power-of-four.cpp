class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0){
            return false;
        }
        while (n % 4== 0){
            n= n/4;
        }
        return n == 1;
    }
    int main (){
        int n;
        cout<<"Enter the number:";
        cin>> n;
        if (isPowerOfFour(n)){
            cout<< true;
        }
        else {
            cout<<false ;
        }
        return 0;
    }
};
