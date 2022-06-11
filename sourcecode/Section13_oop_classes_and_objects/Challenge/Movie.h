#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
class Movie
{
private: 
    static int movie_num;
    std::string name;
    std::string rating;
    int watched;
public:
    Movie(std::string name_val = "", std::string rating = "", int watched_val = 0);
    ~Movie();

};

#endif // _MOVIE_H_
