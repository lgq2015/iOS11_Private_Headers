/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLShader : NSObject {
    NSMutableDictionary * _attributeLocations;
    bool  _isActive;
    NSString * _name;
    unsigned int  _programObject;
    NSMutableDictionary * _uniforms;
    NSMutableSet * _uniformsNeedingUpdate;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned int programObject;

- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDefaultHorizontalBlurShader;
- (id)initWithDefaultRandomColorShader;
- (id)initWithDefaultRandomColorTextureShader;
- (id)initWithDefaultTextureAndOpacityShader;
- (id)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(bool)arg1 ignoreTextureOpacity:(bool)arg2;
- (id)initWithDefaultTextureCoordinatesShader;
- (id)initWithDefaultTextureShader;
- (id)initWithDefaultTextureShaderWithMotionBlur:(bool)arg1 ignoreTextureOpacity:(bool)arg2;
- (id)initWithDefaultUniformMotionBlurShader;
- (id)initWithDefaultVelocityCollectionShaderWithSampleCount:(unsigned long long)arg1 isSingleObject:(bool)arg2;
- (id)initWithDefaultVelocityMeshShader;
- (id)initWithDefaultVelocityShader;
- (id)initWithDefaultVelocityVisualizerShader;
- (id)initWithDefaultVerticalBlurShader;
- (id)initWithShaderFileName:(id)arg1 bundle:(id)arg2;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3 version:(id)arg4;
- (id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 defines:(id)arg4;
- (id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 defines:(id)arg4 version:(id)arg5;
- (bool)isActive;
- (bool)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3 version:(id)arg4;
- (int)locationForAttribute:(id)arg1;
- (int)locationForUniform:(id)arg1;
- (id)name;
- (bool)p_compileShader:(unsigned int*)arg1 withType:(unsigned int)arg2 shaderString:(id)arg3 defines:(id)arg4 version:(id)arg5;
- (id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3;
- (id)p_qualifierForUniform:(id)arg1 class:(Class)arg2;
- (void)p_setQualifiersIfNecessary;
- (void)p_updateUniformsAndAttributesFromShader;
- (unsigned int)programObject;
- (void)setCGFloat:(double)arg1 forUniform:(id)arg2;
- (void)setColor:(struct { float x1; float x2; float x3; float x4; })arg1 forUniform:(id)arg2;
- (void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2;
- (void)setGLFloat:(float)arg1 forUniform:(id)arg2;
- (void)setGLint:(int)arg1 forShaderQualifier:(id)arg2;
- (void)setGLint:(int)arg1 forUniform:(id)arg2;
- (void)setInteger:(long long)arg1 forShaderQualifier:(id)arg2;
- (void)setInteger:(long long)arg1 forUniform:(id)arg2;
- (void)setLifeSpan:(struct { float x1; float x2; })arg1 forUniform:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forShaderQualifier:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forUniform:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 forShaderQualifier:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 forUniform:(id)arg2;
- (void)setName:(id)arg1;
- (void)setPoint2D:(struct { float x1; float x2; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint2D:(struct { float x1; float x2; })arg1 forUniform:(id)arg2;
- (void)setPoint3D:(struct { float x1; float x2; float x3; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint3D:(struct { float x1; float x2; float x3; })arg1 forUniform:(id)arg2;
- (void)setPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forShaderQualifier:(id)arg2;
- (void)setPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forUniform:(id)arg2;
- (id)shaderQualifierForUniform:(id)arg1 type:(long long)arg2;
- (void)teardown;
- (bool)validateUniforms;

@end
