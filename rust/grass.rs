use crate::metaclass::Metaclass;

pub struct Grass;

impl Metaclass for Grass {
    fn display_attributes(&self) {
        println!("Grass Attributes:");
        println!("Height: 10cm");
        println!("Color: Green");
        println!("Density: Medium");
        println!("Growth Condition: Humid");
        println!("Interaction: Can be trampled or cut");
    }
}

