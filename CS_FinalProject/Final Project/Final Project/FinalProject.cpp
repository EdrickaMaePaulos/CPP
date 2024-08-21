#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

	using namespace std;

const int numoffloors = 3;
const int numoneRoom = 6;
const int numtwoRoom = 6;
const int numthreeRoom = 6;
const int roomcapacity = 50;

struct Floor
{
	int numberoffloors;
	bool available;
};

struct Room 
{
	int numberone,numbertwo,numberthree, numofstudents, newnumofstudents, new2numofstudents, new3numofstudents, new4numofstudents, new5numofstudents, new6numofstudents, new7numofstudents,
	new8numofstudents, new9numofstudents;
	bool available;
	string section, time, day, newsection, newtime, newday, new2section, new2time, new2day, new3section, new3time, new3day, new4section, new4time, new4day, 
	new5section, new5time, new5day, new6section, new6time, new6day, new7section, new7time, new7day, new8section, new8time, new8day, new9section, new9time, new9day;
};
struct secondfloor
{
	int numberone,numbertwo,numberthree, numofstudents, newnumofstudents, new2numofstudents, new3numofstudents, new4numofstudents, new5numofstudents, new6numofstudents, new7numofstudents,
	new8numofstudents, new9numofstudents;
	bool available;
	string section, time, day, newsection, newtime, newday, new2section, new2time, new2day, new3section, new3time, new3day, new4section, new4time, new4day, 
	new5section, new5time, new5day, new6section, new6time, new6day, new7section, new7time, new7day, new8section, new8time, new8day, new9section, new9time, new9day;
};
struct thirdfloor
{
	int numberone,numbertwo,numberthree, numofstudents, newnumofstudents, new2numofstudents, new3numofstudents, new4numofstudents, new5numofstudents, new6numofstudents, new7numofstudents,
	new8numofstudents, new9numofstudents;
	bool available;
	string section, time, day, newsection, newtime, newday, new2section, new2time, new2day, new3section, new3time, new3day, new4section, new4time, new4day, 
	new5section, new5time, new5day, new6section, new6time, new6day, new7section, new7time, new7day, new8section, new8time, new8day, new9section, new9time, new9day;
};

void printmessage ()
{
		cout << "                           ===========================================================================" << endl;
		cout << "                                   UNIVERSITY        CLASSROOM     AVAILABILITY       SYSTEM" << endl;
		cout << "                           ===========================================================================" << endl;
		cout << endl;
}

void IntFloors(Floor floors[numoffloors])
{
	for (int i = 0; i < numoffloors; i++)
	{
	floors[i].numberoffloors = i + 1;
	}
}

void IntoneRooms(Room rooms[numoneRoom])
{
	for (int i = 0; i < numoneRoom; i++)
	{
	if (rooms[i].numberone = i + 101)
		rooms[i].available = true;
		rooms[i].day = " ";
		rooms[i].time = " ";
		rooms[i].section = " ";
		rooms[i].numofstudents;
	}
}
void InttwoRooms(secondfloor sfloor[numtwoRoom])
{
	for (int j = 0; j < numtwoRoom; j++)
	{
	if (sfloor[j].numbertwo = j + 201)
		sfloor[j].available = true;
		sfloor[j].day = " ";
		sfloor[j].time = " ";
		sfloor[j].section = " ";
		sfloor[j].numofstudents;
	}
}
void IntthreeRooms(thirdfloor place[numthreeRoom])
{
	for (int k = 0; k < numthreeRoom; k++)
		{
	if (place[k].numberthree = k + 301)
		place[k].available = true;
		place[k].day = " ";
		place[k].time = " ";
		place[k].section = " ";
		place[k].numofstudents;
	}
}
void DisplayFloors(const Floor floors[])
{
	for (int i = 0; i < numoffloors; i++)
	{
		cout << "															Floor " << floors[i].numberoffloors << " is available ";
	}
}

void DisplayoneRooms(const Room rooms[]) 
{
	int numofstudents, newnumofstudents, new2numofstudents;
    for (int i = 0; i < numoneRoom; i++) 
	{
			cout << "                                                       Room " << rooms[i].numberone << " is ";
        if (rooms[i].available) 
		{
			cout << " Available " << "\n";
        } 
		else
		{			
			cout << "Already Occupied by: "<< endl <<"\t\t\t\t\t\t\t" << rooms[i].section << " on " << rooms[i].day << " at " << rooms[i].time << " with a capacity of " << rooms[i].numofstudents << "\n";
			  if (rooms[i].newsection != "" && rooms[i].newday != "" && rooms[i].newtime != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].newsection << " on " << rooms[i].newday << " at " << rooms[i].newtime << " with a capacity of " << rooms[i].newnumofstudents << "\n";
            }
              if (rooms[i].new2section != "" && rooms[i].new2day != "" && rooms[i].new2time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new2section << " on " << rooms[i].new2day << " at " << rooms[i].new2time << " with a capacity of " << rooms[i].new2numofstudents << "\n";
			}  
			  if (rooms[i].new3section != "" && rooms[i].new3day != "" && rooms[i].new3time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new3section << " on " << rooms[i].new3day << " at " << rooms[i].new3time << " with a capacity of " << rooms[i].new3numofstudents << "\n";
			}  
		      if (rooms[i].new4section != "" && rooms[i].new4day != "" && rooms[i].new4time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new4section << " on " << rooms[i].new4day << " at " << rooms[i].new4time << " with a capacity of " << rooms[i].new4numofstudents << "\n";
			}  
			  if (rooms[i].new5section != "" && rooms[i].new5day != "" && rooms[i].new5time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new5section << " on " << rooms[i].new5day << " at " << rooms[i].new5time << " with a capacity of " << rooms[i].new5numofstudents << "\n";
			}  
			  if (rooms[i].new6section != "" && rooms[i].new6day != "" && rooms[i].new6time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new6section << " on " << rooms[i].new6day << " at " << rooms[i].new6time << " with a capacity of " << rooms[i].new6numofstudents << "\n";
			}
			  if (rooms[i].new7section != "" && rooms[i].new7day != "" && rooms[i].new7time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new7section << " on " << rooms[i].new7day << " at " << rooms[i].new7time << " with a capacity of " << rooms[i].new7numofstudents << "\n";
			}  
			  if (rooms[i].new8section != "" && rooms[i].new8day != "" && rooms[i].new8time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new8section << " on " << rooms[i].new8day << " at " << rooms[i].new8time << " with a capacity of " << rooms[i].new8numofstudents << "\n";
			}
			  if (rooms[i].new9section != "" && rooms[i].new9day != "" && rooms[i].new9time != "")
            {
                cout << "\t\t\t\t\t\t\t" << rooms[i].new9section << " on " << rooms[i].new9day << " at " << rooms[i].new9time << " with a capacity of " << rooms[i].new9numofstudents << "\n";
			}
	    }
    }
}

