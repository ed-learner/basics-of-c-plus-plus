// Complete the staircase function below.
void staircase(int n) {

    for(int i = 0; i < n; i++){

       for(int j = 0; j < n; j++){

        if(i+j >= n-1){

            cout<<"#";
        }

        else
            cout<<" ";
       }

       cout<<endl;
    }
}