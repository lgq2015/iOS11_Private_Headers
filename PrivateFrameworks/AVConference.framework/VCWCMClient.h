/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCWCMClient : NSObject {
    NSObject<OS_xpc_object> * connection;
    NSObject<OS_dispatch_queue> * connectionQueue;
    NSObject<WCMClientDelegate> * wcmClientDelegate;
}

@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) <WCMClientDelegate> *wcmClientDelegate;

- (id)connection;
- (id)connectionQueue;
- (void)dealloc;
- (id)init;
- (void)setWcmClientDelegate:(id)arg1;
- (void)startWCMClient;
- (void)stopWCMClient;
- (id)wcmClientDelegate;

@end
