

#include <iostream>
using namespace std;

int main()
{


    //1


    double fileSizeGB, internetSpeedBps;

    cout << "Filmin ölçüsünü (GB) daxil edin: ";
    cin >> fileSizeGB;
    cout << "İnternet sürətini (bit/saniyə) daxil edin: ";
    cin >> internetSpeedBps;

    double fileSizeBits = fileSizeGB * 8 * 1024 * 1024; 
    double downloadTimeSeconds = fileSizeBits / internetSpeedBps;

    int hours = downloadTimeSeconds / 3600;
    downloadTimeSeconds -= hours * 3600;
    int minutes = downloadTimeSeconds / 60;
    int seconds = downloadTimeSeconds - minutes * 60;

    cout << "Yüklənmə müddəti: " << hours << " saat, " << minutes << " dəqiqə, " << seconds << " saniyə." << endl;

    return 0;


    //2

    double flashDriveGB;

    cout << "Flaş drive-ın ölçüsünü (GB) daxil edin: ";
    cin >> flashDriveGB;

    double movieSizeGB = 0.760; 
    int count = (int)(flashDriveGB / movieSizeGB); 

    cout << "Flaş drive-a " << count << " dəfə kino yerləşir." << endl;

    return 0;


    //3


    int successfulStudents, failingStudents;

    cout << "Uğurla verən tələbələrin sayını daxil edin: ";
    cin >> successfulStudents;
    cout << "Borclu tələbələrin sayını daxil edin: ";
    cin >> failingStudents;

    int totalStudents = successfulStudents + failingStudents;

    double successfulPercentage = (successfulStudents * 100.0) / totalStudents; 
    double failingPercentage = (failingStudents * 100.0) / totalStudents; 

    cout << "Uğurlu tələbələrin faizi: " << successfulPercentage << "%" << endl;
    cout << "Borclu tələbələrin faizi: " << failingPercentage << "%" << endl;

    return 0;


    //4

    int secondsPassed;

    cout << "Günün başlanğıcından keçən saniyəni daxil edin: ";
    cin >> secondsPassed;

    int totalSecondsInADay = 86400; 
    int remainingSeconds = totalSecondsInADay - secondsPassed;

    int hours = remainingSeconds / 3600;
    remainingSeconds -= hours * 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds - minutes * 60;

    cout << "Günün sonuna qalan: " << hours << " saat, " << minutes << " dəqiqə, " << seconds << " saniyə." << endl;

    return 0;


    //5

    double fileSizeGB;

    cout << "Filmin ölçüsünü (GB) daxil edin: ";
    cin >> fileSizeGB;

    double diskSizeGB = 0.00144;
    int disksNeeded = (int)(fileSizeGB / diskSizeGB); 

    cout << "Bu filmi saxlamaq üçün " << disksNeeded << " disket lazım." << endl;

    return 0;


    //6

    double fraction;

    cout << "Kəsr ədəd daxil edin: ";
    cin >> fraction;

    
    int rounded = (int)(fraction * 100); 
    double result = rounded / 100.0; 

    cout << "Yuvarlaqlaşdırılmış ədəd: " << result << endl;

    return 0;

}