void DisplaytwoRooms(const secondfloor sfloor[])
{
	for (int j = 0; j < numtwoRoom; j++) 
	{
			cout << "                                                       Room " << sfloor[j].numbertwo << " is ";
        if (sfloor[j].available) 
		{
			cout << " Available " << "\n";
        } 
		else
		{
			cout << "Already Occupied by: " << " \n " <<"\t\t\t\t\t\t\t" << sfloor[j].section << " on " << sfloor[j].day << " at " << sfloor[j].time << " with a capacity of " << sfloor[j].numofstudents << "\n";
			  if (sfloor[j].newsection != "" && sfloor[j].newday != "" && sfloor[j].newtime != "")
            {
                cout <<"\t\t\t\t\t\t\t" << sfloor[j].newsection << " on " << sfloor[j].newday << " at " << sfloor[j].newtime << " with a capacity of " << sfloor[j].newnumofstudents << "\n";
            }
              if (sfloor[j].new2section != "" && sfloor[j].new2day != "" && sfloor[j].new2time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new2section << " on " << sfloor[j].new2day << " at " << sfloor[j].new2time << " with a capacity of " << sfloor[j].new2numofstudents << "\n";
			}  
			  if (sfloor[j].new3section != "" && sfloor[j].new3day != "" && sfloor[j].new3time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new3section << " on " << sfloor[j].new3day << " at " << sfloor[j].new3time << " with a capacity of " << sfloor[j].new3numofstudents << "\n";
			}  
		      if (sfloor[j].new4section != "" && sfloor[j].new4day != "" && sfloor[j].new4time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new4section << " on " << sfloor[j].new4day << " at " << sfloor[j].new4time << " with a capacity of " << sfloor[j].new4numofstudents << "\n";
			}  
			  if (sfloor[j].new5section != "" && sfloor[j].new5day != "" && sfloor[j].new5time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new5section << " on " << sfloor[j].new5day << " at " << sfloor[j].new5time << " with a capacity of " << sfloor[j].new5numofstudents << "\n";
			}  
			  if (sfloor[j].new6section != "" && sfloor[j].new6day != "" && sfloor[j].new6time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new6section << " on " << sfloor[j].new6day << " at " << sfloor[j].new6time << " with a capacity of " << sfloor[j].new6numofstudents << "\n";
			}  
			  if (sfloor[j].new7section != "" && sfloor[j].new7day != "" && sfloor[j].new7time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new7section << " on " << sfloor[j].new7day << " at " << sfloor[j].new7time << " with a capacity of " << sfloor[j].new7numofstudents << "\n";
			}  
			  if (sfloor[j].new8section != "" && sfloor[j].new8day != "" && sfloor[j].new8time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new8section << " on " << sfloor[j].new8day << " at " << sfloor[j].new8time << " with a capacity of " << sfloor[j].new8numofstudents << "\n";
			}
			  if (sfloor[j].new9section != "" && sfloor[j].new9day != "" && sfloor[j].new9time != "")
            {
                cout << "\t\t\t\t\t\t\t" << sfloor[j].new9section << " on " << sfloor[j].new9day << " at " << sfloor[j].new9time << " with a capacity of " << sfloor[j].new9numofstudents << "\n";
			}
        }
    }  
}

void DisplaythreeRooms(const thirdfloor place[])
{
	for (int k = 0; k < numthreeRoom; k++) 
	{
			cout << "                                                       Room " << place[k].numberthree << " is ";
        if (place[k].available) 
		{
			cout << " Available " << "\n";
        } 
		else
		{
			cout << "Already Occupied by: " << " \n " << "\t\t\t\t\t\t\t" << place[k].section << " on " << place[k].day << " at " << place[k].time << " with a capacity of " << place[k].numofstudents << "\n";
			  if (place[k].newsection != "" && place[k].newday != "" && place[k].newtime != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].newsection << " on " << place[k].newday << " at " << place[k].newtime << " with a capacity of " << place[k].newnumofstudents << "\n";
            }
              if (place[k].new2section != "" && place[k].new2day != "" && place[k].new2time != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].new2section << " on " << place[k].new2day << " at " << place[k].new2time << " with a capacity of " << place[k].new2numofstudents << "\n";
			}  
			  if (place[k].new3section != "" && place[k].new3day != "" && place[k].new3time != "")
            {
                 cout << "\t\t\t\t\t\t\t" << place[k].new3section << " on " << place[k].new3day << " at " << place[k].new3time << " with a capacity of " << place[k].new3numofstudents << "\n";
			}  
		      if (place[k].new4section != "" && place[k].new4day != "" && place[k].new4time != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].new4section << " on " << place[k].new4day << " at " << place[k].new4time << " with a capacity of " << place[k].new4numofstudents << "\n";
			}  
			  if (place[k].new5section != "" && place[k].new5day != "" && place[k].new5time != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].new5section << " on " << place[k].new5day << " at " << place[k].new5time << " with a capacity of " << place[k].new5numofstudents << "\n";
			}  
			  if (place[k].new6section != "" && place[k].new6day != "" && place[k].new6time != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].new6section << " on " << place[k].new6day << " at " << place[k].new6time << " with a capacity of " << place[k].new6numofstudents << "\n";
			}  
			  if (place[k].new7section != "" && place[k].new7day != "" && place[k].new7time != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].new7section << " on " << place[k].new7day << " at " << place[k].new7time << " with a capacity of " << place[k].new7numofstudents << "\n";
			}  
			  if (place[k].new8section != "" && place[k].new8day != "" && place[k].new8time != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].new8section << " on " << place[k].new8day << " at " << place[k].new8time << " with a capacity of " << place[k].new8numofstudents << "\n";
			}
			  if (place[k].new9section != "" && place[k].new9day != "" && place[k].new9time != "")
            {
                cout << "\t\t\t\t\t\t\t" << place[k].new9section << " on " << place[k].new9day << " at " << place[k].new9time << " with a capacity of " << place[k].new9numofstudents << "\n";
			}
        }
    }  
}
void Bookfloors(Floor floors[])
{
	int floorNumber;
	cout << endl;
	cout << "                                                      ===== Choose Floor =====" << endl;
	cout << endl;
	cout << "                                             [code]                             [floor]" << endl;
	cout << "                                               [1]                             1st Floor" << endl;
	cout << "                                               [2]                             2nd Floor" << endl;
	cout << "                                               [3]                             3rd Floor" << endl;
	cout << endl;
	cout << "                                              ======================================" << endl;
	cout << "                                                           Enter Floor: ";
	cin >> floorNumber;

	if(floorNumber < 1 || floorNumber > numoffloors)
	{
		cout << "Error. Room Number is not Valid" << "\n";
		return;
	}
}

