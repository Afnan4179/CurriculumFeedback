#ifndef ADMIN_H
#define ADMIN_H

#include <algorithm>
#include <filesystem>
#include <fstream>
#include "Independant_Functions.h"
#include "Caesar_Cipher.h"
using namespace std;



class ADMIN : public ENCRYPTION, public DECRYPTION
{
	string USERNAME;
	string PASSWORD;
public:
	string LOWER_USERNAME;
	bool LOGIN_SUCCESSFUL;

	ADMIN(); //// Default Constructor ////

	void SET_USERNAME(string SET_THIS_USERNAME); //// Setter for USERNAME 

	void SET_PASSWORD(string SET_THIS_PASSWORD); //// Setter for PASSWORD 

	string GET_USERNAME(); //// Getter for USERNAME 

	string GET_PASSWORD(); //// Getter for PASSWORD 



	// LOGIN FUNCTION  
	bool LOGIN_FUNCTION(bool ITS_ADMIN);

	// LOGIN VALIDATION FUNCTION 
	virtual bool LOGIN_VALIDATION_FUNCTION();

	// GET USERNAME & PASSWORD FUNCTION  
	string GET_LOGIN_DATA(const string& FILE_NAME);

	// ADMIN MAIN MENU  
	int ADMIN_MAIN_MENU_FUNCTION(int choice);

	// 1.ADMIN MANAGE FEEDBACK FORM MENU 
	int ADMIN_MANAGE_FEEDBACK_FORM_MENU_FUNCTION(int choice);

	// 1.1.PRINT THE FEEDBACK FORM  
	void PRINT_FEEDBACK_FORM();

	// 1.2. ADMIN EDIT FEEDBACK FORM MENU 
	int ADMIN_EDIT_FEEDBACK_FORM_MENU_FUNCTION(int choice);

	// 1.2.1 ADD A NEW QUESTION     
	void ADD_QUESTION();

	// 1.2.2 REMOVE A QUESTION     
	void REMOVE_QUESTION();

	// 1.3 SEARCH IN FEEDBACK FORM     
	bool SEARCH_IN_FEEDBACK_FORM();

	// 2.ADMIN MANAGE STUDENTS MENU   
	int ADMIN_MANAGE_STUDENTS_MENU_FUNCTION(int choice);

	//2.1.CHECK TOTAL NUMBER OF STUDENTS   
	void TOTAL_STUDENTS();

	// 2.2.SEARCH A STUDENT [CMS ID]      
	void SEARCH_STUDENT();

	//  2.3.REMOVE A STUDENT [CMS ID]      
	void REMOVE_STUDENT();

	// 2.4.ADD A NEW STUDENT [CMS ID]      
	void ADD_STUDENT();

	//3.ADMIN MANAGE SUBMITTED FEEDBACKS MENU   
	int ADMIN_MANAGE_SUBMITTED_FEEDBACKS_MENU_FUNCTION(int choice);

	// 3.1.CHECK TOTAL NUMBER OF SUBMITTED FEEDBACKS   
	void TOTAL_SUBMITTED_FEEDBACKS();

	// 3.2.PRINT A STUDENT'S FEEDBACK [CMS ID]  
	virtual bool PRINT_SUBMITTED_FEEDBACK_FORM();

	// 3.3.REMOVE A STUDENT'S FEEDBACK [CMS ID]  
	void REMOVE_SUBMITTED_FEEDBACK();

	// 4. CHANGE YOUR PASSWORD         
	virtual void CHANGE_PASSWORD();

	// CHECK EXISTING FILE     
	bool CHECK_EXISTING_FILE(const string& FILE_NAME);

	// ENCRYPT                
	void ENCRYPT(const string& FILE_NAME)override;

	// DECRYPT                
	void DECRYPT(const string& FILE_NAME)override;
};

#endif /* ADMIN_H */

