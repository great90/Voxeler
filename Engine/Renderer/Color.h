struct Color{
    Color(float r, float g, float b, float a){
        this->r = (r/255);
        this->g = (g/255);
        this->b = (b/255);
        this->a = (a/255);
    }
  
    float r, g, b, a;
};
