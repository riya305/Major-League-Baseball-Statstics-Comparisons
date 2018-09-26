#include "defns.h"
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

/*** Array of yearly data ****/
struct yearData{
   struct annual_stats *annualStats; 
};

/************** This function takes the teamStatsArr as parameter which has team statstics from start year to end year and then 
sorts it in increasing order by applying insertion sort algorithm on the given field (int and float). The parameter yearArr keeps a track of the year
when the elements in the teamStatsArr are compared and shifted so that the output can have year as well along with team name and field values ***************/
template <class T>
void insertionAlgoRangeIncOrder(struct mlb_stats *teamStatsArr, int input_size, string field, int *yearArr){
	T keyField, currField;
	char keyTeam[50];
	struct mlb_stats key;
	int i,j, keyYear,flag;
   for (i = 1; i < input_size; i++){
       strcpy(keyTeam,teamStatsArr[i].Team);
       flag=0;
       if(field=="G"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].G;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of teamStatsArr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].G >= keyField)
	       {
	       	    if(teamStatsArr[j].G==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="AB"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].AB;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].AB >= keyField)
	       {
	       	    if(teamStatsArr[j].AB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="B2"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].B2;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B2 >= keyField)
	       {
	       	    if(teamStatsArr[j].B2==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="H"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].H;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].H >= keyField)
	       {
	       	    if(teamStatsArr[j].H==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="R"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].R;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].R >= keyField)
	       {
	       	    if(teamStatsArr[j].R==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="B3"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].B3;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B3 >= keyField)
	       {
	       	    if(teamStatsArr[j].B3==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="HR"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].HR;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].HR >= keyField)
	       {
	       	    if(teamStatsArr[j].HR==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="RBI"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].RBI;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].RBI >= keyField)
	       {
	       	    if(teamStatsArr[j].RBI==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="BB"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].BB;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].BB >= keyField)
	       {
	       	    if(teamStatsArr[j].BB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="SO"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].SO;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SO >= keyField)
	       {
	       	    if(teamStatsArr[j].SO==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="SB"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].SB;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SB >= keyField)
	       {
	       	    if(teamStatsArr[j].SB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="CS"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].CS;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].CS >= keyField)
	       {
	       	    if(teamStatsArr[j].CS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="AVG"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].AVG;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].AVG >= keyField)
	       {
	       	    if(teamStatsArr[j].AVG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="OBP"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].OBP;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OBP >= keyField)
	       {
	       	    if(teamStatsArr[j].OBP==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="SLG"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].SLG;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SLG >= keyField)
	       {
	       	    if(teamStatsArr[j].SLG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="OPS"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].OPS;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OPS >= keyField)
	       {
	       	    if(teamStatsArr[j].OPS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }

		
   }

}

/************** This function takes the teamStatsArr as parameter which has team statstics from start year to end year and then
sorts it in increasing order by applying insertion sort algorithm on the given field (Team and League (string)). The yearArr parameter keep tracks of the year
when the elements in the teamStatsArr are compared and shifted so that the output can have year as well along with team name and field values.
This function uses strcmp inbuilt string function from the string library to compare the strings. ***************/ 
void insertionAlgoIncOrderRangeTeamAndLeague(struct mlb_stats *teamStatsArr, int input_size, string field, int *yearArr){

	char keyTeam[50];
	struct mlb_stats key;
	int i,j,keyYear;
	for (i = 1; i < input_size; i++)
   {

       if(field=="Team"){
       		strcpy(keyTeam,teamStatsArr[i].Team);
       		key=teamStatsArr[i];
       		keyYear=yearArr[i];

       		j = i-1;
	       	
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyTeam,teamStatsArr[j].Team)<0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   	   		yearArr[j+1]=yearArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1]=keyYear;
		}
		else if(field=="League"){

			char keyLeague[3];
			strcpy(keyLeague,teamStatsArr[i].League);
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyLeague,teamStatsArr[j].League)<0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   	   		yearArr[j+1]=yearArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1]=keyYear;
		}
   }
}

/************** This function takes the teamStatsArr as parameter which has team statstics from start year to end year and then
sorts it in decreasing order by applying insertion sort algorithm on the given field (Team and League (string)). The yearArr parameter keep tracks of the year
when the elements in the teamStatsArr are compared and shifted so that the output can have year as well along with team name and field values.
This function uses strcmp inbuilt string function from the string library to compare the strings. ***************/
void insertionAlgoDecOrderRangeTeamAndLeague(struct mlb_stats *teamStatsArr, int input_size, string field, int *yearArr){
	char keyTeam[50];
	struct mlb_stats key;
	int i,j,keyYear;
	for (i = 1; i < input_size; i++)
   {

       if(field=="Team"){
       		strcpy(keyTeam,teamStatsArr[i].Team);
       		key=teamStatsArr[i];
       		keyYear=yearArr[i];

       		j = i-1;
	       	
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyTeam,teamStatsArr[j].Team)>0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   	   		yearArr[j+1]=yearArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1]=keyYear;
		}
		else if(field=="League"){

			char keyLeague[3];
			strcpy(keyLeague,teamStatsArr[i].League);
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyLeague,teamStatsArr[j].League)>0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   	   		yearArr[j+1]=yearArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1]=keyYear;
		}
   }
}

/************** This function takes the teamStatsArr as parameter which has team statstics from start year to end year and then 
sorts it in decreasing order by applying insertion sort algorithm on the given field (int and float). The parameter yearArr keeps a track of the year
when the elements in the teamStatsArr are compared and shifted so that the output can have year as well along with team name and field values ***************/
template <class T>
void insertionAlgoRangeDecOrder(struct mlb_stats *teamStatsArr, int input_size, string field, int *yearArr){

	T keyField;
	char keyTeam[50];
	struct mlb_stats key;
	int i,j, keyYear,flag;
   for (i = 1; i < input_size; i++){
       strcpy(keyTeam,teamStatsArr[i].Team);
       flag=0;
       if(field=="G"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].G;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].G <= keyField)
	       {
	       	    if(teamStatsArr[j].G==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="AB"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].AB;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].AB <= keyField)
	       {
	       	    if(teamStatsArr[j].AB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="B2"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].B2;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B2 <= keyField)
	       {
	       	    if(teamStatsArr[j].B2==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="H"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].H;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].H <= keyField)
	       {
	       	    if(teamStatsArr[j].H==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="R"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].R;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].R <= keyField)
	       {
	       	    if(teamStatsArr[j].R==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="B3"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].B3;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B3 <= keyField)
	       {
	       	    if(teamStatsArr[j].B3==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="HR"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].HR;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].HR <= keyField)
	       {
	       	    if(teamStatsArr[j].HR==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="RBI"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].RBI;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].RBI <= keyField)
	       {
	       	    if(teamStatsArr[j].RBI==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="BB"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].BB;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].BB <= keyField)
	       {
	       	    if(teamStatsArr[j].BB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="SO"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].SO;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SO <= keyField)
	       {
	       	    if(teamStatsArr[j].SO==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="SB"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].SB;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SB <= keyField)
	       {
	       	    if(teamStatsArr[j].SB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="CS"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].CS;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].CS <= keyField)
	       {
	       	    if(teamStatsArr[j].CS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="AVG"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].AVG;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].AVG <= keyField)
	       {
	       	    if(teamStatsArr[j].AVG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="OBP"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].OBP;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OBP <= keyField)
	       {
	       	    if(teamStatsArr[j].OBP==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="SLG"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].SLG;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SLG <= keyField)
	       {
	       	    if(teamStatsArr[j].SLG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }
       else if(field=="OPS"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].OPS;
	       	key=teamStatsArr[i];
	       	keyYear=yearArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OPS <= keyField)
	       {
	       	    if(teamStatsArr[j].OPS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   	   		yearArr[j+1] = yearArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	       	   		yearArr[j+1] = yearArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
	       yearArr[j+1] = keyYear;
       }

		
   }

}

