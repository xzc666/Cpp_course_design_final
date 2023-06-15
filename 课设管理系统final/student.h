#pragma once
#include<string>
#include<qstring.h>
using namespace std;

class Student {
public:
	string  StuID;
	string StuName;
	string StuClass;
	string StuCollege;
	string Topic;
	string Course;	
};
class Topic {
public:
	string Course;
	string TopicName;
	//friend bool operator==(Topic& p, Topic& t);
	

};
//bool operator==(const Topic& p,const Topic& t) {
//	if (p.Course == t.Course && t.TopicName == t.TopicName) {
//		return true;
//	}
//	else {
//		return false;
//	}
//};