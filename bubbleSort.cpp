#include <iostream>
using namespace std;

class Quizzes{
  
	private:
	int x[5];
	int size = 5;
  
  	public:
  
  	void insert(){
    cout << "\nInsert 5 integers followed by a space: ";    
		for(int i = 0; i < 5; i++){
      	cin >> x[i];
   		}
	}
	
	void display(){
	  cout << "\n\nThis is the Array; " << endl;
      for(int i = 0; i < 5; i++){
        cout << x[i] << " ";
      }
    }
    
	void search(){
      int search_no;
      int z = 0, y = 0;
      cout << "\n\nEnter the number to search for: ";
      cin >> search_no;
      for(int i = 0; i < 5; i++){
        if(search_no == x[i]){
          z = 1;
          y++;
        }
      }
      if(z == 1){
        cout << search_no << " was found " << y << " times";
      }
      else
      cout << search_no << " was not found!" << endl;
    }
    
    
    void bubblesort(){
		
		int i,j;
	   	for(j = 4; j > 1; j--){
	    	for (i = 0; i < j; i++){
	     		if(x[i] > x[i + 1]){
		      		int temp = x[i];
		      		x[i] = x[i + 1];
		      		x[i+1] = temp;
		    	}
		    }
	   	}	
	}
    
	void remove(){
	 	
		int val_to_remove;
		
		cout << "\n\nEnter the number you want to delete: ";
		cin >> val_to_remove;
		
		for(int i = 0; i < 5; i++){	
			if(val_to_remove == x[i]){
		  		for(int j = i; j < 5; j++){
		  		x[j] = x[j+1];
				break;
		  		}			  	   
			}
		}
		size --;	
	}	                   
};

int main() {
	
	Quizzes s1;
	s1.insert();
	s1.bubblesort();
	s1.display();
	s1.search();
	s1.bubblesort();
	s1.display();
	
	return 0;
}