/************** This function takes the yearlyStatsArr as parameter which has team statstics from start year to end year and yearArr consisting of years 
from start year to end year and then prints the output in required format ***************/
void printIRangeSortedData(struct mlb_stats *yearlyStatsArr, int n, string field, int *yearArr){
   int i, fieldVal;
   float fieldVal2;
   string fieldVal3;

   cout << "TeamName    " << field+"   " << "Year" << endl << endl;
    for (i=0; i < n; i++)
    {
    	if(field == "G"){
    		fieldVal = yearlyStatsArr[i].G;
    		cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="RBI"){
			fieldVal=yearlyStatsArr[i].RBI;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="AB"){
			fieldVal=yearlyStatsArr[i].AB;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="R"){
			fieldVal=yearlyStatsArr[i].R;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="H"){
			fieldVal=yearlyStatsArr[i].H;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="B2"){
			fieldVal=yearlyStatsArr[i].B2;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="B3"){
			fieldVal=yearlyStatsArr[i].B3;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="HR"){
			fieldVal=yearlyStatsArr[i].HR;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="BB"){
			fieldVal=yearlyStatsArr[i].BB;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="SO"){
			fieldVal=yearlyStatsArr[i].SO;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="SB"){
			fieldVal=yearlyStatsArr[i].SB;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="CS"){
			fieldVal=yearlyStatsArr[i].CS;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="AVG"){
			fieldVal2=yearlyStatsArr[i].AVG;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal2  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="OBP"){
			fieldVal2=yearlyStatsArr[i].OBP;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal2  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="SLG"){
			fieldVal2=yearlyStatsArr[i].SLG;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal2  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="OPS"){
			fieldVal2=yearlyStatsArr[i].OPS;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal2  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="Team"){
			fieldVal3=yearlyStatsArr[i].Team;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal3  << "    " <<  yearArr[i] << endl;
		}
		else if(field=="League"){
			fieldVal3=yearlyStatsArr[i].League;
			cout<< yearlyStatsArr[i].Team << "    " << fieldVal3  << "    " <<  yearArr[i] << endl;
		}

   			
   	}
   	cout << "************" << "END" << "**************" << endl << endl;	
}

/************** This function calls insertionSortAlgo function depending on the field type using the template classes. It also prepares the
the yearlyStatsArr and yearArr as parameter to be passed in the insertionAlgo function. ***************/
void insertionSortWithRange(struct yearData yearStatsObj, string start_year, string end_year, string field, string order,int n){
	int flag=0;
	int sumTeamLen=0;
	int startYearIndex=0;

	// finds the index of the starting year and store it in variable called startYearIndex
	for(int l=0; l< n; l++){
		if(yearStatsObj.annualStats[l].year<=stoi(end_year) && yearStatsObj.annualStats[l].year>=stoi(start_year)){
			flag=1;
			sumTeamLen += yearStatsObj.annualStats[l].no_teams;
			if(yearStatsObj.annualStats[l].year==stoi(start_year))
				startYearIndex=l;
		}
		else if(l==n-1 && flag==0)
			cout << "Error: no such year" << endl;
		
	}
	if(flag==1){
			int k=0;
			int teamLen=0;
			/**** dynamic memory allocation for yearArr and yearlyStatsArr with total team length (sum of no_teams from start to end year)
			as size. ************/
			int* yearArr = new int[sumTeamLen];
			struct mlb_stats* yearlyStatsArr = new struct mlb_stats[sumTeamLen];
			int range = stoi(end_year)-stoi(start_year)+1;
			for(int i=startYearIndex; i< range+startYearIndex;i++){
				teamLen = yearStatsObj.annualStats[i].no_teams;
				// populating yearlyStatsArr and yearArr with data from yearStatsObj
				for(int j=0; j< teamLen; j++){
					yearlyStatsArr[k] = yearStatsObj.annualStats[i].stats[j];
					yearArr[k] = yearStatsObj.annualStats[i].year;
					k++;
				}
			}
			// calling the function insertionSortAlgoRange according to field type using template class T if order is increasing
			if(order=="incr"){
				if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
					|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
					insertionAlgoRangeIncOrder<int>(yearlyStatsArr,sumTeamLen,field, yearArr);
				else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
					insertionAlgoRangeIncOrder<float>(yearlyStatsArr,sumTeamLen,field, yearArr);
				else
						insertionAlgoIncOrderRangeTeamAndLeague(yearlyStatsArr,sumTeamLen,field,yearArr);
			}
			// calling the function insertionSortAlgo  according to field type using template class T if order is decreasing
			else{
				if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
					|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
					insertionAlgoRangeDecOrder<int>(yearlyStatsArr,sumTeamLen,field, yearArr);
				else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
					insertionAlgoRangeDecOrder<float>(yearlyStatsArr,sumTeamLen,field, yearArr);
				else
						insertionAlgoDecOrderRangeTeamAndLeague(yearlyStatsArr,sumTeamLen,field,yearArr);
			}

			// calling the print function to output the sorted yearlyStatsArr for the given field.
			printIRangeSortedData(yearlyStatsArr,sumTeamLen,field,yearArr);

			// deleting the dynamically allocated arrays 
			delete[] yearArr;
			delete[] yearlyStatsArr;
	}	
	
}

/************** This function takes the teamStatsArr as parameter which has team statstics for a given year and then
sorts it in increasing order by applying insertion sort algorithm on the given field (Team and League (string)).
This function uses strcmp inbuilt string function from the string library to compare the strings. ***************/
void insertionAlgoIncOrderTeamAndLeague(struct mlb_stats *teamStatsArr, int input_size, string field){
	char keyTeam[50];
	struct mlb_stats key;
	int i,j;
	for (i = 1; i < input_size; i++)
   {

       if(field=="Team"){
       		strcpy(keyTeam,teamStatsArr[i].Team);
       		key=teamStatsArr[i];
       		j = i-1;
	       	
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyTeam,teamStatsArr[j].Team)<0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
		}
		else if(field=="League"){

			char keyLeague[3];
			strcpy(keyLeague,teamStatsArr[i].League);
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyLeague,teamStatsArr[j].League)<0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
		}
   }
}

