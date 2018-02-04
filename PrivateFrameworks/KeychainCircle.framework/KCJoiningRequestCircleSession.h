/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCJoiningRequestCircleSession : NSObject {
    NSObject<KCJoiningRequestCircleDelegate> * _circleDelegate;
    KCAESGCMDuplexSession * _session;
    int  _state;
}

@property (readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property int state;

+ (id)sessionWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)circleDelegate;
- (id)encryptedPeerInfo:(id*)arg1;
- (id)handleCircleBlob:(id)arg1 error:(id*)arg2;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (id)initialMessage:(id*)arg1;
- (bool)isDone;
- (id)processMessage:(id)arg1 error:(id*)arg2;
- (id)session;
- (void)setState:(int)arg1;
- (int)state;

@end
