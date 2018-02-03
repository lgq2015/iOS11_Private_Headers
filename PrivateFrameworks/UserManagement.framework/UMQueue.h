/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)client;
+ (id)server;
+ (id)userList;

- (void).cxx_destruct;
- (void)_executeWithSelf:(id)arg1 block:(id /* block */)arg2 synchronously:(bool)arg3;
- (void)executeWithSelf:(id)arg1 asynchronously:(id /* block */)arg2;
- (void)executeWithSelf:(id)arg1 synchronously:(id /* block */)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;

@end