/************** This function takes the teamStatsArr as parameter which has team statstics for a given year and then 
sorts it in increasing order by applying insertion sort algorithm on the given field (int and float). ***************/
template <class T>
void insertionAlgoIncOrder(struct mlb_stats *teamStatsArr, int input_size, string field){
	T keyField;
	char keyTeam[50];
	struct mlb_stats key;
	int i,j;
	
   for (i = 1; i < input_size; i++)
   {
       strcpy(keyTeam,teamStatsArr[i].Team);
       int flag=0;
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
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
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
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
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
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="H"){
			keyField=teamStatsArr[i].H;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].H >= keyField)
	       {
	       	    if(teamStatsArr[j].H==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="B2"){
			keyField=teamStatsArr[i].B2;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B2 >= keyField)
	       {
	       	    if(teamStatsArr[j].B2==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="B3"){
			keyField=teamStatsArr[i].B3;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B3 >= keyField)
	       {
	       	    if(teamStatsArr[j].B3==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="HR"){
			keyField=teamStatsArr[i].HR;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].HR >= keyField)
	       {
	       	    if(teamStatsArr[j].HR==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="RBI"){
			keyField=teamStatsArr[i].RBI;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].RBI >= keyField)
	       {
	       	    if(teamStatsArr[j].RBI==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="BB"){
			keyField=teamStatsArr[i].BB;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].BB >= keyField)
	       {
	       	    if(teamStatsArr[j].BB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="SO"){
			keyField=teamStatsArr[i].SO;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SO >= keyField)
	       {
	       	    if(teamStatsArr[j].SO==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="SB"){
			keyField=teamStatsArr[i].SB;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SB >= keyField)
	       {
	       	    if(teamStatsArr[j].SB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="CS"){
			keyField=teamStatsArr[i].CS;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].CS >= keyField)
	       {
	       	    if(teamStatsArr[j].CS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="AVG"){
			keyField=teamStatsArr[i].AVG;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].AVG >= keyField)
	       {
	       	    if(teamStatsArr[j].AVG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="OBP"){
			keyField=teamStatsArr[i].OBP;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OBP >= keyField)
	       {
	       	    if(teamStatsArr[j].OBP==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="SLG"){
			keyField=teamStatsArr[i].SLG;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SLG >= keyField)
	       {
	       	    if(teamStatsArr[j].SLG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="OPS"){
			keyField=teamStatsArr[i].OPS;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OPS >= keyField)
	       {
	       	    if(teamStatsArr[j].OPS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		

	}
}

/************** This function takes the teamStatsArr as parameter which has team statstics for a given year and then
sorts it in decreasing order by applying insertion sort algorithm on the given field (Team and League (string)).
This function uses strcmp inbuilt string function from the string library to compare the strings. ***************/
void insertionAlgoDecOrderTeamAndLeague(struct mlb_stats *teamStatsArr, int input_size, string field){
	char keyTeam[50];
	struct mlb_stats key;
	int i,j;
	for (i = 1; i < input_size; i++)
   {

       if(field=="Team"){
       		strcpy(keyTeam,teamStatsArr[i].Team);
       		key=teamStatsArr[i];
       		j = i-1;
	       	
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyTeam,teamStatsArr[j].Team)>0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
		}
		else if(field=="League"){

			char keyLeague[3];
			strcpy(keyLeague,teamStatsArr[i].League);
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && strcmp(keyLeague,teamStatsArr[j].League)>0)
	       {  
	   	   		teamStatsArr[j+1] = teamStatsArr[j];
	   			j = j-1;
	       }
	       teamStatsArr[j+1] = key;
		}
   }
}

/************** This function takes the teamStatsArr as parameter which has team statstics for a given year and then 
sorts it in decreasing order by applying insertion sort algorithm on the given field (int and float). ***************/
template <class T>
void insertionAlgoDecOrder(struct mlb_stats *teamStatsArr, int input_size, string field){
	
	T keyField;
	char keyTeam[50];
	struct mlb_stats key;
	int i,j;
	
   for (i = 1; i < input_size; i++)
   {
       strcpy(keyTeam,teamStatsArr[i].Team);
       int flag=0;
        if(field=="G"){
       		//keyField=Object(teamStatsArr[i]+"."+field);
	       	keyField=teamStatsArr[i].G;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].G <= keyField)
	       {
	       	    if(teamStatsArr[j].G==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
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
	       while (j >= 0 && teamStatsArr[j].AB <= keyField)
	       {
	       	    if(teamStatsArr[j].G==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
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
	       while (j >= 0 && teamStatsArr[j].R <= keyField)
	       {
	       	    if(teamStatsArr[j].R==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="H"){
			keyField=teamStatsArr[i].H;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].H <= keyField)
	       {
	       	    if(teamStatsArr[j].H==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="B2"){
			keyField=teamStatsArr[i].B2;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B2 <= keyField)
	       {
	       	    if(teamStatsArr[j].B2==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="B3"){
			keyField=teamStatsArr[i].B3;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].B3 <= keyField)
	       {
	       	    if(teamStatsArr[j].B3==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="HR"){
			keyField=teamStatsArr[i].HR;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].HR <= keyField)
	       {
	       	    if(teamStatsArr[j].HR==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="RBI"){
			keyField=teamStatsArr[i].RBI;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].RBI <= keyField)
	       {
	       	    if(teamStatsArr[j].RBI==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="BB"){
			keyField=teamStatsArr[i].BB;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].BB <= keyField)
	       {
	       	    if(teamStatsArr[j].BB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="SO"){
			keyField=teamStatsArr[i].SO;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SO <= keyField)
	       {
	       	    if(teamStatsArr[j].SO==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="SB"){
			keyField=teamStatsArr[i].SB;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SB <= keyField)
	       {
	       	    if(teamStatsArr[j].SB==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="CS"){
			keyField=teamStatsArr[i].CS;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].CS <= keyField)
	       {
	       	    if(teamStatsArr[j].CS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="AVG"){
			keyField=teamStatsArr[i].AVG;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].AVG <= keyField)
	       {
	       	    if(teamStatsArr[j].AVG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="OBP"){
			keyField=teamStatsArr[i].OBP;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OBP <= keyField)
	       {
	       	    if(teamStatsArr[j].OBP==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	          if(flag==1)
	          	break;
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="SLG"){
			keyField=teamStatsArr[i].SLG;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].SLG <= keyField)
	       {
	       	    if(teamStatsArr[j].SLG==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}
		else if(field=="OPS"){
			keyField=teamStatsArr[i].OPS;
	       	key=teamStatsArr[i];
       		j = i-1;
	       	
	       	/* Move elements of arr[0..i-1], that are
	          greater than key, to one position ahead
	          of their current position */
	       while (j >= 0 && teamStatsArr[j].OPS <= keyField)
	       {
	       	    if(teamStatsArr[j].OPS==keyField){
			   	   	if(strcmp(keyTeam,teamStatsArr[j].Team)<0){
			   	   		teamStatsArr[j+1] = teamStatsArr[j];
			   			j = j-1;
			   		}
			   		else{
			   			flag=1;
			   		}
	       	   }
	       	    else{
	       	   		teamStatsArr[j+1] = teamStatsArr[j];
	           		j = j-1;
	       	    }
	       	    if(flag==1)
	       	    	break;
	          
	       }
	       teamStatsArr[j+1] = key;
		
		}

	}

}

/************** This function takes the teamStatsArr as parameter which has team statstics for the given year and 
then prints the output in required format ***************/
void printISortedData(struct mlb_stats *teamStatsArr, int n, string field){
   int i;
   int fieldVal;
   float fieldVal2;
   string fieldVal3;
   cout << "TeamName    " << field+"   "  <<  endl << endl;

   for (i=0; i < n; i++)
    {
    	if(field == "G"){
    		fieldVal = teamStatsArr[i].G;
    		cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="RBI"){
			fieldVal=teamStatsArr[i].RBI;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="AB"){
			fieldVal=teamStatsArr[i].AB;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="R"){
			fieldVal=teamStatsArr[i].R;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="H"){
			fieldVal=teamStatsArr[i].H;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="B2"){
			fieldVal=teamStatsArr[i].B2;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="B3"){
			fieldVal=teamStatsArr[i].B3;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="HR"){
			fieldVal=teamStatsArr[i].HR;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="BB"){
			fieldVal=teamStatsArr[i].BB;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="SO"){
			fieldVal=teamStatsArr[i].SO;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="SB"){
			fieldVal=teamStatsArr[i].SB;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="CS"){
			fieldVal=teamStatsArr[i].CS;
			cout<< teamStatsArr[i].Team << "    " << fieldVal  <<  endl;
		}
		else if(field=="AVG"){
			fieldVal2=teamStatsArr[i].AVG;
			cout<< teamStatsArr[i].Team << "    " << fieldVal2  <<  endl;
		}
		else if(field=="OBP"){
			fieldVal2=teamStatsArr[i].OBP;
			cout<< teamStatsArr[i].Team << "    " << fieldVal2  <<  endl;
		}
		else if(field=="SLG"){
			fieldVal2=teamStatsArr[i].SLG;
			cout<< teamStatsArr[i].Team << "    " << fieldVal2  <<  endl;
		}
		else if(field=="OPS"){
			fieldVal2=teamStatsArr[i].OPS;
			cout<< teamStatsArr[i].Team << "    " << fieldVal2  <<  endl;
		}
		else if(field=="Team"){
			fieldVal3=teamStatsArr[i].Team;
			cout<< teamStatsArr[i].Team << "    " << fieldVal3  <<  endl;
		}
		else if(field=="League"){
			fieldVal3=teamStatsArr[i].League;
			cout<< teamStatsArr[i].Team << "    " << fieldVal3  <<  endl;
		}
   			
   	}

   	cout << "************" << "END" << "**************" << endl << endl ;		

}

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void mergeIncOrderTeamAndLeague(struct mlb_stats* arr, string field, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "Team"){
    		if (strcmp(L[i].Team, R[j].Team)<0) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
    		
		}
		else if(field=="League"){
			if (strcmp(L[i].League, R[j].League)<0) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else if(strcmp(L[i].League, R[j].League)==0)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
    	
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 

 delete[] L; 
 delete[] R;

}
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void mergeDecOrderTeamAndLeague(struct mlb_stats* arr, string field, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "Team"){
    		if (strcmp(L[i].Team, R[j].Team)>0) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
    		
		}
		else if(field=="League"){
			if (strcmp(L[i].League, R[j].League)>0) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
	        else if(strcmp(L[i].League, R[j].League)==0)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
    	
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    delete[] L; 
	delete[] R;
}

/************** This function takes the teamStatsArr as parameter which has team statstics for a given year and then 
sorts it in increasing order by applying insertion sort algorithm on the given field (int and float). ***************/
template <class T>
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void mergeDecOrder(struct mlb_stats* arr, string field, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "G"){
    		if (L[i].G > R[j].G) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else if(L[i].G == R[j].G)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++;
	            } 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
    		
		}
		else if(field=="RBI"){
			if (L[i].RBI >= R[j].RBI) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].RBI == R[j].RBI)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
		        }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AB"){
			if (L[i].AB >= R[j].AB) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].AB == R[j].AB)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 

	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="R"){
			if (L[i].R > R[j].R) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].R == R[j].R)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="H"){
			if (L[i].H > R[j].H) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].H == R[j].H)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
		        }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B2"){
			if (L[i].B2 > R[j].B2) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].B2 == R[j].B2)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++;
	            } 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B3"){
			if (L[i].B3 > R[j].B3) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].B3 == R[j].B3)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++;
	            } 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="HR"){
			if (L[i].HR > R[j].HR) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].HR == R[j].HR)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="BB"){
			if (L[i].BB > R[j].BB) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].BB == R[j].BB)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SO"){
			if (L[i].SO > R[j].SO) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].SO == R[j].SO)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++;
	            } 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SB"){
			if (L[i].SB > R[j].SB) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].SB == R[j].SB)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="CS"){
			if (L[i].CS > R[j].CS) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].CS == R[j].CS)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AVG"){
			if (L[i].AVG > R[j].AVG) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].AVG == R[j].AVG)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OBP"){
			if (L[i].OBP > R[j].OBP) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].OBP == R[j].OBP)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="SLG"){
			if (L[i].SLG > R[j].SLG) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].SLG == R[j].SLG)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OPS"){
			if (L[i].OPS > R[j].OPS) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].OPS == R[j].OPS)
	        {
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
    	
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    }
	delete[] L; 
	delete[] R; 

} 

