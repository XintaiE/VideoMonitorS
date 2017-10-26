#ifndef _3DS_MODEL_H
#define _3DS_MODEL_H

#include <string.h>
#include "include/Load3DS.h"

#include <vector>
#include <QOpenGLFunctions_3_0>
#include <QOpenGLShaderProgram>

// Load 3DS
class cModelObject : protected QOpenGLFunctions_3_0
{
public:
    cModelObject();
    virtual ~cModelObject();

    int  materialID;
    bool bHasTexture;
    std::vector<QVector3D>        *VertPos;          // Vertex position
    std::vector<QVector3D>        *VertNorms;        // vertex normal
    std::vector<QVector2D>        *VertTexts;        // vertex texture
    std::vector<unsigned short>   *faceIndexes;      // Vertex index

    //VAO and VBO
    GLuint bufferObjects[4];
    GLuint vertexArrayBufferObject;
    // Display
    void Draw();
    // ABO
    void GenerateVABO();
};

//3ds model
class cMeshModel
{
public:
    cMeshModel();
    cMeshModel(QString strFileName);
    virtual ~cMeshModel(void);
    // Draw
    void Render(QMatrix4x4 matrix);
    // default parameters
    void initDefault();
    // Init Shader
    void InitializeShader();
    // Load 3DS Model file
    bool Load3DSFromFile(const char *sfilename);
    // Create Texture
    bool CreateTexture(GLuint textureArray[], char* strFileName, int textureID);

public:
    // Texture
    GLuint *g_Texture;
    GLuint *ui_TextureID;
    QOpenGLShaderProgram *m_program;

    // model file path
    char g_sMediaPath[255];

    // GLSL Paramerers Location
    GLuint iTransform, iColor, iInteger;

    // 3DS model
    CLoad3DS::t3DModel m_3DModel;

    // Object List
    QVector<cModelObject*> m_currentObj;
    std::map<QString, unsigned int>m_MapTexture;
};

#endif // !defined(AFX_3DSMODEL_H__98FC8CCA_A44F_4C45_9C99_CAC11614A519__INCLUDED_)
