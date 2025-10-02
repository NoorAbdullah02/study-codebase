#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/videowriter.hpp>

int main()
{
    // Set the video parameters
    int width = 640;
    int height = 480;
    double fps = 24.0;
    cv::VideoWriter writer("birthday_video.mp4", cv::VideoWriter::fourcc('m', 'p', '4', 'v'), fps, cv::Size(width, height));

    // Create a canvas to draw on
    cv::Mat canvas(height, width, CV_8UC3, cv::Scalar(0, 0, 0));

    // Set the text properties
    cv::Scalar text_color(255, 255, 255);
    int font_face = cv::FONT_HERSHEY_DUPLEX;
    double font_scale = 1.0;
    int thickness = 2;

    // Display the birthday message
    std::string message = "Happy Birthday, Sandipta!";
    cv::Point text_position(width / 2 - 200, height / 2);
    cv::putText(canvas, message, text_position, font_face, font_scale, text_color, thickness, cv::LINE_AA);

    // Add an animated birthday cake
    std::vector<cv::Mat> cake_frames;
    for (int i = 1; i <= 10; i++) {
        cv::Mat cake_frame = canvas.clone();
        cv::rectangle(cake_frame, cv::Point(width / 2 - 100, height / 2 - 50), cv::Point(width / 2 + 100, height / 2 + 50), cv::Scalar(255, 0, 0), -1);
        cv::rectangle(cake_frame, cv::Point(width / 2 - 80, height / 2 - 30), cv::Point(width / 2 + 80, height / 2 + 30), cv::Scalar(255, 255, 0), -1);
        cv::rectangle(cake_frame, cv::Point(width / 2 - 60, height / 2 - 10), cv::Point(width / 2 + 60, height / 2 + 10), cv::Scalar(255, 0, 255), -1);
        cake_frames.push_back(cake_frame);
    }

    // Write the video frames
    for (const auto& frame : cake_frames) {
        writer.write(frame);
    }

    writer.release();

    std::cout << "Birthday video saved as 'birthday_video.mp4'." << std::endl;

    return 0;
}