void Bookrooms(Room rooms[])
{
	int roomNumber, numofstudents;
	string section, time, day;
	cout << endl;
	cout << "                                   [code]             [room]                    [day] " << endl;
	cout << "                                     [1]             Room 101                   Sunday  " << endl;
	cout << "                                     [2]             Room 102                   Monday " << endl;
	cout << "                                     [3]             Room 103                   Wednesday" << endl;
	cout << "                                     [4]             Room 104                   Thursday" << endl;
	cout << "                                     [5]             Room 105                   Friday" << endl;
	cout << "                                     [6]             Room 106                   Saturday" << endl;
	cout << endl;
	cout << "                           ===========================================================================" << endl;
	cout << "                                                      Enter Code for Room: ";
	cin >> roomNumber;

	if(roomNumber < 1 || roomNumber > numoneRoom)
	{
		cout << "Error. Room Number is not Valid" << "\n";
		return;
	}
	
    if (!rooms[roomNumber - 1].available) 
	{
        cout << "                     [ Room 10" << roomNumber << " is already Occupied, if you want to book in room " << roomNumber << " choose OPTION [3] to Book a new Schedule in Room. ]" << endl;
    } 	
    
	else 
	{
		cout << "                                                      Enter Day: ";
		cin.ignore();
		cin >> day;
		cout << "                                                      Enter Time: ";
		cin.ignore();
		getline(cin,time);
        cout << "                                                      Enter Section: ";
        getline(cin,section);
        
        do {
        cout << "                                                      Enter Capacity [1 - 50 only]: ";
        cin >> numofstudents;
	    } while (roomcapacity < numofstudents);	
	
	
        rooms[roomNumber - 1].available = false;
        rooms[roomNumber - 1].section = section;
		rooms[roomNumber - 1].day = day;
		rooms[roomNumber - 1].time = time;
		rooms[roomNumber - 1].numofstudents = numofstudents;
		cout << endl;
        cout <<"                     [ Successfully Booked Room 10" << roomNumber << " by " << section << "on " << day << " at " << time << " with a capacity of " << numofstudents << " ]\n";
		cout << endl;
    }
    
}

void Bookrooms(secondfloor sfloor[])
{
	int roomNumber, numofstudents;
	string section, time, day;
	cout << "                                   [code]             [room]                    [day] " << endl;
	cout << "                                     [1]             Room 201                   Sunday  " << endl;
	cout << "                                     [2]             Room 202                   Monday " << endl;
	cout << "                                     [3]             Room 203                   Wednesday" << endl;
	cout << "                                     [4]             Room 204                   Thursday" << endl;
	cout << "                                     [5]             Room 205                   Friday" << endl;
	cout << "                                     [6]             Room 206                   Saturday" << endl;
	cout << endl;
	cout << "                           ===========================================================================" << endl;
	cout << "                                                      Enter Code for Room: ";
	cin >> roomNumber;

	if(roomNumber < 1 || roomNumber > numoneRoom)
	{
		cout << "Error. Room Number is not Valid" << "\n";
		return;
	}
	
    if (!sfloor[roomNumber - 1].available) 
	{
        cout << "                     [ Room 20" << roomNumber << " is already Occupied, if you want to book in room " << roomNumber << " choose OPTION [3] to Book a new Schedule in Room. ]" << endl;
    } 	
    
	else 
	{
		cout << "                                                      Enter Day: ";
		cin.ignore();
		cin >> day;
		cout << "                                                      Enter Time: ";
		cin.ignore();
		getline(cin,time);
        cout << "                                                      Enter Section: ";
        getline(cin,section);
        
        do {
        cout << "                                                      Enter Capacity [1 - 50 only]: ";
        cin >> numofstudents;
	    } while (roomcapacity < numofstudents);	
	
	
        sfloor[roomNumber - 1].available = false;
        sfloor[roomNumber - 1].section = section;
		sfloor[roomNumber - 1].day = day;
		sfloor[roomNumber - 1].time = time;
		sfloor[roomNumber - 1].numofstudents = numofstudents;
       	cout << endl;
        cout <<"                     [ Successfully Booked Room 20" << roomNumber << " by " << section << "on " << day << " at " << time << " with a capacity of " << numofstudents << " ]\n";
		cout << endl;
	}
    
}

