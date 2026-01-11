#pragma once
#include "raylib.h"
#include <string>

static constexpr int kTargetFPS = 60;

class Window {
public:
	friend class Board;

	Window() = default;
	Window(std::string title, int width, int height)
		: title(title)
		, width(width)
		, height(height)
	{
		InitWindow(width, height, title.c_str());
		SetTargetFPS(kTargetFPS);
	}

	~Window() {
		CloseWindow();
	}

private:
	std::string title;
	int width = 0;
	int height = 0;
};
