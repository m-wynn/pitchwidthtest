// Std. Includes
#include <iostream>
// FreeType
#include <freetype2/ft2build.h>
#include FT_FREETYPE_H


// The MAIN function, from here we start our application and run the Game loop
int main()
{
    FT_Library ft;
    if (FT_Init_FreeType(&ft))
        std::cout << "ERROR::FREETYPE: Could not init FreeType Library" << std::endl;

    FT_Face face;
    if (FT_New_Face(ft, "../fonts/msgothic.ttc", 0, &face))
        std::cout << "ERROR::FREETYPE: Failed to load font" << std::endl;

    FT_Set_Char_Size(face, 640, 0, 96, 96);

    if (FT_Load_Char(face, 12353, FT_LOAD_RENDER))
    {
        std::cout << "ERROR::FREETYTPE: Failed to load Glyph" << std::endl;
    }
    std::cout << "width: " << face->glyph->bitmap.width << ", pitch: " << face->glyph->bitmap.pitch << std::endl;
    // Generate textureinuv
}
