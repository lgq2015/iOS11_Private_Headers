/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLMultisampleFramebuffer : TSCH3DGLMixinFramebuffer <TSCH3DGLResolveFramebuffer> {
    bool  mDisableDestroyAssertion;
    TSCH3DGLFramebufferMultisample * mMultisample;
}

@property (nonatomic) bool disableDestroyAssertion;
@property (nonatomic, readonly) struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; } resolveAttributes;

+ (id)multisampleFramebufferWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1;
+ (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; })resolveAttributesFromFramebufferAttribute:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1;

- (bool)activateInsideSession:(id)arg1;
- (bool)activateResolveFramebufferInsideSession:(id)arg1;
- (void)bindColorbufferInSession:(id)arg1;
- (bool)bindInSession:(id)arg1;
- (void)dealloc;
- (void)destroyResourcesInSession:(id)arg1;
- (bool)disableDestroyAssertion;
- (void)disableSamplingInSession:(id)arg1;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1;
- (bool)p_usingMultisample;
- (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; })resolveAttributes;
- (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; })resolveFramebufferAttributes;
- (id)resolveFramebufferContext;
- (id)resolveFramebufferHandleForSession:(id)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })resolveFramebufferSize;
- (bool)resolveFramebufferValidForSession:(id)arg1;
- (id)resolvingFramebuffer;
- (void)setDisableDestroyAssertion:(bool)arg1;
- (bool)validForSession:(id)arg1;

@end