void Bookrooms(thirdfloor place[])
{
	int roomNumber, numofstudents;
	string section, time, day;
	cout << "                                   [code]             [room]                    [day] " << endl;
	cout << "                                     [1]             Room 301                   Sunday  " << endl;
	cout << "                                     [2]             Room 302                   Monday " << endl;
	cout << "                                     [3]             Room 303                   Wednesday" << endl;
	cout << "                                     [4]             Room 304                   Thursday" << endl;
	cout << "                                     [5]             Room 305                   Friday" << endl;
	cout << "                                     [6]             Room 306                   Saturday" << endl;
	cout << endl;
	cout << "                           ===========================================================================" << endl;
	cout << "                                                      Enter Code for Room: ";
	cin.ignore();
	cin >> roomNumber;

	if(roomNumber < 1 || roomNumber > numoneRoom)
	{
		cout << "                     Error. Room Number is not Valid" << "\n";
		return;
	}
	
    if (!place[roomNumber - 1].available) 
	{
        cout << "                     [ Room 30" << roomNumber << " is already Occupied, if you want to book in room " << roomNumber << " choose OPTION [3] to Book a new Schedule in Room. ]" << endl;
    } 	
	else 
	{
		cout << "                                                      Enter Day: ";
		cin.ignore();
		cin >> day;
		cout << "                                                      Enter Time: ";
		cin.ignore();
		getline(cin,time);
        cout << "                                                      Enter Section: ";
        getline(cin,section);
        
        do {
        cout << "                                                      Enter Capacity [1 - 50 only]: ";
        cin >> numofstudents;
	    } while (roomcapacity < numofstudents);	
	
	
        place[roomNumber - 1].available = false;
        place[roomNumber - 1].section = section;
		place[roomNumber - 1].day = day;
		place[roomNumber - 1].time = time;
		place[roomNumber - 1].numofstudents = numofstudents;
       	cout << endl;
       cout <<"                     [ Successfully Booked Room 30" << roomNumber << " by " << section << "on " << day << " at " << time << " with a capacity of " << numofstudents << " ]\n";
		cout << endl;
    }
}

void RebookRoom(Room rooms[]) 
{
    int roomNumber, numofstudents;
    string section, time, day;

    cout << "                                   [code]             [room]                    [day] " << endl;
    cout << "                                     [1]             Room 101                   Sunday  " << endl;
	cout << "                                     [2]             Room 102                   Monday " << endl;
	cout << "                                     [3]             Room 103                   Wednesday" << endl;
	cout << "                                     [4]             Room 104                   Thursday" << endl;
	cout << "                                     [5]             Room 105                   Friday" << endl;
	cout << "                                     [6]             Room 106                   Saturday" << endl;
	cout << endl;
	cout << "                           ===========================================================================" << endl;
	cout << "                                                      Enter Code for Room: ";
    cin >> roomNumber;

    if (roomNumber < 1 || roomNumber > numoneRoom) 
	{
        cout << "Error: Invalid Room Number." << "\n";
        return;
    }

    if (!rooms[roomNumber - 1].available) 
	{
        cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].day << " at " << rooms[roomNumber - 1].time << " with a capacity of " << rooms[roomNumber - 1].numofstudents <<" ]" << endl;
        if (rooms[roomNumber - 1].newsection != "" && rooms[roomNumber - 1].newday != "" && rooms[roomNumber - 1].newtime != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].newday << " at " << rooms[roomNumber - 1].newtime << " with a capacity of " << rooms[roomNumber - 1].newnumofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new2section != "" && rooms[roomNumber - 1].new2day != "" && rooms[roomNumber - 1].new2time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new2day << " at " << rooms[roomNumber - 1].new2time << " with a capacity of " << rooms[roomNumber - 1].new2numofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new3section != "" && rooms[roomNumber - 1].new3day != "" && rooms[roomNumber - 1].new3time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new3day << " at " << rooms[roomNumber - 1].new3time << " with a capacity of " << rooms[roomNumber - 1].new3numofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new4section != "" && rooms[roomNumber - 1].new4day != "" && rooms[roomNumber - 1].new4time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new4day << " at " << rooms[roomNumber - 1].new4time << " with a capacity of " << rooms[roomNumber - 1].new4numofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new5section != "" && rooms[roomNumber - 1].new5day != "" && rooms[roomNumber - 1].new5time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new5day << " at " << rooms[roomNumber - 1].new5time << " with a capacity of " << rooms[roomNumber - 1].new5numofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new6section != "" && rooms[roomNumber - 1].new6day != "" && rooms[roomNumber - 1].new6time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new6day << " at " << rooms[roomNumber - 1].new6time << " with a capacity of " << rooms[roomNumber - 1].new6numofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new7section != "" && rooms[roomNumber - 1].new7day != "" && rooms[roomNumber - 1].new7time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new7day << " at " << rooms[roomNumber - 1].new7time << " with a capacity of " << rooms[roomNumber - 1].new7numofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new8section != "" && rooms[roomNumber - 1].new8day != "" && rooms[roomNumber - 1].new8time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new8day << " at " << rooms[roomNumber - 1].new8time << " with a capacity of " << rooms[roomNumber - 1].new8numofstudents <<" ]" << endl;
     	}
     	if (rooms[roomNumber - 1].new9section != "" && rooms[roomNumber - 1].new9day != "" && rooms[roomNumber - 1].new9time != "") 
		{
		cout << "                     [ Room 10" << roomNumber << " is already occupied" << " this " << rooms[roomNumber - 1].new9day << " at " << rooms[roomNumber - 1].new9time << " with a capacity of " << rooms[roomNumber - 1].new9numofstudents <<" ]" << endl;
     	}
     	
		cout << "                                                      Enter Day: ";
        cin.ignore();
        getline(cin, day);
        cout << "                                                      Enter new Time: ";
        getline(cin, time);
        cout << "                                                      Enter Section Name: ";
        getline(cin, section);
        
        do {
        cout << "                                                      Enter Capacity (1 to 50 only): ";
        cin >> numofstudents;
	    }while (roomcapacity < numofstudents);
	    
	    rooms[roomNumber - 1].new9section = rooms[roomNumber - 1].new8section;
        rooms[roomNumber - 1].new9day = rooms[roomNumber - 1].new8day;
        rooms[roomNumber - 1].new9time = rooms[roomNumber - 1].new8time;
        rooms[roomNumber - 1].new9numofstudents = rooms[roomNumber - 1].new8numofstudents;
	    
	    rooms[roomNumber - 1].new8section = rooms[roomNumber - 1].new7section;
        rooms[roomNumber - 1].new8day = rooms[roomNumber - 1].new7day;
        rooms[roomNumber - 1].new8time = rooms[roomNumber - 1].new7time;
        rooms[roomNumber - 1].new8numofstudents = rooms[roomNumber - 1].new7numofstudents;
	    
	    rooms[roomNumber - 1].new7section = rooms[roomNumber - 1].new6section;
        rooms[roomNumber - 1].new7day = rooms[roomNumber - 1].new6day;
        rooms[roomNumber - 1].new7time = rooms[roomNumber - 1].new6time;
        rooms[roomNumber - 1].new7numofstudents = rooms[roomNumber - 1].new6numofstudents;
	    
	    rooms[roomNumber - 1].new6section = rooms[roomNumber - 1].new5section;
        rooms[roomNumber - 1].new6day = rooms[roomNumber - 1].new5day;
        rooms[roomNumber - 1].new6time = rooms[roomNumber - 1].new5time;
        rooms[roomNumber - 1].new6numofstudents = rooms[roomNumber - 1].new5numofstudents;
	    
	    rooms[roomNumber - 1].new5section = rooms[roomNumber - 1].new4section;
        rooms[roomNumber - 1].new5day = rooms[roomNumber - 1].new4day;
        rooms[roomNumber - 1].new5time = rooms[roomNumber - 1].new4time;
        rooms[roomNumber - 1].new5numofstudents = rooms[roomNumber - 1].new4numofstudents;

        rooms[roomNumber - 1].new4section = rooms[roomNumber - 1].new3section;
        rooms[roomNumber - 1].new4day = rooms[roomNumber - 1].new3day;
        rooms[roomNumber - 1].new4time = rooms[roomNumber - 1].new3time;
        rooms[roomNumber - 1].new4numofstudents = rooms[roomNumber - 1].new3numofstudents;

        rooms[roomNumber - 1].new3section = rooms[roomNumber - 1].new2section;
        rooms[roomNumber - 1].new3day = rooms[roomNumber - 1].new2day;
        rooms[roomNumber - 1].new3time = rooms[roomNumber - 1].new2time;
        rooms[roomNumber - 1].new3numofstudents = rooms[roomNumber - 1].new2numofstudents;

        rooms[roomNumber - 1].new2section = rooms[roomNumber - 1].newsection;
        rooms[roomNumber - 1].new2day = rooms[roomNumber - 1].newday;
        rooms[roomNumber - 1].new2time = rooms[roomNumber - 1].newtime;
        rooms[roomNumber - 1].new2numofstudents = rooms[roomNumber - 1].newnumofstudents;

        rooms[roomNumber - 1].newsection = rooms[roomNumber - 1].section;
        rooms[roomNumber - 1].newday = rooms[roomNumber - 1].day;
        rooms[roomNumber - 1].newtime = rooms[roomNumber - 1].time;
        rooms[roomNumber - 1].newnumofstudents = rooms[roomNumber - 1].numofstudents;

        rooms[roomNumber - 1].section = section;
        rooms[roomNumber - 1].day = day;
        rooms[roomNumber - 1].time = time;
        rooms[roomNumber - 1].numofstudents = numofstudents;
        

        cout << "                     [ Room 10" << roomNumber << " has a new schedule by " << section << " on " << day << " at " << time << " with a capacity of " << numofstudents << " ]" << endl;
    } 
	else 
	{
        cout << "                     [ Room 10" << roomNumber << " is available. Use 'Book Room' option for a new booking." << " ]" << endl;
    }
}

