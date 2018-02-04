/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSOSUtilities : NSObject

@property (getter=isMMSEnabled, nonatomic, readonly) bool MMSEnabled;

+ (bool)isMMSEnabled;
+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(id /* block */)arg4;
+ (id)sharedUtilities;

- (void)_sendMessageAndObserveNotification:(id)arg1;
- (id)_sendMessageAndReturnGUIDs:(id)arg1;
- (bool)isMMSEnabled;
- (bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
- (id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(bool)arg3;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(id /* block */)arg4;

@end