/************** This function takes the teamStatsArr as parameter which has team statstics for a given year and then 
sorts it in increasing order by applying insertion sort algorithm on the given field (int and float). ***************/
template <class T>
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void mergeIncOrder(struct mlb_stats* arr, string field, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "G"){
    		if (L[i].G < R[j].G) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else if(L[i].G == R[j].G)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        }  
	        k++; 
    		
		}
		else if(field=="RBI"){
			if (L[i].RBI < R[j].RBI) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
	        else if(L[i].RBI == R[j].RBI)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AB"){
			if (L[i].AB < R[j].AB) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else if(L[i].AB == R[j].AB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++;
	            } 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="R"){
			if (L[i].R < R[j].R) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].R == R[j].R)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="H"){
			if (L[i].H < R[j].H) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].H == R[j].H)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B2"){
			if (L[i].B2 < R[j].B2) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].B2 == R[j].B2)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++;
	            }	 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B3"){
			if (L[i].B3 < R[j].B3) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].B3 == R[j].B3)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="HR"){
			if (L[i].HR < R[j].HR) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].HR == R[j].HR)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="BB"){
			if (L[i].BB < R[j].BB) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].BB == R[j].BB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SO"){
			if (L[i].SO < R[j].SO) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].SO == R[j].SO)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SB"){
			if (L[i].SB < R[j].SB) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].SB == R[j].SB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="CS"){
			if (L[i].CS < R[j].CS) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].CS == R[j].CS)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AVG"){
			if (L[i].AVG < R[j].AVG) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
            else if(L[i].AVG == R[j].AVG)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OBP"){
			if (L[i].OBP < R[j].OBP) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].OBP == R[j].OBP)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="SLG"){
			if (L[i].SLG < R[j].SLG) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].SLG == R[j].SLG)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            j++;
	            } 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OPS"){
			if (L[i].OPS < R[j].OPS) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        }
            else if(L[i].OPS == R[j].OPS)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 

        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    delete[] L; 
	delete[] R;
} 

