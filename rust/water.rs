use crate::metaclass::Metaclass;

pub struct Water;

impl Metaclass for Water {
    fn display_attributes(&self) {
        println!("Water Attributes:");
        println!("State: Liquid");
        println!("Temperature: 0-100C");
        println!("Flow: Yes");
        println!("Evaporation: Yes");
        println!("Freezing: Yes");
    }
}

