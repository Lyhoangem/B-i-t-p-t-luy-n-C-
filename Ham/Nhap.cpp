int mangso[100];
	int tanso[100];
	
	int dem2=1;
 for(int i=0;i<n;i++){
 	int check =1;
 	for(int j=0;j<i;j++){
 		if(arr[i] == arr[j]){
 			check=0;
 			break;
		 }
	 }
 	
 	if(check == 1){
 		int k=0;
 		while(k<dem){
 			for(int j=i+1;j<n;j++){
 			if(arr[i]==arr[j]){
 				dem2++;
			 }
		 }
		 	mangso[k]=arr[i];
		 	tanso[k]=dem2;
		 k++;
		 }
	 }
 }
 
		int so=mangso[0], max=tanso[0];
 	for(int i=0;i<dem;i++){
 		if(tanso[i]>max){
 			so=mangso[i];
 			max=tanso[i];
		 }
	 }
	
	
	cout<<so<<": "<<max;