/************** This function calls mergeSortAlgo function depending on the field type using the template classes. ***************/
void mergeSortAlgo(struct mlb_stats *teamStatsArr, string field, string order,int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSortAlgo(teamStatsArr, field, order, l, m); 
        mergeSortAlgo(teamStatsArr, field, order, m+1, r); 
		// calling the function merge according to field type using template class T if order is increasing
		if(order=="incr"){
			if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
				|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
				mergeIncOrder<int>(teamStatsArr,field, l, m, r);
			else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
				mergeIncOrder<float>(teamStatsArr,field, l, m, r);
			else
				mergeIncOrderTeamAndLeague(teamStatsArr,field, l, m, r);
		}
		// calling the function merge according to field type using template class T if order is decreasing
		else{
			if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
				|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
				mergeDecOrder<int>(teamStatsArr,field, l, m, r);
			else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
				mergeDecOrder<float>(teamStatsArr,field, l, m, r);
			else
				mergeDecOrderTeamAndLeague(teamStatsArr,field, l, m, r);
		}
 
    } 
} 

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void mergeDecOrderTeamAndLeagueRange(struct mlb_stats* arr, string field, int l, int m, int r, int* yearArr) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
    int* yL = new int[n1];
    int* yR = new int[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i]; 
        yL[i] = yearArr[l + i]; 
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1+ j]; 
        yR[j] = yearArr[m + 1+ j]; 

    }
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "Team"){
    		if (strcmp(L[i].Team, R[j].Team)>0) 
	        { 
	            arr[k] = L[i];
                yearArr[k] = yL[i]; 
	            i++; 
	        } 
	        else
	        { 
                arr[k] = R[j]; 
	            yearArr[k] = yR[j]; 
	            j++; 
	        } 
	        k++; 
    		
		}
		else if(field=="League"){
			if (strcmp(L[i].League, R[j].League)>0) 
	        { 
	            arr[k] = L[i]; 
                yearArr[k] = yL[i]; 
	            i++; 
	        } 
	        else if(strcmp(L[i].League, R[j].League)==0)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
                    yearArr[k] = yL[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
                    yearArr[k] = yR[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
                yearArr[k] = yR[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
    	
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 

 delete[] L; 
 delete[] R;
 delete[] yL; 
 delete[] yR;

}
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void mergeIncOrderTeamAndLeagueRange(struct mlb_stats* arr, string field, int l, int m, int r, int* yearArr) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
    int* yL = new int[n1];
    int* yR = new int[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i]; 
        yL[i] = yearArr[l + i]; 
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1+ j]; 
        yR[j] = yearArr[m + 1+ j]; 

    }
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "Team"){
    		if (strcmp(L[i].Team, R[j].Team)<0) 
	        { 
	            arr[k] = L[i];
                yearArr[k] = yL[i]; 
	            i++; 
	        } 
	        else
	        { 
                arr[k] = R[j]; 
	            yearArr[k] = yR[j]; 
	            j++; 
	        } 
	        k++; 
    		
		}
		else if(field=="League"){
			if (strcmp(L[i].League, R[j].League)<0) 
	        { 
	            arr[k] = L[i]; 
                yearArr[k] = yL[i]; 
	            i++; 
	        } 
	        else if(strcmp(L[i].League, R[j].League)==0)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
                    yearArr[k] = yL[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
                    yearArr[k] = yR[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
                yearArr[k] = yR[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
    	
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 

 delete[] L; 
 delete[] R;
 delete[] yL; 
 delete[] yR;

}
/************** This function takes the teamStatsArr as parameter which has team statstics from start year to end year and then 
sorts it in decreasing order by applying merge sort algorithm on the given field (int and float). The parameter yearArr keeps a track of the year
when the elements in the teamStatsArr are compared and shifted so that the output can have year as well along with team name and field values ***************/
template <class T>
void mergeDecOrderRange(struct mlb_stats* arr, string field, int l, int m, int r, int * yearArr) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
    /* create temp year arrays */
    int* yL = new int[n1];
    int* yR = new int[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++){
        L[i] = arr[l + i]; 
        yL[i] = yearArr[l+i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1+ j]; 
    	yR[j] = yearArr[m + 1+ j];
	}
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "G"){
    		if (L[i].G > R[j].G) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
	        else if(L[i].G == R[j].G)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j];
	            yearArr[k] = yR[j]; 
	            j++; 
	        }  
	        k++; 
    		
		}
		else if(field=="RBI"){
			if (L[i].RBI > R[j].RBI) 
	        { 
	            arr[k] = L[i];
	            yearArr[k] = yL[i]; 
	            i++; 
	        }
	        else if(L[i].RBI == R[j].RBI)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AB"){
			if (L[i].AB > R[j].AB) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
	        else if(L[i].AB == R[j].AB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++;
	            } 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="R"){
			if (L[i].R > R[j].R) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].R == R[j].R)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="H"){
			if (L[i].H > R[j].H) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].H == R[j].H)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j];
	            yearArr[k] = yR[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B2"){
			if (L[i].B2 > R[j].B2) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].B2 == R[j].B2)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++;
	            }	 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B3"){
			if (L[i].B3 > R[j].B3) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].B3 == R[j].B3)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="HR"){
			if (L[i].HR > R[j].HR) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
            else if(L[i].HR == R[j].HR)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="BB"){
			if (L[i].BB > R[j].BB) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].BB == R[j].BB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SO"){
			if (L[i].SO > R[j].SO) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
            else if(L[i].SO == R[j].SO)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SB"){
			if (L[i].SB > R[j].SB) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].SB == R[j].SB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="CS"){
			if (L[i].CS > R[j].CS) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].CS == R[j].CS)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AVG"){
			if (L[i].AVG > R[j].AVG) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
            else if(L[i].AVG == R[j].AVG)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OBP"){
			if (L[i].OBP > R[j].OBP) 
	        { 
	            arr[k] = L[i];
	            yearArr[k] = yL[i]; 
	            i++; 
	        }
            else if(L[i].OBP == R[j].OBP)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="SLG"){
			if (L[i].SLG > R[j].SLG) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].SLG == R[j].SLG)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++;
	            } 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OPS"){
			if (L[i].OPS > R[j].OPS) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].OPS == R[j].OPS)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 

        arr[k] = L[i]; 
        yearArr[k] = yL[i];
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j];
        yearArr[k] = yR[j]; 
        j++; 
        k++; 
    } 
    delete[] L; 
	delete[] R;
	delete[] yL; 
	delete[] yR;
} 
/************** This function takes the teamStatsArr as parameter which has team statstics from start year to end year and then 
sorts it in increasing order by applying merge sort algorithm on the given field (int and float). The parameter yearArr keeps a track of the year
when the elements in the teamStatsArr are compared and shifted so that the output can have year as well along with team name and field values ***************/
template <class T>
void mergeIncOrderRange(struct mlb_stats* arr, string field, int l, int m, int r, int * yearArr) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    struct mlb_stats* L = new struct mlb_stats[n1];
    struct mlb_stats* R = new struct mlb_stats[n2];
    /* create temp year arrays */
    int* yL = new int[n1];
    int* yR = new int[n2];
  
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++){
        L[i] = arr[l + i]; 
        yL[i] = yearArr[l+i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1+ j]; 
    	yR[j] = yearArr[m + 1+ j];
	}
       
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

    	if(field == "G"){
    		if (L[i].G < R[j].G) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
	        else if(L[i].G == R[j].G)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j];
	            yearArr[k] = yR[j]; 
	            j++; 
	        }  
	        k++; 
    		
		}
		else if(field=="RBI"){
			if (L[i].RBI < R[j].RBI) 
	        { 
	            arr[k] = L[i];
	            yearArr[k] = yL[i]; 
	            i++; 
	        }
	        else if(L[i].RBI == R[j].RBI)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AB"){
			if (L[i].AB < R[j].AB) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
	        else if(L[i].AB == R[j].AB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++;
	            } 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="R"){
			if (L[i].R < R[j].R) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].R == R[j].R)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="H"){
			if (L[i].H < R[j].H) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].H == R[j].H)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j];
	            yearArr[k] = yR[j]; 
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B2"){
			if (L[i].B2 < R[j].B2) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].B2 == R[j].B2)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++;
	            }	 
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="B3"){
			if (L[i].B3 < R[j].B3) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].B3 == R[j].B3)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="HR"){
			if (L[i].HR < R[j].HR) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
            else if(L[i].HR == R[j].HR)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="BB"){
			if (L[i].BB < R[j].BB) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].BB == R[j].BB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SO"){
			if (L[i].SO < R[j].SO) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
            else if(L[i].SO == R[j].SO)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="SB"){
			if (L[i].SB < R[j].SB) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].SB == R[j].SB)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
		        }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="CS"){
			if (L[i].CS < R[j].CS) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].CS == R[j].CS)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
			
		}
		else if(field=="AVG"){
			if (L[i].AVG < R[j].AVG) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        } 
            else if(L[i].AVG == R[j].AVG)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        }
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OBP"){
			if (L[i].OBP < R[j].OBP) 
	        { 
	            arr[k] = L[i];
	            yearArr[k] = yL[i]; 
	            i++; 
	        }
            else if(L[i].OBP == R[j].OBP)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i];
		            yearArr[k] = yL[i]; 
		            i++;
	            }
	            else{
		            arr[k] = R[j];
		            yearArr[k] = yR[j]; 
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="SLG"){
			if (L[i].SLG < R[j].SLG) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].SLG == R[j].SLG)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
	            }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++;
	            } 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
		else if(field=="OPS"){
			if (L[i].OPS < R[j].OPS) 
	        { 
	            arr[k] = L[i]; 
	            yearArr[k] = yL[i];
	            i++; 
	        }
            else if(L[i].OPS == R[j].OPS)
	        { 
	        	if(strcmp(L[i].Team,R[j].Team)<=0){
		            arr[k] = L[i]; 
		            yearArr[k] = yL[i];
		            i++;
		        }
	            else{
		            arr[k] = R[j]; 
		            yearArr[k] = yR[j];
		            j++; 
	            }
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            yearArr[k] = yR[j];
	            j++; 
	        } 
	        k++; 
		}
       
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 

        arr[k] = L[i]; 
        yearArr[k] = yL[i];
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j];
        yearArr[k] = yR[j]; 
        j++; 
        k++; 
    } 
    delete[] L; 
	delete[] R;
	delete[] yL; 
	delete[] yR;
} 

