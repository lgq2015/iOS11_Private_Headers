/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer> {
    MFError * _error;
    NSString * _serverId;
    bool  _success;
}

@property (nonatomic, readonly) MFError *error;
@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) bool success;

- (void)dealloc;
- (id)error;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)serverId;
- (bool)success;

@end
