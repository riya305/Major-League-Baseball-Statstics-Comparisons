#include "defns.h"
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

struct yearData{
   struct annual_stats *annualStats; // Array size of statistics depends on number of teams in the given year
};
struct yearData yearStatsObj;
template <class T>
void insertionAlgoRangeIncOrder(struct annual_stats *yearlyStatsArr, int input_size, string field){
	T keyField, currField;
	char keyTeam[50];
	struct annual_stats key;
	int i,j;

   for (i = 1; i < input_size; i++)
   {
   	   struct mlb_stats *teamStatsArr = yearlyStatsArr[i].stats;
       strcpy(keyTeam,teamStatsArr[i].Team);
       
       if(field=="G"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].G;
	       	key=yearlyStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].G >= keyField)
	       {
	       	    if(teamStatsArr[j].G==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		yearlyStatsArr[j+1] = yearlyStatsArr[j];
			   			j = j-1;
			   		}
	       	   }
	       	    else{
	       	   		yearlyStatsArr[j+1] = yearlyStatsArr[j];
	           		j = j-1;
	       	    }
	          
	       }
	       yearlyStatsArr[j+1] = key;
       }
       	
		// else if(field=="AB"){
		// 	keyField=teamStatsArr[i].AB;
	 //       	key=teamStatsArr[i];
  //      		j = i-1;
	       	
	 //       	/* Move elements of arr[0..i-1], that are
	 //          greater than key, to one position ahead
	 //          of their current position */
	 //       while (j >= 0 && teamStatsArr[j].AB >= keyField)
	 //       {
	 //       	    if(teamStatsArr[j].G==keyField){
		// 	   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
		// 	   	   		teamStatsArr[j+1] = teamStatsArr[j];
		// 	   			j = j-1;
		// 	   		}
	 //       	   }
	 //       	    else{
	 //       	   		teamStatsArr[j+1] = teamStatsArr[j];
	 //           		j = j-1;
	 //       	    }
	          
	 //       }
	 //       teamStatsArr[j+1] = key;
		// }
		// else if(field=="R"){
		// 	keyField=teamStatsArr[i].R;
	 //       	key=teamStatsArr[i];
  //      		j = i-1;
	       	
	 //       	/* Move elements of arr[0..i-1], that are
	 //          greater than key, to one position ahead
	 //          of their current position */
	 //       while (j >= 0 && teamStatsArr[j].R >= keyField)
	 //       {
	 //       	    if(teamStatsArr[j].R==keyField){
		// 	   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
		// 	   	   		teamStatsArr[j+1] = teamStatsArr[j];
		// 	   			j = j-1;
		// 	   		}
	 //       	   }
	 //       	    else{
	 //       	   		teamStatsArr[j+1] = teamStatsArr[j];
	 //           		j = j-1;
	 //       	    }
	          
	 //       }
	 //       teamStatsArr[j+1] = key;
		// }
		// else if(field=="RBI"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="H"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="B2"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="B3"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="HR"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="BB"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="SO"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="SB"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="CS"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="AVG"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="OBP"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="SLG"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
		// else if(field=="OPS"){
		// 	keyField=teamStatsArr[i].G;
	 //       	currField=teamStatsArr[j].G;
		// }
       
   }

}
template <class T>
void insertionAlgoRangeDecOrder(struct annual_stats *yearlyStatsArr, int input_size, string field){
	// T key;
	// int i,j;
 //   for (i = 1; i < input_size; i++)
 //   {
 //       key = arr[i];
 //       j = i-1;
 
 //        Move elements of arr[0..i-1], that are
 //          lesser than key, to one position ahead
 //          of their current position 
 //       while (j >= 0 && arr[j] < key)
 //       {
 //           arr[j+1] = arr[j];
 //           j = j-1;
 //       }
 //       arr[j+1] = key;
 //   }

}

void printIRangeSortedData(struct annual_stats *yearlyStatsArr, int n, string field)
{
   int i;
   cout << "Team    " << field+"   " << "Year";
   cout << "\n";
   for (i=0; i < n; i++)
    {
       	cout<< yearlyStatsArr[i].stats[i].Team << "    " << yearlyStatsArr[i].stats[i].G << "    " << yearlyStatsArr[i].year;
       	cout << "\n";
   	}
}

