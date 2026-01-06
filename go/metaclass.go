package main

import "fmt"

type Metaclass interface {
    Describe() map[string]interface{}
}

type Grass struct{}

func (g Grass) Describe() map[string]interface{} {
    return map[string]interface{}{
        "height":  "10cm",
        "color":   "green",
        "density": "medium",
    }
}

type Water struct{}

func (w Water) Describe() map[string]interface{} {
    return map[string]interface{}{
        "state":      "liquid",
        "temperature": "0-100C",
        "flow":        true,
    }
}

func main() {
    objects := []Metaclass{Grass{}, Water{}}
    for _, obj := range objects {
        fmt.Println(obj.Describe())
    }
}

