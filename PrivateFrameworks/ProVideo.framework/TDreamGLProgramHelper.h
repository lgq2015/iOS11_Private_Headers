/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamGLProgramHelper : NSObject {
    bool  _initialized;
    NSMutableArray * attributes;
    unsigned int  fragShader;
    unsigned int  program;
    NSMutableArray * uniforms;
    unsigned int  vertShader;
}

@property (nonatomic) bool initialized;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (bool)compileShader:(unsigned int*)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (void)dealloc;
- (id)fragmentShaderLog;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (bool)initialized;
- (bool)link;
- (id)logForOpenGLObject:(unsigned int)arg1 infoCallback:(int (*)arg2 logFunc:(int (*)arg3;
- (id)programLog;
- (void)setInitialized:(bool)arg1;
- (unsigned int)uniformIndex:(id)arg1;
- (void)use;
- (id)vertexShaderLog;

@end
