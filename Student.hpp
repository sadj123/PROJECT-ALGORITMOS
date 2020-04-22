#ifndef _STUDENT_HPP
#define _STUDENT_HPP

#include<iostream>
#include<fstream>
#include<string>

class Student{
private:
  std::string name;
  int roll_num;
  int mat_grade, eng_grade, spa_grade, sci_grade, soc_grade;
  float average;
  float calculate_average();

public:
  Student();
  ~Student(){};
  std::string get_name();
  int get_roll_num();
  int get_mat_score();
  int get_eng_score();
  int get_spa_score();
  int get_sci_score();
  int get_soc_score();
  float get_average();
  void output_info();
  void input_info();
  void output_info_simple();
  void input_info_simple();
};

std::ostream& operator <<(std::ostream&, Student &temp);
std::istream& operator >>(std::istream&, Student &temp);

#endif