/************** This function calls mergeSortAlgoRange function depending on the field type using the template classes. ***************/
void mergeSortAlgoRange(struct mlb_stats *teamStatsArr, string field, string order,int l, int r, int *yearArr) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSortAlgoRange(teamStatsArr, field, order, l, m, yearArr); 
        mergeSortAlgoRange(teamStatsArr, field, order, m+1, r, yearArr); 
		// calling the function merge according to field type using template class T if order is increasing
		if(order=="incr"){
			if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
				|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
				mergeIncOrderRange<int>(teamStatsArr,field, l, m, r, yearArr);
			else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
				mergeIncOrderRange<float>(teamStatsArr,field, l, m, r, yearArr);
			else
				mergeIncOrderTeamAndLeagueRange(teamStatsArr,field, l, m, r, yearArr);
		}
		// calling the function merge according to field type using template class T if order is decreasing
		else{
			if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
				|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
				mergeDecOrderRange<int>(teamStatsArr,field, l, m, r, yearArr);
			else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
				mergeDecOrderRange<float>(teamStatsArr,field, l, m, r, yearArr);
			else
				mergeDecOrderTeamAndLeagueRange(teamStatsArr,field, l, m, r, yearArr);
		}
 
    } 
}

/************** This function calls insertionSortAlgo function depending on the field type using the template classes. It also prepares the
the yearlyStatsArr and yearArr as parameter to be passed in the insertionAlgo function. ***************/
void mergeSortWithRange(struct yearData yearStatsObj, string start_year, string end_year, string field, string order,int n){
	int flag=0;
	int sumTeamLen=0;
	int startYearIndex=0;

	// finds the index of the starting year and store it in variable called startYearIndex
	for(int l=0; l< n; l++){
		if(yearStatsObj.annualStats[l].year<=stoi(end_year) && yearStatsObj.annualStats[l].year>=stoi(start_year)){
			flag=1;
			sumTeamLen += yearStatsObj.annualStats[l].no_teams;
			if(yearStatsObj.annualStats[l].year==stoi(start_year))
				startYearIndex=l;
		}
		else if(l==n-1 && flag==0)
			cout << "Error: no such year" << endl;
		
	}
	if(flag==1){
			int k=0;
			int teamLen=0;
			/**** dynamic memory allocation for yearArr and yearlyStatsArr with total team length (sum of no_teams from start to end year)
			as size. ************/
			int* yearArr = new int[sumTeamLen];
			struct mlb_stats* yearlyStatsArr = new struct mlb_stats[sumTeamLen];
			int range = stoi(end_year)-stoi(start_year)+1;
			for(int i=startYearIndex; i< range+startYearIndex;i++){
				teamLen = yearStatsObj.annualStats[i].no_teams;
				// populating yearlyStatsArr and yearArr with data from yearStatsObj
				for(int j=0; j< teamLen; j++){
					yearlyStatsArr[k] = yearStatsObj.annualStats[i].stats[j];
					yearArr[k] = yearStatsObj.annualStats[i].year;
					k++;
				}
			}
			// struct mlb_stats *teamStatsArr = yearStatsObj.annualStats[i].stats;
			mergeSortAlgoRange(yearlyStatsArr,field,order,0,sumTeamLen-1,yearArr);
				// calling the print function to output the sorted team Stats Array for the given field.
			// calling the print function to output the sorted yearlyStatsArr for the given field.
			printIRangeSortedData(yearlyStatsArr,sumTeamLen,field,yearArr);

			// deleting the dynamically allocated arrays 
			delete[] yearArr;
			delete[] yearlyStatsArr;
	}	
	
}



/************** This function calls mergeSortAlgo function depending on the field type using the template classes. ***************/
void mergeSort(struct yearData yearStatsObj, string year, string field, string order,int n){
	int flag=0;
	for(int i=0; i< n; i++){
		if(yearStatsObj.annualStats[i].year==stoi(year)){
			flag=1;
			int teamLen = yearStatsObj.annualStats[i].no_teams;
			int l=0;
			int r=teamLen-1;
			struct mlb_stats *teamStatsArr = yearStatsObj.annualStats[i].stats;
			mergeSortAlgo(teamStatsArr,field,order,l,r);
				// calling the print function to output the sorted team Stats Array for the given field.
			printISortedData(teamStatsArr,teamLen,field);
			}
			else if(flag==1)
				break;
			// if the loop has reached to its end and no such given year if found then print: "No such year"
			else if(i==n-1 && flag==0)
				cout << "Error: no such year\n";
	}

}



/************** This function calls insertionSortAlgo function depending on the field type using the template classes. ***************/
void insertionSort(struct yearData yearStatsObj, string year, string field, string order,int n){
	int flag=0;
	for(int i=0; i< n; i++){
		if(yearStatsObj.annualStats[i].year==stoi(year)){
			flag=1;
			int teamLen = yearStatsObj.annualStats[i].no_teams;
			// calling the function insertionSortAlgo according to field type using template class T if order is increasing
				if(order=="incr"){
					if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
						|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
						insertionAlgoIncOrder<int>(yearStatsObj.annualStats[i].stats,teamLen,field);
					else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
						insertionAlgoIncOrder<float>(yearStatsObj.annualStats[i].stats,teamLen,field);
					else
							insertionAlgoIncOrderTeamAndLeague(yearStatsObj.annualStats[i].stats,teamLen,field);
				}
				// calling the function insertionSortAlgo according to field type using template class T if order is decreasing
				else{
					if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
						|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
						insertionAlgoDecOrder<int>(yearStatsObj.annualStats[i].stats,teamLen,field);
					else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
						insertionAlgoDecOrder<float>(yearStatsObj.annualStats[i].stats,teamLen,field);
					else
							insertionAlgoDecOrderTeamAndLeague(yearStatsObj.annualStats[i].stats,teamLen,field);
				}

				// calling the print function to output the sorted team Stats Array for the given field.
				printISortedData(yearStatsObj.annualStats[i].stats,teamLen,field);
			}
			else if(flag==1)
				break;
			// if the loop has reached to its end and no such given year if found then print: "No such year"
			else if(i==n-1 && flag==0)
				cout << "Error: no such year\n";
	}

}



