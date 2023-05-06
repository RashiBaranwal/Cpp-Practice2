#include <iostream>
#include <cstring>

using namespace std;

// strcpy()-> is a function used to copy the function
//<cstring> --> is used when we use string in the code

class CWH
{

protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {

        title = s;
        rating = r;
    }
    virtual void display() {
        cout<<"Bogus Code";
        // If we will not write 'virtual' then it will run this Bogus Code.
    }
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, int vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars " << endl;
        cout << "Length of this video is: " << videoLength << " minutes " << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r) //Using Constructor 
    {
        words = wc;
    }
    void display()
    {

        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorials is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // For Code with Harry Text
    title = "Django  tutorial Text ";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout<<endl;
    tuts[1]->display();

    return 0;
}

/*
Rules for virtual functions-

1- They cannot be static
2- They are accessed by object pointers
3- Virtual function can be a friend of another class
4- A virtual function in a base class might not be used.
5- If a virtual function is defined in a base class, there
   in no necessity of redifining it in the derived class
*/