void RebookRoom(secondfloor floors[]) 
{
    int roomNumber, numofstudents;
    string section, time, day;

    cout << "                                   [code]             [room]                    [day] " << endl;
    cout << "                                     [1]             Room 201                   Sunday  " << endl;
	cout << "                                     [2]             Room 202                   Monday " << endl;
	cout << "                                     [3]             Room 203                   Wednesday" << endl;
	cout << "                                     [4]             Room 204                   Thursday" << endl;
	cout << "                                     [5]             Room 205                   Friday" << endl;
	cout << "                                     [6]             Room 206                   Saturday" << endl;
	cout << endl;
	cout << "                           ===========================================================================" << endl;
	cout << "                                                      Enter Code for Room: ";
    cin >> roomNumber;

    if (roomNumber < 1 || roomNumber > numoneRoom) 
	{
        cout << "Error: Invalid Room Number." << "\n";
        return;
    }

    if (!floors[roomNumber - 1].available) 
	{ 
        cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].day << " at " << floors[roomNumber - 1].time << " with a capacity of " << floors[roomNumber - 1].numofstudents <<" ]" << endl;
		if (floors[roomNumber - 1].newsection != "" && floors[roomNumber - 1].newday != "" && floors[roomNumber - 1].newtime != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].newday << " at " << floors[roomNumber - 1].newtime << " with a capacity of " << floors[roomNumber - 1].newnumofstudents <<" ]" << endl;
     	}
     	if (floors[roomNumber - 1].new2section != "" && floors[roomNumber - 1].new2day != "" && floors[roomNumber - 1].new2time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new2day << " at " << floors[roomNumber - 1].new2time << " with a capacity of " << floors[roomNumber - 1].new2numofstudents <<" ]" << endl;
     	}
     	if (floors[roomNumber - 1].new3section != "" && floors[roomNumber - 1].new3day != "" && floors[roomNumber - 1].new3time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new3day << " at " << floors[roomNumber - 1].new3time << " with a capacity of " << floors[roomNumber - 1].new3numofstudents <<" ]" << endl;
     	}
     	if (floors[roomNumber - 1].new4section != "" && floors[roomNumber - 1].new4day != "" && floors[roomNumber - 1].new4time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new4day << " at " << floors[roomNumber - 1].new4time << " with a capacity of " << floors[roomNumber - 1].new4numofstudents <<" ]" << endl;
     	}
		if (floors[roomNumber - 1].new5section != "" && floors[roomNumber - 1].new5day != "" && floors[roomNumber - 1].new5time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new5day << " at " << floors[roomNumber - 1].new5time << " with a capacity of " << floors[roomNumber - 1].new5numofstudents <<" ]" << endl;
     	}
		if (floors[roomNumber - 1].new6section != "" && floors[roomNumber - 1].new6day != "" && floors[roomNumber - 1].new6time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new6day << " at " << floors[roomNumber - 1].new6time << " with a capacity of " << floors[roomNumber - 1].new6numofstudents <<" ]" << endl;
     	}
     	if (floors[roomNumber - 1].new7section != "" && floors[roomNumber - 1].new7day != "" && floors[roomNumber - 1].new7time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new7day << " at " << floors[roomNumber - 1].new7time << " with a capacity of " << floors[roomNumber - 1].new7numofstudents <<" ]" << endl;
     	}
	    if (floors[roomNumber - 1].new8section != "" && floors[roomNumber - 1].new8day != "" && floors[roomNumber - 1].new8time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new8day << " at " << floors[roomNumber - 1].new8time << " with a capacity of " << floors[roomNumber - 1].new8numofstudents <<" ]" << endl;
     	}
		if (floors[roomNumber - 1].new9section != "" && floors[roomNumber - 1].new9day != "" && floors[roomNumber - 1].new9time != "") 
		{
		cout << "                     [ Room 20" << roomNumber << " is already occupied" << " this " << floors[roomNumber - 1].new9day << " at " << floors[roomNumber - 1].new9time << " with a capacity of " << floors[roomNumber - 1].new9numofstudents <<" ]" << endl;
     	}
		
		cout << "                                                      Enter Day: ";
        cin.ignore();
        getline(cin, day);
        cout << "                                                      Enter new Time: ";
        getline(cin, time);
        cout << "                                                      Enter Section Name: ";
        getline(cin, section);
        
        do {
        cout << "                                                      Enter Capacity (1 to 50 only): ";
        cin >> numofstudents;
	    }while (roomcapacity < numofstudents);
	    
	    floors[roomNumber - 1].new9section = floors[roomNumber - 1].new8section;
        floors[roomNumber - 1].new9day = floors[roomNumber - 1].new8day;
        floors[roomNumber - 1].new9time = floors[roomNumber - 1].new8time;
        floors[roomNumber - 1].new9numofstudents = floors[roomNumber - 1].new8numofstudents;
	    
	    floors[roomNumber - 1].new8section = floors[roomNumber - 1].new7section;
        floors[roomNumber - 1].new8day = floors[roomNumber - 1].new7day;
        floors[roomNumber - 1].new8time = floors[roomNumber - 1].new7time;
        floors[roomNumber - 1].new8numofstudents = floors[roomNumber - 1].new7numofstudents;
	    
	    floors[roomNumber - 1].new7section = floors[roomNumber - 1].new6section;
        floors[roomNumber - 1].new7day = floors[roomNumber - 1].new6day;
        floors[roomNumber - 1].new7time = floors[roomNumber - 1].new6time;
        floors[roomNumber - 1].new7numofstudents = floors[roomNumber - 1].new6numofstudents;

        floors[roomNumber - 1].new6section = floors[roomNumber - 1].new5section;
        floors[roomNumber - 1].new6day = floors[roomNumber - 1].new5day;
        floors[roomNumber - 1].new6time = floors[roomNumber - 1].new5time;
        floors[roomNumber - 1].new6numofstudents = floors[roomNumber - 1].new5numofstudents;

        floors[roomNumber - 1].new5section = floors[roomNumber - 1].new4section;
        floors[roomNumber - 1].new5day = floors[roomNumber - 1].new4day;
        floors[roomNumber - 1].new5time = floors[roomNumber - 1].new4time;
        floors[roomNumber - 1].new5numofstudents = floors[roomNumber - 1].new4numofstudents;

        floors[roomNumber - 1].new4section = floors[roomNumber - 1].new3section;
        floors[roomNumber - 1].new4day = floors[roomNumber - 1].new3day;
        floors[roomNumber - 1].new4time = floors[roomNumber - 1].new3time;
        floors[roomNumber - 1].new4numofstudents = floors[roomNumber - 1].new3numofstudents;

        floors[roomNumber - 1].new3section = floors[roomNumber - 1].new2section;
        floors[roomNumber - 1].new3day = floors[roomNumber - 1].new2day;
        floors[roomNumber - 1].new3time = floors[roomNumber - 1].new2time;
        floors[roomNumber - 1].new3numofstudents = floors[roomNumber - 1].new2numofstudents;

        floors[roomNumber - 1].new2section = floors[roomNumber - 1].newsection;
        floors[roomNumber - 1].new2day = floors[roomNumber - 1].newday;
        floors[roomNumber - 1].new2time = floors[roomNumber - 1].newtime;
        floors[roomNumber - 1].new2numofstudents = floors[roomNumber - 1].newnumofstudents;

        floors[roomNumber - 1].newsection = floors[roomNumber - 1].section;
        floors[roomNumber - 1].newday = floors[roomNumber - 1].day;
        floors[roomNumber - 1].newtime = floors[roomNumber - 1].time;
        floors[roomNumber - 1].newnumofstudents = floors[roomNumber - 1].numofstudents;

        floors[roomNumber - 1].section = section;
        floors[roomNumber - 1].day = day;
        floors[roomNumber - 1].time = time;
        floors[roomNumber - 1].numofstudents = numofstudents;

        cout << "                     [ Room 20" << roomNumber << " has a new schedule by " << section << " on " << day << " at " << time << " with a capacity of " << numofstudents << " ]";
    } 
	else 
	{
        cout << "                     [ Room 20" << roomNumber << " is available. Use 'Book Room' option for a new booking." << " ]" << endl;
    }
}

