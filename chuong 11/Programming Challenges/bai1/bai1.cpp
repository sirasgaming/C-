// bai1
#include <iostream>
using namespace std;

// Khai báo cấu trúc MovieData
struct MovieData {
    string title;
    string director;
    int releaseYear;
    int runtime;
};

// Hàm hiển thị thông tin về bộ phim
void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
    cout << "Runtime: " << movie.runtime << " minutes" << endl;
}

int main() {
    // Khởi tạo và gán giá trị cho biến MovieData
    MovieData movie1;
    movie1.title = "The Shawshank Redemption";
    movie1.director = "Frank Darabont";
    movie1.releaseYear = 1994;
    movie1.runtime = 142;

    // Hiển thị thông tin về bộ phim
    cout << "Movie 1:" << endl;
    displayMovieInfo(movie1);

    // Khởi tạo và gán giá trị cho biến MovieData khác
    MovieData movie2;
    movie2.title = "The Godfather";
    movie2.director = "Francis Ford Coppola";
    movie2.releaseYear = 1972;
    movie2.runtime = 175;

    // Hiển thị thông tin về bộ phim khác
    cout << "\nMovie 2:" << endl;
    displayMovieInfo(movie2);

    return 0;
}