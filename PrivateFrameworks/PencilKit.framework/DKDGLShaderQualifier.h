/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLShaderQualifier : NSObject {
    NSString * _name;
    bool  _needsUpdate;
    int  _uniformLocation;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic) int uniformLocation;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)name;
- (bool)needsUpdate;
- (void)setGLUniformCheckWithShader:(id)arg1;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setUniformLocation:(int)arg1;
- (int)uniformLocation;
- (void)updateUniformLocationWithShaderProgramObject:(int)arg1;

@end
