#include <iostream>

#include <queue>
 using namespace;

 class Stack{
    private :
    queue<int>q1,q2;


    public :


    void push(int ele){
        q2.push(ele);



        while(!q1.empty()){

            q2.push(q1.front());
            q1.pop();



        }

        swap(q1,q2);
        }



        int pop(){

            if (isEmpty()){

                return -1;

            }


            int topEle=q1.front();
            q1.pop();
            return topEle;


        }


        int peek(){

            if (isEmpty()){

                return -1;
                
            }
        }
    }

 