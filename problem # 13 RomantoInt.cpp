class Solution {
public:
    int romanToInt(string s) {
       
unordered_map<char, int> map;
	map['I']=1;
	map['V']=5;
	map['X']=10;
	map['L']=50;
	map['C']=100;
	map['D']=500;
	map['M']=1000;
 

	char current;
	int s1;
	char next;
	int sum=0;
	for(int i=0; i<s.size();){
		 current=s[i];
		 next=s[i+1];
		 if((current=='I')&&(next=='V'||next=='X')){
		 	if(next=='V'){
		 	s1= map.at(next);
		 	s1=s1-map.at(current);
		 	}else{
		 	s1= map.at(next);
		 	s1=s1-map.at(current);	
		 	}
		 	sum=sum+s1;
		 	i=i+2;
		 }
		 else if((current=='X')&&(next=='L'||next=='C'))
		 {
		 	if(next=='L'){
		 		s1= map.at(next);
		 	s1=s1-map.at(current);
		 	}else{
		 	s1= map.at(next);
		 	s1=s1-map.at(current);	
		 	}
		 	sum=sum+s1;
		 	i=i+2;
		 	
		 }
		 else if((current=='C')&&(next=='D'||next=='M')){
		 	if(next=='D'){
		 		s1= map.at(next);
		 	s1=s1-map.at(current);	
		 	}else{
		 			s1= map.at(next);
		 	s1=s1-map.at(current);
		 	}
		 	
		 	sum=sum+s1;
		 	
		 	i=i+2;
		 }
else{
		 sum=sum+map.at(current);
		 i++;
		 		 }		 
		 
	}
	return sum;
		 }	 


};