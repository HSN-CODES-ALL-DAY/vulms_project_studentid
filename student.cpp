#include "student.hpp"


studentid::studentid(const std::string &id,const std::string &name) : eid (id), lengths(stringlength(eid)),ename(name){}
    bool studentid::errorstate()const{
      return stringlength(alphabeticalpart()) > 3;
    }
    std::string studentid::student() const {
      return eid;
}

std::string studentid::numaricalpart() const{
      std::string numaricalpart;
      for(int i=0;i<lengths;i++){
        if (eid[i]>='0'&&eid[i]<='9')
         numaricalpart+=eid[i];
      }
      return numaricalpart;
}

std::string studentid::alphabeticalpart()const{
      std::string alphabeticalpart;
      
      for(int i = 0;i<stringlength(eid);i++){
         if (eid[i]>='A'&&eid[i]<='z')
         alphabeticalpart+=eid[i];
      }
      return alphabeticalpart;
    }
    int studentid::length()const{
      return lengths;
}

std::string studentid::names()const{
    return ename;
}

std::string studentid::firstname(const std::string &namess)const{
    std::string fname;
    int j=0;
    while (namess[j]!=' '&&namess[j]!='\0'){
        fname+=namess[j];
        j++;
    }
    return fname;
}

std::string studentid::lastname(const std::string &namess)const{
    std::string lname;
    int g=stringlength(namess);
    while(namess[g]!=' '&&g!=0){
        g--;
    }
    if(g>0){
    g++;
    for(int i=g;namess[i]!='\0';i++){
      lname+=namess[i];
    }
     return lname;
    }
    return "No Last Name";
}

int stringlength(const std::string &s){
  int length=0;
  while (s[length]!='\0')
  length++;
  return length;
}
