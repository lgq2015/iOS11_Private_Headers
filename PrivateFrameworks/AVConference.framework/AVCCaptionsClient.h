/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCCaptionsClient : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    long long  _streamToken;
}

@property (readonly) bool captionsEnabled;
@property (readonly) bool captionsSupported;
@property (readonly) <AVCCaptionsClientDelegate> *delegate;
@property (readonly) long long streamToken;

- (bool)captionsEnabled;
- (bool)captionsSupported;
- (void)configureCaptions:(id)arg1;
- (bool)connect;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (void)disconnect;
- (void)enableCaptions:(bool)arg1;
- (id)initWithDelegate:(id)arg1 streamToken:(long long)arg2;
- (void)registerBlocksForNotifications;
- (long long)streamToken;

@end
