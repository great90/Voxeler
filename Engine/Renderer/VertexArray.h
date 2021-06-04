#include "../Core.h"
#include "Vertex.h"

//this vertex array class not support texture for now so a developer not add tex coords

struct VertexArrayUsage{
    float* vertices;
    GLuint* indices;
};

class VertexArray{
private:
    GLuint vao;
    VertexArrayUsage* usage;
    VertexBuffer* vbo;
    IndexBuffer* ibo;
public:
    VertexArray() : vao(0), usage(nullptr), vbo(nullptr), ibo(nullptr) { }
    ~VertexArray() = default;
    
    void Create(){
        if(!usage)return;
        glBindVertexArray(0);
        glGenVertexArrays(1, &vao);
        glBindVertexArray(vao);
        
        vbo = new VertexBuffer();
        vbo->Create(usage->vertices, sizeof(usage->vertices));
        AddBuffer(vbo, 0, 3);
        
        ibo = new IndexBuffer();
        ibo->Create(usage->indices, sizeof(usage->indices));
    }
    
    void AddBuffer(VertexBuffer* buffer, int index, int size){
        buffer->UnBind();
        buffer->Bind();
        
        glBindVertexArray(0);
        glBindVertexArray(vao);
        
        glEnableVertexAttribArray(index);
        glVertexAttribPointer(index, size, GL_FLOAT, GL_FALSE, 0, 0);
    }
      
    void Bind(){
        glBindVertexArray(0);
        glBindVertexArray(vao);
    }
    
    void UnBind(){
        if(!vao)return;
        glBindVertexArray(vao);
        glBindVertexArray(0);
    }
    
    GLuint Size(){
        return vbo->Size();
    }
    
    GLuint Count(){
        return ibo->Count();
    }
    
    GLuint Vao(){
        return vao;
    }
    
    void SetUsage(VertexArrayUsage Usage){
        usage = Usage;
    }
};

class VertexBuffer{
private:
    GLuint vbo;
    GLuint size;
public:
    VertexBuffer() : vbo(0), size(0) { }
    ~VertexBuffer() = default;
    
    void Create(float* vertices, int Size){
        size = Size;
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glGenBuffers(1, &vbo);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, size * sizeof(float), vertices, GL_STATIC_DRAW);
    }
    
    void Bind(){
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
    }
    
    void UnBind(){
        if(!vbo)return;
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }
    
    GLuint Vbo(){
        return vbo;
    }
    
    GLuint Size(){
        return size;
    }
};

class IndexBuffer{
private:
    GLuint ibo;
    GLuint count;
public:
    IndexBuffer() : ibo(0), count(0) { }
    ~IndexBuffer() = default;
    
    void Create(GLuint* indices, int Count){
        count = Count;
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
        glGenBuffers(1, &ibo);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(GLuint), indices, GL_STATIC_DRAW);
    }
    
    void Bind(){
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
    }
    
    void UnBind(){
        if(!ibo)return;
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    }
    
    GLuint Count(){
        return count;
    }
    
    GLuint Ibo(){
        return ibo;
    }
};
