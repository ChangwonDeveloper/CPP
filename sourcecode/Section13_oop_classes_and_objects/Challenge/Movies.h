#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "Movie.h"
class Movies
{
private:
    std::vector<Movie> m;
public:
    Movies(std::string name_val = "", std::string rating_val = "", int watched_val = 0);
    ~Movies();

};

#endif // _MOVIES_H_