/************** This function takes the sorted teamStatsArr as parameter which has team statstics for the given year and then it
calculates the max, min, average, and median values of the array and prints them in required format ***************/
void printISelectedData(struct mlb_stats *teamStatsArr, int n, string field, string select, string year){
   int i;
   int fieldVal=0;
   float fieldVal2=0;
   string fieldVal3;

   if(select== "max"){
   /*** prints the maximum value of the given field if the multiple teams have the maximum value then prints all the teams
	with that value. ***/
   		int i=n-1;
		if(field == "G"){
    		fieldVal = teamStatsArr[n-1].G;
			while(fieldVal==teamStatsArr[i].G && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].G << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="RBI"){
			fieldVal=teamStatsArr[n-1].RBI;
			while(fieldVal==teamStatsArr[i].RBI && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].RBI << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="AB"){
			fieldVal=teamStatsArr[n-1].AB;
			while(fieldVal==teamStatsArr[i].AB && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].AB << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="R"){
			fieldVal=teamStatsArr[n-1].R;
			while(fieldVal==teamStatsArr[i].R && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].R << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="H"){
			fieldVal=teamStatsArr[n-1].H;
			while(fieldVal==teamStatsArr[i].H && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].H << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="B2"){
			fieldVal=teamStatsArr[n-1].B2;
			while(fieldVal==teamStatsArr[i].B2 && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].B2 << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="B3"){
			fieldVal=teamStatsArr[n-1].B3;
			while(fieldVal==teamStatsArr[i].B3 && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].B3 << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="HR"){
			fieldVal=teamStatsArr[n-1].HR;
			while(fieldVal==teamStatsArr[i].HR && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].HR << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="BB"){
			fieldVal=teamStatsArr[n-1].BB;
			while(fieldVal==teamStatsArr[i].BB && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].BB << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="SO"){
			fieldVal=teamStatsArr[n-1].SO;
			while(fieldVal==teamStatsArr[i].SO && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].SO << "    " << teamStatsArr[i].Team << endl;
				i--;
			}

		}
		else if(field=="SB"){
			fieldVal=teamStatsArr[n-1].SB;
			while(fieldVal==teamStatsArr[i].SB && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].SB << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="CS"){
			fieldVal=teamStatsArr[n-1].CS;
			while(fieldVal==teamStatsArr[i].CS && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].CS << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="AVG"){
			fieldVal2=teamStatsArr[n-1].AVG;
			while(fieldVal2==teamStatsArr[i].AVG && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].AVG << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="OBP"){
			fieldVal2=teamStatsArr[n-1].OBP;
			while(fieldVal2==teamStatsArr[i].OBP && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].OBP << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="SLG"){
			fieldVal2=teamStatsArr[n-1].SLG;
			while(fieldVal2==teamStatsArr[i].SLG && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].SLG << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="OPS"){
			fieldVal2=teamStatsArr[n-1].OPS;
			while(fieldVal2==teamStatsArr[i].OPS && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].OPS << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="Team"){
			while((strcmp(teamStatsArr[n-1].Team,teamStatsArr[i].Team)==0) && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].Team << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
		else if(field=="League"){
			while((strcmp(teamStatsArr[n-1].League,teamStatsArr[i].League)==0) && i>=0){
				cout << field << "    " << year << "    " << teamStatsArr[i].League << "    " << teamStatsArr[i].Team << endl;
				i--;
			}
		}
   }
   else if(select=="min"){

   	cout << "Field  " << "Year  " << "Min  " << "TeamName  " << endl;

	/*** prints the minimum value of the given field if the multiple teams have the minimum value then prints all the teams
	with that value. ***/
   		int i=0;
		if(field == "G"){
    		fieldVal = teamStatsArr[0].G;
			while(fieldVal==teamStatsArr[i].G && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].G << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="RBI"){
			fieldVal=teamStatsArr[0].RBI;
			while(fieldVal==teamStatsArr[i].RBI && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].RBI << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="AB"){
			fieldVal=teamStatsArr[0].AB;
			while(fieldVal==teamStatsArr[i].AB && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].AB << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="R"){
			fieldVal=teamStatsArr[0].R;
			while(fieldVal==teamStatsArr[i].R && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].R << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="H"){
			fieldVal=teamStatsArr[0].H;
			while(fieldVal==teamStatsArr[i].H && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].H << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="B2"){
			fieldVal=teamStatsArr[0].B2;
			while(fieldVal==teamStatsArr[i].B2 && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].B2 << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="B3"){
			fieldVal=teamStatsArr[0].B3;
			while(fieldVal==teamStatsArr[i].B3 && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].B3 << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="HR"){
			fieldVal=teamStatsArr[0].HR;
			while(fieldVal==teamStatsArr[i].HR && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].HR << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="BB"){
			fieldVal=teamStatsArr[0].BB;
			while(fieldVal==teamStatsArr[i].BB && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].BB << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="SO"){
			fieldVal=teamStatsArr[0].SO;
			while(fieldVal==teamStatsArr[i].SO && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].SO << "    " << teamStatsArr[i].Team << endl;
				i++;
			}

		}
		else if(field=="SB"){
			fieldVal=teamStatsArr[0].SB;
			while(fieldVal==teamStatsArr[i].SB && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].SB << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="CS"){
			fieldVal=teamStatsArr[0].CS;
			while(fieldVal==teamStatsArr[i].CS && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].CS << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="AVG"){
			fieldVal2=teamStatsArr[0].AVG;
			while(fieldVal2==teamStatsArr[i].AVG && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].AVG << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="OBP"){
			fieldVal2=teamStatsArr[0].OBP;
			while(fieldVal2==teamStatsArr[i].OBP && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].OBP << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="SLG"){
			fieldVal2=teamStatsArr[0].SLG;
			while(fieldVal2==teamStatsArr[i].SLG && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].SLG << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="OPS"){
			fieldVal2=teamStatsArr[0].OPS;
			while(fieldVal2==teamStatsArr[i].OPS && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].OPS << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="Team"){
			while((strcmp(teamStatsArr[0].Team,teamStatsArr[i].Team)==0) && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].Team << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		else if(field=="League"){
			while((strcmp(teamStatsArr[0].League,teamStatsArr[i].League)==0) && i<n){
				cout << field << "    " << year << "    " << teamStatsArr[i].League << "    " << teamStatsArr[i].Team << endl;
				i++;
			}
		}
		
   }
   else if(select=="median"){
   		int median;
   		if(n%2==0)
   			median=n/2 - 1;
   		else
   			median=(n-1)/2;

   		cout << "Field  " << "Year  " << "Median  " << "TeamName  " << endl;

    	if(field == "G"){
    		fieldVal = teamStatsArr[median].G;
		}
		else if(field=="RBI"){
			fieldVal=teamStatsArr[median].RBI;
		}
		else if(field=="AB"){
			fieldVal=teamStatsArr[median].AB;
		}
		else if(field=="R"){
			fieldVal=teamStatsArr[median].R;
		}
		else if(field=="H"){
			fieldVal=teamStatsArr[median].H;
		}
		else if(field=="B2"){
			fieldVal=teamStatsArr[median].B2;
		}
		else if(field=="B3"){
			fieldVal=teamStatsArr[median].B3;
		}
		else if(field=="HR"){
			fieldVal=teamStatsArr[median].HR;
		}
		else if(field=="BB"){
			fieldVal=teamStatsArr[median].BB;
		}
		else if(field=="SO"){
			fieldVal=teamStatsArr[median].SO;
		}
		else if(field=="SB"){
			fieldVal=teamStatsArr[median].SB;
		}
		else if(field=="CS"){
			fieldVal=teamStatsArr[median].CS;
		}
		else if(field=="AVG"){
			fieldVal2=teamStatsArr[median].AVG;
		}
		else if(field=="OBP"){
			fieldVal2=teamStatsArr[median].OBP;
		}
		else if(field=="SLG"){
			fieldVal2=teamStatsArr[median].SLG;
		}
		else if(field=="OPS"){
			fieldVal2=teamStatsArr[median].OPS;
		}
		else if(field=="Team"){
			fieldVal3=teamStatsArr[median].Team;
		}
		else if(field=="League"){
			fieldVal3=teamStatsArr[median].League;
		}
		if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
			|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
			cout << field << "    " << year << "    " << fieldVal << "    " << teamStatsArr[median].Team << endl;
		else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
			cout << field << "    " << year << "    " << fieldVal2 << "    " << teamStatsArr[median].Team << endl;
		else
			cout << field << "    " << year << "    " << fieldVal3 << "    " << teamStatsArr[median].Team << endl;


   }
   else if(select=="average"){

   	cout << "Field  " << "Year  " << "	Average" << endl;

   		for (i=0; i < n; i++)
    {
    	if(field == "G"){
    		fieldVal += teamStatsArr[i].G;
		}
		else if(field=="RBI"){
			fieldVal+=teamStatsArr[i].RBI;
		}
		else if(field=="AB"){
			fieldVal+=teamStatsArr[i].AB;
		}
		else if(field=="R"){
			fieldVal+=teamStatsArr[i].R;
		}
		else if(field=="H"){
			fieldVal+=teamStatsArr[i].H;
		}
		else if(field=="B2"){
			fieldVal+=teamStatsArr[i].B2;
		}
		else if(field=="B3"){
			fieldVal+=teamStatsArr[i].B3;
		}
		else if(field=="HR"){
			fieldVal+=teamStatsArr[i].HR;
		}
		else if(field=="BB"){
			fieldVal+=teamStatsArr[i].BB;
		}
		else if(field=="SO"){
			fieldVal+=teamStatsArr[i].SO;
		}
		else if(field=="SB"){
			fieldVal+=teamStatsArr[i].SB;
		}
		else if(field=="CS"){
			fieldVal+=teamStatsArr[i].CS;
		}
		else if(field=="AVG"){
			fieldVal2+=teamStatsArr[i].AVG;
		}
		else if(field=="OBP"){
			fieldVal2+=teamStatsArr[i].OBP;
		}
		else if(field=="SLG"){
			fieldVal2+=teamStatsArr[i].SLG;
		}
		else if(field=="OPS"){
			fieldVal2+=teamStatsArr[i].OPS;
		}
   			
   	}
   	float average;
   	if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
			|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS"){
   		average = float(fieldVal)/n;
   	}	
	else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" ){
		average = float(fieldVal2)/n;
   }
   	cout << field << "    " << year << "    " << average << endl;
		
	}
	cout << "************" << "END" << "**************" << endl << endl ;

}

