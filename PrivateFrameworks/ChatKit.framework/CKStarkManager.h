/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStarkManager : NSObject {
    bool  _isStarkConnected;
    UIViewController * _starkRootViewController;
    UIScreen * _starkScreen;
    UIWindow * _starkWindow;
}

@property (nonatomic, readonly) bool isStarkConnected;
@property (nonatomic, retain) UIViewController *starkRootViewController;
@property (nonatomic, retain) UIScreen *starkScreen;
@property (nonatomic, retain) UIWindow *starkWindow;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_assistantContextForConversation:(id)arg1;
- (id)_assistantContextForRecipientID:(id)arg1;
- (void)activateForConversation:(id)arg1;
- (void)activateForRecipient:(id)arg1;
- (void)attachStarkToScreen:(id)arg1;
- (void)dealloc;
- (void)detachStarkScreen:(id)arg1;
- (id)init;
- (bool)isStarkConnected;
- (void)screenDidConnectNotification:(id)arg1;
- (void)screenDidDisconnectNotification:(id)arg1;
- (void)setStarkRootViewController:(id)arg1;
- (void)setStarkScreen:(id)arg1;
- (void)setStarkWindow:(id)arg1;
- (id)starkRootViewController;
- (id)starkScreen;
- (id)starkWindow;
- (void)startListeningForScreenNotifications;

@end
