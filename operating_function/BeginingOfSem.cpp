#include "operating_function/BeginingOfSem.h"

void createSemester(int sem, string start_x, string end_x, int schoolyear) {
    ofstream fout;
    fout.open("currentSemester.txt");
    fout << schoolyear << endl; //save the current school year as the default for the actions below
    fout << sem << endl; //save the current semester as the default for the actions below
    fout << start_x << endl; //save the start date as the default for the actions below
    fout << end_x << endl; //save the end date  as the default for the actions below
    fout.close();
    fout.open("allSemester.txt", ios::app);
    fout << schoolyear << endl;
    fout << sem << endl;
    fout << start_x << endl;
    fout << end_x << endl;
    fout.close();
}

//void createRegistration() {
//	string start, end;
//	cin >> start;
//	cin >> end;
//	int h, m, s;
//	cin >> h;
//	cin >> m;
//	cin >> s;
//	ofstream fout;
//	fout.open("courseRegistration.txt");
//	fout << h * 3600 + m * 60 + s << endl;
//	fout << start << endl;
//	cin >> h;
//	cin >> m;
//	cin >> s;
//	fout << h * 3600 + m * 60 + s << endl;
//	fout << end << endl;
//	fout.close();
//}
//
//void addCourse(School HCMUS) {
//	Course* newCourse = new Course();
//	cin >> newCourse->courseID;
//	cin >> newCourse->courseName;
//	cin >> newCourse->teacherName;
//	cin >> newCourse->numberofCredit;
//	cin >> newCourse->maxStudent;
//	cin >> newCourse->day[0];
//	cin >> newCourse->day[1];
//	cin >> newCourse->session[0];
//	cin >> newCourse->session[1];
//	cin >> newCourse->schoolyear;
//	cin >> newCourse->semester;
//	HCMUS.allCourses.addNewCourse(newCourse);
//}
//
//void viewCourses(School HCMUS) {
//	HCMUS.allCourses.monitor = HCMUS.allCourses.monitor->nextCourse;
//	while (HCMUS.allCourses.monitor) {
//		cout << HCMUS.allCourses.monitor->courseID << endl;
//		cout << HCMUS.allCourses.monitor->courseName << endl;
//		cout << HCMUS.allCourses.monitor->teacherName << endl << endl;
//		HCMUS.allCourses.monitor = HCMUS.allCourses.monitor->nextCourse;
//	}
//}
//
//void updateCourseInfo(School HCMUS, string courseID, const int& x) {
//	Course* course = HCMUS.allCourses.getCourse(courseID);
//	switch (x) {
//	case 1: {
//		cin >> course->courseID;
//		break;
//	}
//	case 2: {
//		cin >> course->courseName;
//		break;
//	}
//	case 3: {
//		cin >> course->teacherName;
//		break;
//	}
//	case 4: {
//		cin >> course->numberofCredit;
//		break;
//	}
//	case 5: {
//		cin >> course->maxStudent;
//		break;
//	}
//	case 6: {
//		cin >> course->day[0];
//		cin >> course->day[1];
//		break;
//	}
//	case 7: {
//		cin >> course->session[0];
//		cin >> course->session[1];
//		break;
//	}
//	case 8: {
//		cin >> course->schoolyear;
//		break;
//	}
//	case 9: {
//		cin >> course->semester;
//		break;
//	}
//	default: {
//		return;
//	}
//	}
//}
//
//void deleteACourse(School HCMUS, string CourseID) {
//	HCMUS.allCourses.deleteCourse(CourseID);
//}
