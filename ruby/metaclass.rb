class Metaclass
  def describe
    raise NotImplementedError, "Subclasses must implement the describe method"
  end
end

class Grass < Metaclass
  def describe
    {
      height: "10cm",
      color: "green",
      density: "medium"
    }
  end
end

class Water < Metaclass
  def describe
    {
      state: "liquid",
      temperature: "0-100C",
      flow: true
    }
  end
end

grass = Grass.new
water = Water.new

puts grass.describe
puts water.describe

