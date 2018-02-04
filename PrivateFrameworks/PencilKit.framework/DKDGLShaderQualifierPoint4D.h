/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLShaderQualifierPoint4D : DKDGLShaderQualifier {
    struct { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  _GLPoint4DValue;
    struct { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  _proposedGLPoint4DValue;
}

@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } GLPoint4DValue;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } proposedGLPoint4DValue;

- (struct { float x1; float x2; float x3; float x4; })GLPoint4DValue;
- (id)description;
- (struct { float x1; float x2; float x3; float x4; })proposedGLPoint4DValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLPoint4DValue:(struct { float x1; float x2; float x3; float x4; })arg1;

@end