template <class T>
void insertionAlgoIncOrder(struct mlb_stats *teamStatsArr, int input_size, string field){
	T keyField, currField;
	char keyTeam[50];
	struct mlb_stats key;
	int i,j;
   for (i = 1; i < input_size; i++)
   {
       strcpy(keyTeam,teamStatsArr[i].Team);
       
       if(field=="G"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].G;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].G >= keyField)
	       {
	       	    if(teamStatsArr[j].G==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          
	       }
	       teamStatsArr[j+1] = key;
       }
       	
		else if(field=="AB"){
			keyField=teamStatsArr[i].AB;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].AB >= keyField)
	       {
	       	    if(teamStatsArr[j].G==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          
	       }
	       teamStatsArr[j+1] = key;
		}
		else if(field=="R"){
			keyField=teamStatsArr[i].R;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].R >= keyField)
	       {
	       	    if(teamStatsArr[j].R==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          
	       }
	       teamStatsArr[j+1] = key;
		}
		else if(field=="RBI"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="H"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="B2"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="B3"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="HR"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="BB"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="SO"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="SB"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="CS"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="AVG"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="OBP"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="SLG"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
		else if(field=="OPS"){
			keyField=teamStatsArr[i].G;
	       	currField=teamStatsArr[j].G;
		}
       
   }

}
template <class T>
void insertionAlgoDecOrder(struct mlb_stats *teamStatsArr, int input_size, string field){
	// T key;
	// int i,j;
 //   for (i = 1; i < input_size; i++)
 //   {
 //       key = arr[i];
 //       j = i-1;
 
 //        Move elements of arr[0..i-1], that are
 //          lesser than key, to one position ahead
 //          of their current position 
 //       while (j >= 0 && arr[j] < key)
 //       {
 //           arr[j+1] = arr[j];
 //           j = j-1;
 //       }
 //       arr[j+1] = key;
 //   }

}

void printISortedData(struct mlb_stats *teamStatsArr, int n, string field)
{
   int i;
   cout << "Team    " << field+"   ";
   cout << "\n";
   for (i=0; i < n; i++)
    {
       	cout<< teamStatsArr[i].Team << "    " << teamStatsArr[i].G;
       	cout << "\n";
   	}
}


void insertionSort(string year, string field, string order,int n){
	int flag=0;
	for(int i=0; i< n; i++){
		if(yearStatsObj.annualStats[i].year==stoi(year)){
			flag=1;
			int teamLen = yearStatsObj.annualStats[i].no_teams;
			
				if(order=="incr"){
					if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
						|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
						insertionAlgoIncOrder<int>(yearStatsObj.annualStats[i].stats,teamLen,field);
					else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
						insertionAlgoIncOrder<float>(yearStatsObj.annualStats[i].stats,teamLen,field);
					// else
						// 	insertionAlgoIncOrder<char *>(yearStatsObj.annualStats[i].stats,teamLen,field);
				}
				else{
					if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
						|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
						insertionAlgoDecOrder<int>(yearStatsObj.annualStats[i].stats,teamLen,field);
					else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
						insertionAlgoDecOrder<float>(yearStatsObj.annualStats[i].stats,teamLen,field);
					// else
						// 	insertionAlgoDecOrder<char *>(yearStatsObj.annualStats[i].stats,teamLen,field);
				}
				printISortedData(yearStatsObj.annualStats[i].stats,teamLen,field);
			// }
			
		}else if(flag==1)
			break;
		else
			cout << "Error: no such year";
		
	}

}
void insertionSortWithRange(string start_year, string end_year, string field, string order,int n){
	int flag=0;
	int startYearIndex;
	int teamLen;
	int range;
	int sumTeamLen=0;
	struct annual_stats *yearlyStatsArr;
	for(int i=0; i< n; i++){
		if(yearStatsObj.annualStats[i].year==stoi(start_year)){
			flag=1;
			startYearIndex = i;
			teamLen = yearStatsObj.annualStats[i].no_teams;
			range = stoi(end_year) - stoi(start_year)+1;
			break;
		}
		else{
		cout << "Error: no such year\n";
		}
	}
	if(flag==1){
		for(int i=startYearIndex; i <range; i++){
			int k=0;
			sumTeamLen+=yearStatsObj.annualStats[i].no_teams;
			int teamLength=yearStatsObj.annualStats[i].no_teams;
			for(int j=0; j< teamLength; j++){
				yearlyStatsArr[k] = yearStatsObj.annualStats[i];
				k++;
			}
		}

		if(order=="incr"){
			if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
				|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
				insertionAlgoRangeIncOrder<int>(yearlyStatsArr,sumTeamLen,field);
			else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
				insertionAlgoRangeIncOrder<float>(yearlyStatsArr,sumTeamLen,field);
			// else
				// 	insertionAlgoIncOrder<char *>(yearlyStatsArr,sumTeamLen,field);
		}
		else{
			if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
				|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
				insertionAlgoRangeDecOrder<int>(yearlyStatsArr,sumTeamLen,field);
			else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
				insertionAlgoRangeDecOrder<float>(yearlyStatsArr,sumTeamLen,field);
			// else
				// 	insertionAlgoDecOrder<char *>(yearlyStatsArr,sumTeamLen,field);
		}
		printIRangeSortedData(yearlyStatsArr,sumTeamLen,field);
			
	}

}

