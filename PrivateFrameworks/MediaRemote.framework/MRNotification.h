/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNotification : NSObject {
    NSString * _notification;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _userInfo;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (nonatomic, readonly) NSString *notification;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcMessage;

- (void)dealloc;
- (id)initWithNotification:(id)arg1 userInfo:(id)arg2 queue:(id)arg3;
- (id)notification;
- (id)queue;
- (void)setXpcMessage:(id)arg1;
- (id)userInfo;
- (id)xpcMessage;

@end
