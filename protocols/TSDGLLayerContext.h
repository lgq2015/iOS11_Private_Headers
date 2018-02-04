/* made by EzioChiu.
 */

@protocol TSDGLLayerContext <NSObject>

@required

- (bool)createFramebufferFromLayer:(TSDGLLayer *)arg1;
- (bool)isValid;
- (bool)makeCurrentContext;
- (void)presentRenderbuffer;
- (void)teardown;

@optional

- (void)lock;
- (void)unlock;

@end
