#pragma once
#include <string>

int stringlength(const std::string &s);

class studentid{
    public:
    studentid(const std::string &id,const std::string &name);
    std::string names() const;
    std::string firstname(const std::string &namess) const;
    std::string lastname(const std::string &namess) const;
    std::string numaricalpart() const;
    std::string alphabeticalpart() const;
    int length() const;
    std::string student() const;
    bool errorstate() const;
    
    private:
    const std::string eid;
    const std::string ename;
    const int lengths;    
};