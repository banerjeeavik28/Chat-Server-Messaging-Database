#include "Database.h"
char* ServerSignUp(char* username, char* password){
    FILE *LoginData;
    FILE *UserData;
    char usercopy[NAME] = "0"; /*copy of username to be manipulated*/
    char usercopy2[NAME] = "0"; /*copy of username to be manipulated*/
	char Data_uname[NAME] = "0";
	char Data_pwd[NAME] = "0";
    char pwdcopy[NAME] = "0"; /*copy of username to be manipulated*/
	int Filelength = 0;
	char UserDataPath[256] =  "Database/Usernames/";
	
//	char Data_uname[NAME] = "0";
    strcpy(usercopy,username);
    strcpy(usercopy2,username);
    strcpy(pwdcopy, password);
	LoginData = fopen("Database/Login.txt", "r");
    strcat(usercopy,"\n");
    strcat(pwdcopy,"\n");
	while(fgetc(LoginData) !=EOF){ /*loop to increment Filelength until it has reached the length of the entire file's contents*/
		Filelength++;
	} 
	fclose(LoginData);
    LoginData = fopen("Database/Login.txt", "r");
	if(Filelength !=0){                       
        while(feof(LoginData)== 0){
        	fgets(Data_uname, NAME-1, LoginData); /*gets first line for user which is the username*/
        	fgets(Data_pwd, NAME-1, LoginData); /*gets first line for user which is the username*/
        	if(strcmp(usercopy, Data_uname) == 0){ /*compares login data from text file to what is inputted by user to check for match*/
				fclose(LoginData);
				return ERRUSER_AE;
			}
		}
	}
	fclose(LoginData);
    LoginData = fopen("Database/Login.txt", "a");
    fprintf(LoginData,"%s\n", username);
    fprintf(LoginData,"%s\n", password);
	CreateFolder(strcat(UserDataPath,usercopy2));
	strcat(UserDataPath, "/");
        UserData = fopen(strcat(UserDataPath,"Contacts.txt"), "w"); /*concatonates username copy string to add txt extension to access specified user's files*/
        //UserData = fopen( strcat(usercopy2,".txt"), "w"); /*concatonates username copy string to add txt extension to access specified user's files*/
        fclose(LoginData);
        fclose(UserData);
        return SUCCESSSIGNUP;

}
int SignUpExists(char *username) //Returns 1 if username exists, 0 if not
{
	FILE *login;
	login=fopen("/Database/Login.txt","r");
	if(!login) //check to see if login.txt exists
		return 0; //if file does not exists, then user also doesnt
	int namelength=strlen(username);//Get the size of username
	char *pointer;
	fread(pointer,namelength,,login);
	while(
}

char* ServerSignUp(char* username, char* password){
        FILE *LoginData;
        FILE *UserData;
        char usercopy[NAME] = "0"; /*copy of username to be manipulated*/
        char usercopy2[NAME] = "0"; /*copy of username to be manipulated*/
        char pwdcopy[NAME] = "0"; /*copy of username to be manipulated*/
	char UserDataPath = USERSPATH;
	
	char Data_uname[NAME] = "0";
        strcpy(usercopy,username);
        strcpy(usercopy2,username);
        strcpy(pwdcopy, password);
        LoginData = fopen("Database/Login.txt", "a");
        strcat(usercopy,"\n");
        strcat(pwdcopy,"\n");
	
        while(strcmp(Data_uname,"")){
        	fgets(Data_uname, NAME-1, LoginData); /*gets first line for user which is the username*/
        	if((strcmp(usercopy, Data_uname) == 0)){ /*compares login data from text file to what is inputted by user to check for match*/
			return ERRUSERAE;
		}
	}
        fprintf(LoginData,"%s\n", username);
        fprintf(LoginData,"%s\n", password);
        UserData = fopen(strcat(usercopy2,".txt"), "w"); /*concatonates username copy string to add txt extension to access specified user's files*/
        fprintf(UserData, "%s\n", username);
        fprintf(UserData, "sly");
        fclose(LoginData);
        fclose(UserData);
        return SUCCESSSIGNUP;

}
//		/*To be implemented at a later time*/
//char* ServerLogin(char* username, char* password){
//        char Data_uname[NAME] = "0"; /*Usernames from login file*/
//        char Data_pwd[NAME] = "0"; /*Passwords from login file*/
//        char usercopy[NAME] = "0"; /*copy of username to be manipulated*/
//        char usercopy2[NAME] = "0"; /*copy of username to be manipulated*/
//        char passcopy[NAME] = "0"; /*copy of username to be manipulated*/
//		  strcpy(usercopy, username); /*copy input string to username copy utilized for concatonation*/
//        strcpy(passcopy, password); /*copy input string to password copy utilized for concatonation*/
//        FILE *LoginData;
//
//        /* To be impletmented in Beta Version*/
//        int Filelength = 0;
//        FILE *UserData;/*data for each user*/
//        LoginData = fopen("login.txt", "r");
//        /*continuous loop to run through entire login.txt file until value is returned*/
//        while(strcmp(Data_uname,"")){
//
//
//                /*get each line in the login data for stored users*/
//                fgets(Data_uname, NAME-1, LoginData); /*gets first line for user which is the username*/
//                fgets(Data_pwd, NAME-1, LoginData); /*gets second line for user which is the password*/
//                if((strcmp(strcat(passcopy,"\n"), Data_pwd) == 0) && (strcmp(strcat(usercopy,"\n"), Data_uname) == 0)){ /*compares login data from text file to what is inputted by user to check for match*/
//
//                	strcpy(usercopy2, username); /*copy input string to username copy utilized for concatonation*/
//                	UserData = fopen(strcat(usercopy2,".txt"), "r"); /*concatonates username copy string to add txt extension to access specified user's files*/
//			while(fgetc(UserData) !=EOF){ /*loop to increment Filelength until it has reached the length of the entire file's contents*/
//                                Filelength++;
//                        }
//			fclose(UserData);
//                	UserData = fopen(usercopy2, "r"); /*concatonates username copy string to add txt extension to access specified user's files*/
//                        char GuiInfo[Filelength]; /*give array size of file*/
//                        memset( GuiInfo, 0, Filelength*sizeof(char) );
//			fread(GuiInfo, sizeof(char), Filelength, UserData);   
//                        username = GuiInfo;
//                        fclose(LoginData);
//                	UserData = fopen(usercopy2, "r"); /*concatonates username copy string to add txt extension to access specified user's files*/
//                        //char GuiInfo[Filelength]; /*give array size of file*/
//                        memset( GuiInfo, 0, Filelength*sizeof(char) );	
//			fread(GuiInfo, sizeof(char), Filelength, UserData);
//                        username = GuiInfo;
//                        fclose(LoginData);
//                        fclose(UserData);
//                        return username; /*return the newly filled array*/
//
//                }else if((strcmp(passcopy,Data_pwd) == 0) && (strcmp(usercopy,Data_uname) !=0)){
//                        strcpy(username, ERRUSER);
//                        return username;
//                }else if((strcmp(strcat(usercopy,"\n"),Data_uname) == 0) && (strcmp(strcat(passcopy,"\n"),Data_pwd) !=0)){
//                        strcpy(username, ERRPWD);
//                        return username;
//                }else{
//
//                }
//        }
//        return "Error Logging in";
//}
//
//
char* ServerAddFriend(char* username, char* friend){
	FILE *UserData;
	FILE *FriendData;
	FILE *PendingData;
	char PendingFriendPath[256] = USERSPATH; // Database/Usernames/
	strcat(PendingFriendPath, friend); // Database/Usernames/friend
	char FriendDataPath[256] = PendingFriendPath; // Database/Usernames/friend
	char UserDataPath[256] = USERSPATH; // Database/Usernames/
	strcat(UserDataPath, username); // Database/Usernames/username
	char UserDataPath2[256] = UserDataPath; // Database/Usernames/username
	strcat(UserDataPath, "/"); // Database/Usernames/username/
	strcat(PendingFriendPath, "/"); // Database/Usernames/friend/
    char Data_uname[NAME] = "0"; /*Usernames from login file*/
    char Data_uname2[NAME] = "0"; /*Usernames from login file*/
    char Data_pwd[NAME] = "0"; /*Usernames from login file*/
    char usercopy[NAME] = "0"; /*copy of username to be manipulated*/
    char usercopy2[NAME] = "0"; /*copy of username to be manipulated*/
    char usercopy3[NAME] = "0"; /*copy of username to be manipulated*/
    char friendcopy[NAME] = "0"; /*copy of iusername to be manipulated*/
    char friendcopy2[NAME] = "0"; //copy of iusername to be manipulated
	int Filelength = 0;	
	strcpy(friendcopy, friend); //friend
	strcpy(friendcopy2, friend); //friend
	strcpy(friendcopy3, friend); //friend
	strcat(friendcopy2, "_pnd"); //friend_pnd	
	
	if(FileExists(strcat(UserDataPath, friendcopy2)) == 1){
		remove(strcat(UserDataPath, ".txt"));
		FriendData = fopen(strcat(FriendDataPath,".txt"),"a");
		UserData = fopen(strcat(UserDataPath2,".txt"),"a");
		fprintf(FriendData,",%s",username);  
		fprintf(UserData,",%s",friend);
		fclose(FriendData);
		fclose(UserData);
		return GetContacts(username);  
	}
	LoginData = fopen("Database/login.txt", "r")
	while(strcmp(Data_uname,"")){
		fgets(Data_uname, NAME-1, LoginData);
		fgets(Data_pwd, NAME-1, LoginData);
		if(strcmp(strcat(friendcopy3,"\n"),Data_uname ) == 0){
			UserData = fopen(strcat(FriendData
			while(strcmp(Data_uname2,"")){
				fgets(Data_uname2, NAME-1, UserData);
			
		else if(EOF){
			return ERRUSER_DNE;
		}
			PendingData = fopen(PendingFriendPath,"a");
			fprintf(PendingData, ",%s", username);
			return SUCCESSFRIEND;
		}else if( ) {
			return ERRUSER_AF;
		}else if( ==EOF{
			return ERRUSER_DNE;		
		}else{
			continue;	
		}		

}





