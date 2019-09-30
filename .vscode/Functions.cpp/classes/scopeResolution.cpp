#include<iostream>
using namespace std;
class JAVAScript {
    private: int hoist,closures;
    public:
    JAVAScript(int a,int b){
        setComplexity(a);
        setDifficulty(b);
    }
    void setComplexity(int h){
        if(hoist != 1 ){
            return;
        }else{
            hoist =h;
        }
    }
    void setDifficulty(int c){
        if(closures != 1 ){
            return;
        }else{
            hoist = c;
        }
    }
    int complexity(){
        return hoist + closures;
    }
    int difficulty();
};
    int JAVAScript:: difficulty(){
        return closures - hoist;
    }
    int main(){
       JAVAScript j(10,2);
       cout<<j.difficulty()<<endl;
    }