/*************** This function calls increasing order insertion sort on team stats array for the given year and then pass this sorted
array to the print function to get the required output according to the given select command. *******************/
void ifind(struct yearData yearStatsObj, string year, string field, string select, int n){
	int flag=0;
	for(int i=0; i< n; i++){
		if(yearStatsObj.annualStats[i].year==stoi(year)){
			flag=1;
			int teamLen = yearStatsObj.annualStats[i].no_teams;

			// calling the function increasing insertionSortAlgo according to field type using template class T
			if(field=="G"|| field=="AB" || field=="R" || field=="H"|| field=="B2"|| field=="B3"|| field=="HR" 
				|| field=="RBI"|| field=="BB"|| field=="SO"|| field=="SB"|| field=="CS")
				insertionAlgoIncOrder<int>(yearStatsObj.annualStats[i].stats,teamLen,field);
			else if(field=="AVG"|| field=="OBP" || field=="SLG" || field=="OPS" )
				insertionAlgoIncOrder<float>(yearStatsObj.annualStats[i].stats,teamLen,field);
			else
				insertionAlgoIncOrderTeamAndLeague(yearStatsObj.annualStats[i].stats,teamLen,field);

			// calling the print function to output the sorted team stats Array for the given field.	
			printISelectedData(yearStatsObj.annualStats[i].stats,teamLen,field, select, year);
		}
		else if(flag==1)
			break;
		// if the loop has reached to its end and no such given year if found then print: "No such year"
		else if(i==n-1 && flag==0)
			cout << "Error: no such year\n";
		
	}

}

/*************** This function calls increasing order merge sort on team stats array for the given year and then pass this sorted
array to the print function to get the required output according to the given select command. *******************/
void mfind(struct yearData yearStatsObj, string year, string field, string select, int n){
	int flag=0;
	for(int i=0; i< n; i++){
		if(yearStatsObj.annualStats[i].year==stoi(year)){
			flag=1;
			int teamLen = yearStatsObj.annualStats[i].no_teams;
			int l=0;
			int r=teamLen-1;
			struct mlb_stats *teamStatsArr = yearStatsObj.annualStats[i].stats;
			mergeSortAlgo(teamStatsArr,field,"incr",l,r);
				// calling the print function to output the sorted team Stats Array for the given field.
			printISelectedData(teamStatsArr,teamLen,field,select,year);
			}
			else if(flag==1)
				break;
			// if the loop has reached to its end and no such given year if found then print: "No such year"
			else if(i==n-1 && flag==0)
				cout << "Error: no such year\n";
	}

}

int main(){
	int n;
	int c;
	cin >> n;
	// dynamic allocation of yearDataArr with input size of n.
	struct annual_stats* yearDataArr = new struct annual_stats[n];
	struct yearData yearStatsObj;
	yearStatsObj.annualStats = yearDataArr;
	for(int i=0; i<n; i++){
		int year, no_teams;
		// taking input for the fields of struct annualStats
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
			// taking input for the fields of struct mlb_stats
			scanf (" %[^\n^\t]s",  annualStatObj.stats[j].Team);
			scanf (" %[^\n^\t]s",  annualStatObj.stats[j].League);
			cin >> annualStatObj.stats[j].G;
			cin >> annualStatObj.stats[j].AB;
			cin >> annualStatObj.stats[j].R;
			cin >> annualStatObj.stats[j].H;
			cin >> annualStatObj.stats[j].B2;
			cin >> annualStatObj.stats[j].B3;
			cin >> annualStatObj.stats[j].HR;
			cin >> annualStatObj.stats[j].RBI;
			cin >> annualStatObj.stats[j].BB;
			cin >> annualStatObj.stats[j].SO;
			cin >> annualStatObj.stats[j].SB;
			cin >> annualStatObj.stats[j].CS;
			cin >> annualStatObj.stats[j].AVG;
			cin >> annualStatObj.stats[j].OBP;
			cin >> annualStatObj.stats[j].SLG;
			cin >> annualStatObj.stats[j].OPS;
		}
		yearStatsObj.annualStats[i]=annualStatObj;
	}
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

		// call the insertion sort function if the variable input range is empty.
		if(func=="isort" && range==""){
			insertionSort(yearStatsObj,year,field,order,n);
		}
		// call the insertion sort with range function if start year and end year are not empty.
		else if(func=="isort" && start_year!="" && end_year!=""){
			insertionSortWithRange(yearStatsObj,start_year,end_year,field,order,n);
		}
		// call the ifind function if the variable func has ifid as input.s
		else if(func=="ifind"){
			ifind(yearStatsObj,year,field,order,n);
		}
		// call the merge sort function if the variable input range is empty.
		if(func=="msort" && range==""){
			mergeSort(yearStatsObj,year,field,order,n);
		}
		// call the merge sort function if the variable input range is empty.
		if(func=="mfind" && range==""){
			mfind(yearStatsObj,year,field,order,n);
		}
		// call the merge sort with range function if start year and end year are not empty.
		else if(func=="msort" && start_year!="" && end_year!=""){
			mergeSortWithRange(yearStatsObj,start_year,end_year,field,order,n);
		}
	}
	// deleting the dynamically allocate yearDataArr
	delete[] yearDataArr;
	return 0;
}

