/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPResolver : NWResolver {
    id /* block */  _resolveCompletionHandler;
}

@property (copy) id /* block */ resolveCompletionHandler;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)resolveCompletionHandler;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (void)setResolveCompletionHandler:(id /* block */)arg1;

@end