void RebookRoom(thirdfloor place[]) 
{
    int roomNumber, numofstudents;
    string section, time, day;

   	cout << "                                   [code]             [room]                    [day] " << endl;
    cout << "                                     [1]             Room 301                   Sunday  " << endl;
	cout << "                                     [2]             Room 302                   Monday " << endl;
	cout << "                                     [3]             Room 303                   Wednesday" << endl;
	cout << "                                     [4]             Room 304                   Thursday" << endl;
	cout << "                                     [5]             Room 305                   Friday" << endl;
	cout << "                                     [6]             Room 306                   Saturday" << endl;
	cout << endl;
	cout << "                           ===========================================================================" << endl;
	cout << "                                                      Enter Code for Room: ";
    cin >> roomNumber;

    if (roomNumber < 1 || roomNumber > numoneRoom) 
	{
        cout << "Error: Invalid Room Number." << "\n";
        return;
    }

    if (!place[roomNumber - 1].available) 
	{
        cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].day << " at " << place[roomNumber - 1].time << " with a capacity of " << place[roomNumber - 1].numofstudents <<" ]" << endl;
		if (place[roomNumber - 1].newsection != "" && place[roomNumber - 1].newday != "" && place[roomNumber - 1].newtime != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].newday << " at " << place[roomNumber - 1].newtime << " with a capacity of " << place[roomNumber - 1].newnumofstudents <<" ]" << endl;
     	}
     	if (place[roomNumber - 1].new2section != "" && place[roomNumber - 1].new2day != "" && place[roomNumber - 1].new2time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new2day << " at " << place[roomNumber - 1].new2time << " with a capacity of " << place[roomNumber - 1].new2numofstudents <<" ]" << endl;
     	}
     	if (place[roomNumber - 1].new3section != "" && place[roomNumber - 1].new3day != "" && place[roomNumber - 1].new3time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new3day << " at " << place[roomNumber - 1].new3time << " with a capacity of " << place[roomNumber - 1].new3numofstudents <<" ]" << endl;
     	}
     	if (place[roomNumber - 1].new4section != "" && place[roomNumber - 1].new4day != "" && place[roomNumber - 1].new4time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new4day << " at " << place[roomNumber - 1].new4time << " with a capacity of " << place[roomNumber - 1].new4numofstudents <<" ]" << endl;
     	}
	    if (place[roomNumber - 1].new5section != "" && place[roomNumber - 1].new5day != "" && place[roomNumber - 1].new5time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new5day << " at " << place[roomNumber - 1].new5time << " with a capacity of " << place[roomNumber - 1].new5numofstudents <<" ]" << endl;
     	}
	    if (place[roomNumber - 1].new6section != "" && place[roomNumber - 1].new6day != "" && place[roomNumber - 1].new6time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new6day << " at " << place[roomNumber - 1].new6time << " with a capacity of " << place[roomNumber - 1].new6numofstudents <<" ]" << endl;
     	}
     	if (place[roomNumber - 1].new7section != "" && place[roomNumber - 1].new7day != "" && place[roomNumber - 1].new7time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new7day << " at " << place[roomNumber - 1].new7time << " with a capacity of " << place[roomNumber - 1].new7numofstudents <<" ]" << endl;
     	}
     	if (place[roomNumber - 1].new8section != "" && place[roomNumber - 1].new8day != "" && place[roomNumber - 1].new8time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new8day << " at " << place[roomNumber - 1].new8time << " with a capacity of " << place[roomNumber - 1].new8numofstudents <<" ]" << endl;
     	}
     	if (place[roomNumber - 1].new9section != "" && place[roomNumber - 1].new9day != "" && place[roomNumber - 1].new9time != "") 
		{
		cout << "                     [ Room 30" << roomNumber << " is already occupied" << " this " << place[roomNumber - 1].new9day << " at " << place[roomNumber - 1].new9time << " with a capacity of " << place[roomNumber - 1].new9numofstudents <<" ]" << endl;
     	}
	
		cout << "                                                      Enter Day: ";
        cin.ignore();
        getline(cin, day);
        cout << "                                                      Enter new Time: ";
        getline(cin, time);
        cout << "                                                      Enter Section Name: ";
        getline(cin, section);
        
        do {
        cout << "                                                      Enter Capacity (1 to 50 only): ";
        cin >> numofstudents;
	    }while (roomcapacity < numofstudents);
	    
	    place[roomNumber - 1].new9section = place[roomNumber - 1].new8section;
        place[roomNumber - 1].new9day = place[roomNumber - 1].new8day;
        place[roomNumber - 1].new9time = place[roomNumber - 1].new8time;
        place[roomNumber - 1].new9numofstudents = place[roomNumber - 1].new8numofstudents;
	    
	    place[roomNumber - 1].new8section = place[roomNumber - 1].new7section;
        place[roomNumber - 1].new8day = place[roomNumber - 1].new7day;
        place[roomNumber - 1].new8time = place[roomNumber - 1].new7time;
        place[roomNumber - 1].new8numofstudents = place[roomNumber - 1].new7numofstudents;
	    
	    place[roomNumber - 1].new7section = place[roomNumber - 1].new6section;
        place[roomNumber - 1].new7day = place[roomNumber - 1].new6day;
        place[roomNumber - 1].new7time = place[roomNumber - 1].new6time;
        place[roomNumber - 1].new7numofstudents = place[roomNumber - 1].new6numofstudents;

        place[roomNumber - 1].new6section = place[roomNumber - 1].new5section;
        place[roomNumber - 1].new6day = place[roomNumber - 1].new5day;
        place[roomNumber - 1].new6time = place[roomNumber - 1].new5time;
        place[roomNumber - 1].new6numofstudents = place[roomNumber - 1].new5numofstudents;

        place[roomNumber - 1].new5section = place[roomNumber - 1].new4section;
        place[roomNumber - 1].new5day = place[roomNumber - 1].new4day;
        place[roomNumber - 1].new5time = place[roomNumber - 1].new4time;
        place[roomNumber - 1].new5numofstudents = place[roomNumber - 1].new4numofstudents;

        place[roomNumber - 1].new4section = place[roomNumber - 1].new3section;
        place[roomNumber - 1].new4day = place[roomNumber - 1].new3day;
        place[roomNumber - 1].new4time = place[roomNumber - 1].new3time;
        place[roomNumber - 1].new4numofstudents = place[roomNumber - 1].new3numofstudents;

        place[roomNumber - 1].new3section = place[roomNumber - 1].new2section;
        place[roomNumber - 1].new3day = place[roomNumber - 1].new2day;
        place[roomNumber - 1].new3time = place[roomNumber - 1].new2time;
        place[roomNumber - 1].new3numofstudents = place[roomNumber - 1].new2numofstudents;

        place[roomNumber - 1].new2section = place[roomNumber - 1].newsection;
        place[roomNumber - 1].new2day = place[roomNumber - 1].newday;
        place[roomNumber - 1].new2time = place[roomNumber - 1].newtime;
        place[roomNumber - 1].new2numofstudents = place[roomNumber - 1].newnumofstudents;

        place[roomNumber - 1].newsection = place[roomNumber - 1].section;
        place[roomNumber - 1].newday = place[roomNumber - 1].day;
        place[roomNumber - 1].newtime = place[roomNumber - 1].time;
        place[roomNumber - 1].newnumofstudents = place[roomNumber - 1].numofstudents;

        place[roomNumber - 1].section = section;
        place[roomNumber - 1].day = day;
        place[roomNumber - 1].time = time;
        place[roomNumber - 1].numofstudents = numofstudents;

        cout << "                     [ Room 30" << roomNumber << " has a new schedule by " << section << " on " << day << " at " << time << " with a capacity of " << numofstudents << " ]" << endl;
    } 
	else 
	{
        cout << "                     [ Room 30" << roomNumber << " is available. Use 'Book Room' option for a new booking." << " ]" << endl;
    }
}

