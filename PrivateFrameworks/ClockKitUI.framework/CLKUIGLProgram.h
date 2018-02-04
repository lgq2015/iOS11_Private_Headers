/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIGLProgram : NSObject {
    unsigned int  _isValidateSuccessful;
    unsigned int  _isValidated;
    NSString * _name;
    unsigned int  _program;
    struct CLKUIGLUniforms { 
        int rotation; 
        int sampleRadius; 
        int sampleCenter; 
        int primaryTexture; 
        int secondaryTexture; 
    }  _uniforms;
}

@property (nonatomic, readonly) NSString *name;

+ (id)programWithName:(id)arg1 vsh:(const char *)arg2 fsh:(const char *)arg3;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 gid:(unsigned int)arg2 uniforms:(struct CLKUIGLUniforms { int x1; int x2; int x3; int x4; int x5; })arg3;
- (id)name;
- (struct CLKUIGLUniforms { int x1; int x2; int x3; int x4; int x5; })uniforms;
- (void)use;
- (bool)validate;

@end
