/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier {
    int  _GLintValue;
    int  _proposedGLintValue;
}

@property (nonatomic, readonly) int GLintValue;
@property (nonatomic) int proposedGLintValue;

- (int)GLintValue;
- (id)description;
- (int)proposedGLintValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLintValue:(int)arg1;

@end
