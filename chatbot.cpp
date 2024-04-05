#include <bits/stdc++.h>e
#include <windows.h>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <iostream>
using namespace std;


void wishme(){
    
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Sir"<<endl;
        string phrase = "Good Morning Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Sir"<<endl;
        string phrase = "Good Afternoon Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Sir"<<endl;
        string phrase = "Good Evening Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}

int main()
{
    system("cls");

    cout<<"\t**********THIS IS YOUR VIRTUAL ASSISSTANT************* ";
    cout<<endl<<"(Please write your queries in small alphabets)"<<endl<<endl;
    cout<<"\n\n";

    char ch[100];
    string cmnd;
            wishme();

            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i Assist you Sir...."<<endl<<endl;
				
                string phrase = "How can i Assist you Sir";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello Sir....."<<endl;
                    string phrase = "Hello Sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                
                

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "what is cse?") == 0 || strcmp(ch, "full form of cse?") == 0 || strcmp(ch, "cse stands for?") == 0 ){
                    cout<<"CSE stands for COMPUTER SYSTEM ENGINEERING"<<endl;
                    string phrase = "CSE stands for COMPUTER SYSTEM ENGINEERING";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "what a cs engineer do?'") == 0 || strcmp(ch, "What type of work a cs engineer do?") == 0 || strcmp(ch, "cs engineers work?") == 0 ){
                    cout<<"A Computer Science (CS) engineer, also known as a software engineer or computer engineer, performs a wide range of tasks related to the design, development, implementation, and maintenance of software systems and technology solutions. The specific responsibilities of a CS engineer can vary based on their role, specialization, and the industry they work in."<<endl;
                    string phrase = "A Computer Science (CS) engineer, also known as a software engineer or computer engineer, performs a wide range of tasks related to the design, development, implementation, and maintenance of software systems and technology solutions. The specific responsibilities of a CS engineer can vary based on their role, specialization, and the industry they work in.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "scope of cse?") == 0 || strcmp(ch, "what is the scope of cs engineering") == 0 || strcmp(ch, "what is the scope of cse?") == 0 ){
                    cout<<"The scope of Computer Science and Engineering (CSE) is vast and continually expanding due to the rapid advancements in technology and its integration into various aspects of our lives. CSE encompasses a wide range of topics and applications like robotics,networking,HCI etc"<<endl;
                    string phrase = "The scope of Computer Science and Engineering (CSE) is vast and continually expanding due to the rapid advancements in technology and its integration into various aspects of our lives. CSE encompasses a wide range of topics and applications like robotics,networking,HCI etc";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "what are the requirements to become a cs engineer?") == 0 || strcmp(ch, "requirements to become a cs engineer?") == 0 || strcmp(ch, "What are the requirements for cs engineer?") == 0 ){
                    cout<<"To become a CS engineer, you typically need a bachelor's degree in computer science or a related field, along with strong programming skills. Advanced positions may require a master's degree and expertise in areas like software development, algorithms, and system design."<<endl;
                    string phrase = "To become a CS engineer, you typically need a bachelor's degree in computer science or a related field, along with strong programming skills. Advanced positions may require a master's degree and expertise in areas like software development, algorithms, and system design.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "is software engineering and computer engineering same?") == 0 || strcmp(ch, "is software engineering and cs engineering same?") == 0 || strcmp(ch, "is software engineering and computer system engineering same?") == 0 ){
                    cout<<"Software engineering focuses on designing, developing, and maintaining software applications, while computer engineering involves designing and integrating hardware and software systems, often including aspects like computer architecture and embedded systems."<<endl;
                    string phrase = "Software engineering focuses on designing, developing, and maintaining software applications, while computer engineering involves designing and integrating hardware and software systems, often including aspects like computer architecture and embedded systems.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
				
				else if(strcmp(ch, "tell me some engineering universities in karachi") == 0 || strcmp(ch, "engineering university in karachi") == 0 || strcmp(ch, "engineering univerities in karachi") == 0 ){
                    cout<<"NED University of Engineering and Technology\nPakistan Navy Engineering College (PNEC)\nNational University of Sciences and Technology (NUST)\nDawood University of Engineering and Technology\nSir Syed University of Engineering and Technology\nIndus University, Karachi\nUsman Institute of Technology (UIT)\nHamdard University\nFaculty of Engineering Sciences and Technology\nTextile Institute of Pakistan (TIP)"<<endl;
                    string phrase = "NED University of Engineering and Technology,Pakistan Navy Engineering College (PNEC), National University of Sciences and Technology (NUST),Dawood University of Engineering and Technology,Sir Syed University of Engineering and Technology,Indus University, Karachi,Usman Institute of Technology (UIT),Hamdard University, Faculty of Engineering Sciences and Technology,Textile Institute of Pakistan (TIP)";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
				
				else if(strcmp(ch, "how can i learn programming?") == 0 || strcmp(ch, "how can i do code?") == 0 || strcmp(ch, "how to learn coding?") == 0 ){
                    cout<<"To learn coding, start with an online platform like Codecademy or Khan Academy, choose a beginner-friendly language like Python, and practice regularly by working on small projects and gradually progressing to more complex ones."<<endl;
                    string phrase = "To learn coding, start with an online platform like Codecademy or Khan Academy, choose a beginner-friendly language like Python, and practice regularly by working on small projects and gradually progressing to more complex ones.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
				
				else if(strcmp(ch, "which programming language is easy to learn") == 0 || strcmp(ch, "easiest programming language") == 0){
                    cout<<"Python is often considered one of the easiest programming languages to learn, especially for beginners. Its clear syntax, readability, and extensive libraries make it a great choice for those new to coding."<<endl;
                    string phrase = "Python is often considered one of the easiest programming languages to learn, especially for beginners. Its clear syntax, readability, and extensive libraries make it a great choice for those new to coding.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
				
				else if(strcmp(ch, "best platform to learn coding") == 0 || strcmp(ch, "best platform to learn programming") == 0 || strcmp(ch, "what is the best platform to learn coding?") == 0|| strcmp(ch, "what is the best platform to learn programming?") == 0 ){
                    cout<<"Codecademy is a popular online platform for learning coding, offering interactive lessons in various programming languages through hands-on projects and exercises, making it suitable for beginners and intermediate learners."<<endl;
                    string phrase = "Codecademy is a popular online platform for learning coding, offering interactive lessons in various programming languages through hands-on projects and exercises, making it suitable for beginners and intermediate learners.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }                
                

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    
                    datetime();
}
                
                else if(strcmp(ch, "Open Google") == 0){
                    cout<<"openining google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "Open YouTube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "Open Instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }
                else if(strcmp(ch, "Open Whatsapp") == 0){
                    cout<<"openining whatsapp....."<<endl;
                    string phrase = "opening whatsapp";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://web.whatsapp.com/");
                }
                
                else if(strcmp(ch, "Open Excel") == 0){
                    cout<<"openining Excel....."<<endl;
                    string phrase = "opening Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute (0,"open","E:\\Microsoft Excel 2010.lnk",NULL,NULL,SW_NORMAL);
                }
                else if(strcmp(ch, "Open Dawood University") == 0){
                    cout<<"openining Dawood university....."<<endl;
                    string phrase = "opening Dawood university";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://duet.edu.pk/");
                }
                 else if(strcmp(ch,"Open Word") == 0)
                 {
                 	
                 	cout<<"openining word....."<<endl;
                    string phrase = "opening word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute (0,"open","E:\Microsoft Word 2010.lnk",NULL,NULL,SW_NORMAL);
				 }
				 else if(strcmp(ch, "Open Power Point") == 0){
                    cout<<"openining PowerPoint....."<<endl;
                    string phrase = "opening PowerPoint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute (0,"open","E:\Microsoft PowerPoint 2010.lnk",NULL,NULL,SW_NORMAL);
                }
            
              else
				 {
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        
    return 0;
}

