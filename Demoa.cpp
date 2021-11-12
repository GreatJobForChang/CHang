#define MYSQLPP_MYSQL_HEADERS_BURIED
#include <mysql++/mysql++.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    // Connect to database with: database, server, userID, password
    mysqlpp::Connection myDB("cse278","localhost" , "cse278",
            "S3rul3z");


	// More code to come...
    mysqlpp::Query query = myDB.query();
    query << "CREATE TABLE UserInfo(\n
	     User_ID VARCHAR(255) NOT NULL,\n
	     CarPlate VARCHAR(255) NOT NULL,\n
	     UserCountry VARCHAR(255) NOT NULL,\n
	     PRIMARY KEY(User_ID)\n
	     );";
    query.parse();
    query.store(); 
    query << "CREATE TABLE CarInfo(\n
 	    CarPlate VARCHAR(255) NOT NULL,\n
	    ManufactCountry VARCHAR(255) NOT NULL,\n
	    CarPrice FLOAT NOT NULL,\n
	    PRIMARY KEY(CarPlate)\n
	    );";
    query.parse();
    query.store();
       
    query << "SELECT pname, price FROM Product;";
    query.parse();  // check to ensure it is correct
    mysqlpp::StoreQueryResult result = query.store();
    // Result is in 2-D vector of mysqlpp::String objects
    for (size_t row = 0; row < result.size(); row++) {
        std::string pname = result[row][0].c_str();
        float price = result[row][1];
        std::cout << pname << "\t" << price << "\n";
    } // done printing results

    //cout<<query<<endl;


}
