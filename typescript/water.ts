import { Metaclass } from "./metaclass";

export class Water implements Metaclass {
  readonly type = "water";

  describe() {
    return {
      state: "liquid",
      temperatureRange: "0–100°C",
      flow: true,
      evaporation: true,
      freezing: true
    };
  }
}

