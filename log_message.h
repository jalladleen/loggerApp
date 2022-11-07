
      /********************************************************************************
                                  Name: Leen Al-Jallad
                                  Instrucotr: Mike Katchabaw
                                  Course: CS3307
                                  Due Date: 04-10-2022
        ********************************************************************************/

#pragma once 

#include <string>

class log_message
{
    public:
    log_message(std::string, std::string);
    ~log_message();
    std::string get_message();
    std::string get_timestamp();

    private:
    std::string msg;
    std::string timestamp;
};


