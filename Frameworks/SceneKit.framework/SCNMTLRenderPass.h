/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLRenderPass : NSObject {
    id /* block */  executeBlock;
    id /* block */  setupBlock;
}

@property (nonatomic, copy) id /* block */ executeBlock;
@property (nonatomic, copy) id /* block */ setupBlock;

- (void)dealloc;
- (void)execute:(id)arg1;
- (id /* block */)executeBlock;
- (void)setExecuteBlock:(id /* block */)arg1;
- (void)setSetupBlock:(id /* block */)arg1;
- (void)setup:(id)arg1;
- (id /* block */)setupBlock;

@end
