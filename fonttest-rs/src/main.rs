extern crate freetype;
use freetype::{Library, face};

fn main() {
    let ref font = "../fonts/msgothic.ttc";
    let library = Library::init().unwrap();
    let face = library.new_face(font, 0).unwrap();
    face.set_char_size(640, 0, 96, 96).unwrap();

    face.load_glyph(12353u32, face::RENDER).unwrap();

    let glyph = face.glyph();
    println!("width: {}, pitch: {}", glyph.bitmap().width(), glyph.bitmap().pitch());
}
