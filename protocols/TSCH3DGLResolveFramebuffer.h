/* made by EzioChiu.
 */

@protocol TSCH3DGLResolveFramebuffer

@required

- (bool)activateResolveFramebufferInsideSession:(TSCH3DSession *)arg1;
- (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; })resolveFramebufferAttributes;
- (TSCH3DGLContext *)resolveFramebufferContext;
- (TSCH3DGLHandle *)resolveFramebufferHandleForSession:(TSCH3DSession *)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })resolveFramebufferSize;
- (bool)resolveFramebufferValidForSession:(TSCH3DSession *)arg1;

@end