int main()
{
	Floor floors[numoffloors];
	Room rooms[numoneRoom];
	secondfloor sfloor[numtwoRoom];
	thirdfloor place[numthreeRoom];
    IntoneRooms(rooms);
	InttwoRooms(sfloor);
	IntthreeRooms(place);

	cout << "                           ===========================================================================" << endl;
	cout << "                                   UNIVERSITY        CLASSROOM     AVAILABILITY       SYSTEM" << endl;
	cout << "                           ===========================================================================" << endl;
	cout << endl;
	cout << "                                 ====     ====        =========       =======         ===========" << endl;
	cout << "                                 ====     ====      ===========     ============     ============" << endl;
	cout << "                                 ====     ====     ====    ====     ====    ====     ====" << endl;
	cout << "                                 ====     ====     ====             ====    ====     =======" << endl;
	cout << "                                 ====     ====     ====             ============        ========" << endl;
	cout << "                                 ====     ====     ====             ============            =======" << endl;
	cout << "                                 =============     =====   ====     ====    ====               ====" << endl;
	cout << "                                  ===========       ===========     ====    ====       ============" << endl;
	cout << "                                    =======          =========      ====    ====      ===========" << endl;
	cout << endl;
	cout << "                           ===========================================================================" << endl;
	cout << "                                          CREATED BY : NIGEL  |  LENARD  |  EDRICKA" << endl;
	cout << "                           ===========================================================================" << endl;
	cout << endl;
	cout << endl; 

	int choice;
	int available_floor;
	int book_floor;
	int rebook_floor;
	do {
	
	cout << "                                   ===========================================================" << endl;
	cout << "                                                 Enter [1] to Check available Rooms" << endl;
	cout << "                                                 Enter [2] to Book a Schedule in Room" << endl;
	cout << "                                                 Enter [3] to Book a new Schedule in Room" << endl;
	cout << "                                                 Enter [4] to Exit" << endl;
	cout << "                                   ===========================================================" << endl;
	cout << endl;
	cout << endl;
	cout << "                                                      Please enter mode: ";
	cin >> choice;
	system("cls");

	switch (choice) {
			case 1:
				printmessage ();
				cout << "                                                      ===== Choose Floor =====" << endl;
				cout << endl;
				cout << "                                             [code]                             [floor]" << endl;
				cout << "                                               [1]                             1st Floor" << endl;
				cout << "                                               [2]                             2nd Floor" << endl;
				cout << "                                               [3]                             3rd Floor" << endl;
				cout << endl;
				cout << "                                              ======================================" << endl;
				cout << "                                                           Enter Floor: ";
				cin >> available_floor;
				cout << endl;
				system("cls");

				if (available_floor == 1){
					printmessage ();
					cout << "                                                      ===== First Floor =====" << endl;
					cout << endl;
					DisplayoneRooms(rooms);
					cout << endl;
				}
				else if (available_floor == 2){
					printmessage ();
					cout << "                                                      ===== Second Floor =====" << endl;
					cout << endl;
					DisplaytwoRooms(sfloor);
					cout << endl;
				}
				else if (available_floor == 3){
					printmessage ();
					cout << "                                                      ===== Third Floor =====" << endl;
					cout << endl;
					DisplaythreeRooms(place);
					cout << endl;
				}
				else {
					printmessage ();
					cout << "Invalid choice. Please try again." << endl;
				}
				break;
			case 2:
				printmessage ();
				cout << "                                                      ===== Choose Floor =====" << endl;
				cout << endl;
				cout << "                                             [code]                             [floor]" << endl;
				cout << "                                               [1]                             1st Floor" << endl;
				cout << "                                               [2]                             2nd Floor" << endl;
				cout << "                                               [3]                             3rd Floor" << endl;
				cout << endl;
				cout << "                                              ======================================" << endl;
				cout << "                                                           Enter Floor: ";
				cin >> book_floor;
				cout << endl;
				system("cls");

				if (book_floor == 1){
					printmessage ();
					cout << "                                                      ===== First Floor =====" << endl;
					cout << endl;
					Bookrooms(rooms);
					cout << endl;
				}
				else if (book_floor == 2){
					printmessage ();
					cout << "                                                      ===== Second Floor =====" << endl;
					cout << endl;
					Bookrooms(sfloor);
					cout << endl;
				}
				else if (book_floor == 3){
					printmessage ();
					cout << "                                                      ===== Third Floor = ====" << endl;
					cout << endl;
					Bookrooms(place);
					cout << endl;
				}
				else {
					printmessage ();
					cout << "Invalid choice. Please try again." << endl;
				}
				break;
			case 3:
				printmessage ();
				cout << "                                                      ===== Choose Floor =====" << endl;
				cout << endl;
				cout << "                                             [code]                             [floor]" << endl;
				cout << "                                               [1]                             1st Floor" << endl;
				cout << "                                               [2]                             2nd Floor" << endl;
				cout << "                                               [3]                             3rd Floor" << endl;
				cout << endl;
				cout << "                                              ======================================" << endl;
				cout << "                                                           Enter Floor: ";
				cin >> rebook_floor;
				cout << endl;
				system("cls");

				if (rebook_floor == 1){
					printmessage ();
					cout << "                                                      ===== First Floor =====" << endl;
					cout << endl;
					RebookRoom(rooms);
					cout << endl;
				}
				else if (rebook_floor == 2){
					printmessage ();
					cout << "                                                      ===== Second Floor =====" << endl;
					cout << endl;
					RebookRoom(sfloor);
					cout << endl;
				}
				else if (rebook_floor == 3){
					printmessage ();
					cout << "                                                      ===== Third Floor =====" << endl;
					cout << endl;
					RebookRoom(place);
					cout << endl;
				}
				else {
					printmessage ();
					cout << "Invalid choice. Please try again." << endl;
				}
				break;
			case 4:
				printmessage ();
				cout << "Exiting the system. Goodbye!" << "\n";
				break;
			default:
				printmessage ();
                cout << "Invalid choice. Please try again." << "\n";
                break;
        }
    } while (choice != 4);

	getch();
	return 0;
}