int main(){
	int n;
	int c;
	cin >> n;
	struct annual_stats* yearDataArr = new struct annual_stats[n];
	yearStatsObj.annualStats = yearDataArr;
	for(int i=0; i<n; i++){
		int year, no_teams;
		struct mlb_stats mlbStatObj;
		struct annual_stats annualStatObj;
		cin >> year;
		yearStatsObj.annualStats[i].year = year;
		cin >> no_teams;
		yearStatsObj.annualStats[i].no_teams = no_teams;
		struct mlb_stats* teamArr = new struct mlb_stats[no_teams];
		yearStatsObj.annualStats[i].stats=teamArr;
		annualStatObj=yearStatsObj.annualStats[i];
		for(int j=0; j < no_teams; j++){
			scanf (" %[^\n]s",  annualStatObj.stats[j].Team);
			scanf (" %[^\n]s",  annualStatObj.stats[j].League);
			scanf ("%d",  &annualStatObj.stats[j].G);
			scanf ("%d",  &annualStatObj.stats[j].AB);
			scanf ("%d",  &annualStatObj.stats[j].R);
			scanf ("%d",  &annualStatObj.stats[j].H);
			scanf ("%d",  &annualStatObj.stats[j].B2);
			scanf ("%d",  &annualStatObj.stats[j].B3);
			scanf ("%d",  &annualStatObj.stats[j].HR);
			scanf ("%d",  &annualStatObj.stats[j].RBI);
			scanf ("%d",  &annualStatObj.stats[j].BB);
			scanf ("%d",  &annualStatObj.stats[j].SO);
			scanf ("%d",  &annualStatObj.stats[j].SB);
			scanf ("%d",  &annualStatObj.stats[j].CS);
			scanf ("%f",  &annualStatObj.stats[j].AVG);
			scanf ("%f",  &annualStatObj.stats[j].OBP);
			scanf ("%f",  &annualStatObj.stats[j].SLG);
			scanf ("%f",  &annualStatObj.stats[j].OPS);
			
		}
		yearStatsObj.annualStats[i]=annualStatObj;
		// delete[] teamArr;
	}
	// delete[] yearDataArr;
	cin >> c;
	for(int j=0; j<c; j++){
		// char command[256]; 
		string func;
		string order;
		string field;
		string year;
		string start_year;
		string end_year;
		string range;

		cin >> func;
		cin >> year;

		if(year == "range"){
			range=year;
			cin >> start_year;
			cin >> end_year;
		}

		cin >> field;
		cin >> order;
		if(func=="isort" && range==""){
			insertionSort(year,field,order,n);
		}
		else if(func=="isort" && range=="range"){
			insertionSortWithRange(start_year,end_year,field,order,n);
		}
	}
	
	return 0;
}

