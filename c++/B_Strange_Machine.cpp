    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        int n ;
        cin>>n;
        
        vector<int> ans;
        while(n--){
            int p, q, bcount=0;
            cin>>p>>q;
            vector<int> query(q);
            vector<char> machine(p);
            for(int i=0;i<p;i++){
                cin>>machine[i];
                if(machine[i] == 'B'){
                    bcount++;
                }
            }
            for(int i=0;i<q;i++){
                cin>>query[i];
            }
            if(bcount==0){
                for(int i=0; i<q;i++){
                    ans.push_back(query[i]);
                }
            }
            else{
                for(int i=0;i<query.size();i++){
                    int x = 0, time = 0;
                    for(int j=0;query[i]!=0;j++){
                        if(x == p){ x = 0; };
                        if(machine[x] == 'A'){
                            query[i] -= 1;
                        } else{
                            query[i] /= 2;
                        }
                        time++;
                        x++;

                    }
                    ans.push_back(time);
                }
            }
        }
        for(int i =  0; i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
        
    }
