/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKBaseEffect : NSObject <GLKNamedEffect> {
    unsigned char  _colorMaterialEnabled;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    }  _constantColor;
    GLKEffectPropertyConstantColor * _constantColorProp;
    GLKEffect * _effect;
    unsigned char  _effectStale;
    GLKEffectPropertyFog * _fog;
    unsigned char  _fogEnabled;
    NSString * _label;
    GLKEffectPropertyLight * _light0;
    GLKEffectPropertyLight * _light1;
    GLKEffectPropertyLight * _light2;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    }  _lightModelAmbientColor;
    unsigned char  _lightModelTwoSided;
    int  _lightingType;
    GLKEffectPropertyMaterial * _material;
    unsigned int  _programName;
    NSMutableArray * _propertyArray;
    unsigned char  _propertyArrayStale;
    GLKEffectPropertyTexture * _texture2d0;
    GLKEffectPropertyTexture * _texture2d1;
    NSArray * _textureOrder;
    GLKEffectPropertyTransform * _transform;
    unsigned char  _useConstantColor;
}

@property (nonatomic) unsigned char colorMaterialEnabled;
@property (nonatomic) union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } constantColor;
@property (nonatomic, readonly) GLKEffectPropertyConstantColor *constantColorProp;
@property (nonatomic) GLKEffect *effect;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic, readonly) GLKEffectPropertyFog *fog;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) GLKEffectPropertyLight *light0;
@property (nonatomic, readonly) GLKEffectPropertyLight *light1;
@property (nonatomic, readonly) GLKEffectPropertyLight *light2;
@property (nonatomic) union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } lightModelAmbientColor;
@property (nonatomic) unsigned char lightModelTwoSided;
@property (nonatomic) int lightingType;
@property (nonatomic, readonly) GLKEffectPropertyMaterial *material;
@property (nonatomic) unsigned int programName;
@property (nonatomic, readonly) NSMutableArray *propertyArray;
@property (nonatomic) unsigned char propertyArrayStale;
@property (nonatomic, readonly) GLKEffectPropertyTexture *texture2d0;
@property (nonatomic, readonly) GLKEffectPropertyTexture *texture2d1;
@property (nonatomic, copy) NSArray *textureOrder;
@property (nonatomic, readonly) GLKEffectPropertyTransform *transform;
@property (nonatomic) unsigned char useConstantColor;

- (unsigned char)colorMaterialEnabled;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })constantColor;
- (id)constantColorProp;
- (void)dealloc;
- (id)description;
- (id)effect;
- (unsigned char)effectStale;
- (id)fog;
- (id)init;
- (id)label;
- (id)light0;
- (id)light1;
- (id)light2;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })lightModelAmbientColor;
- (unsigned char)lightModelTwoSided;
- (int)lightingType;
- (id)material;
- (bool)perPixelLightingEnabled;
- (bool)perVertexLightingEnabled;
- (void)prepareToDraw;
- (unsigned int)programName;
- (id)propertyArray;
- (unsigned char)propertyArrayStale;
- (void)setColorMaterialEnabled:(unsigned char)arg1;
- (void)setConstantColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setEffect:(id)arg1;
- (void)setEffectStale:(unsigned char)arg1;
- (void)setLabel:(id)arg1;
- (void)setLightModelAmbientColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setLightModelTwoSided:(unsigned char)arg1;
- (void)setLightingType:(int)arg1;
- (void)setProgramName:(unsigned int)arg1;
- (void)setPropertyArrayStale:(unsigned char)arg1;
- (void)setTextureOrder:(id)arg1;
- (void)setUseConstantColor:(unsigned char)arg1;
- (id)texture2d0;
- (id)texture2d1;
- (id)textureOrder;
- (id)transform;
- (void)updateBaseEffect;
- (unsigned char)useConstantColor;

@end
