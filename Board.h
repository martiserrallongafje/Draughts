#pragma once
#include "Drawable.h"
#include "Entity.h"

#include "raylib.h"


class Board : public IEntity, public IDrawable {
    void draw() const override {
		ClearBackground(RAYWHITE);

		int cell = 640 / 8;

		for (int y = 0; y < 8; y++) {
			for (int x = 0; x < 8; x++) {
				bool dark = (x + y) % 2 == 1;
				DrawRectangle(x * cell, y * cell, cell, cell,
					dark ? DARKBROWN : LIGHTGRAY);
			}
		}
    }
};
