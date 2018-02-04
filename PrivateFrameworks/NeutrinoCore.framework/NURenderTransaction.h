/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderTransaction : NSObject {
    NSObject<OS_dispatch_group> * _group;
    long long  _nestingLevel;
    NSMutableArray * _requests;
}

@property (readonly) NSArray *pendingRequests;

+ (void)_commit:(id)arg1;
+ (id)assertCurrentTransaction;
+ (void)begin;
+ (void)commit;
+ (void)commitAndNotifyOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)currentTransaction;
+ (id)ensureCurrentTransaction;
+ (void)group:(id /* block */)arg1;
+ (void)setCurrentTransaction:(id)arg1;
+ (void)withCurrentTransaction:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)begin;
- (bool)commit;
- (void)flush;
- (id)init;
- (void)notifyCompletion:(id)arg1 block:(id /* block */)arg2;
- (id)pendingRequests;
- (void)resetPendingRequests;
- (void)submitPendingRequests;
- (void)submitRequest:(id)arg1;

@end
