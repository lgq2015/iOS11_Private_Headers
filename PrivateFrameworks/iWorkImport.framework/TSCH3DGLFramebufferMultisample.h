/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFramebufferMultisample : NSObject <TSCHUnretainedParent> {
    struct FramebufferAttributes { 
        int type; 
        long long samples; 
        int colorDataType; 
        int colorFormat; 
        int depthDataType; 
        bool linearFilter; 
        bool discardHint; 
    }  mAttributes;
    bool  mMultisampleDisabled;
    TSCH3DGLFBO * mMultisampleFBO;
    <TSCH3DGLResolveFramebuffer> * mParent;
    bool  mResolved;
}

@property (nonatomic, readonly) struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; } attributes;
@property (nonatomic, readonly) bool resolved;
@property (nonatomic, readonly) bool usingMultisample;

+ (id)multisampleWithParent:(id)arg1 framebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg2;

- (id).cxx_construct;
- (bool)activateInsideSession:(id)arg1;
- (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; })attributes;
- (bool)bindInSession:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (void)disableSamplingInSession:(id)arg1;
- (id)initWithParent:(id)arg1 framebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg2;
- (id)multisampleFBOResource;
- (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; })p_clampedAttributes;
- (bool)p_createMultisampleFBOOnDemandInsideSession:(id)arg1 returningResolveFramebufferActivated:(bool*)arg2;
- (struct SessionLoadResourceResult { bool x1; bool x2; bool x3; id x4; })p_loadFramebufferInSession:(id)arg1;
- (bool)p_supportsMultisample;
- (void)resolveInSession:(id)arg1;
- (bool)resolved;
- (bool)usingMultisample;
- (bool)validForSession:(id)arg1;

@end
