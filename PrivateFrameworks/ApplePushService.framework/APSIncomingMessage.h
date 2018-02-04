/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSIncomingMessage : APSMessage

@property (getter=wasFromStorage, nonatomic) bool fromStorage;
@property (getter=wasLastMessageFromStorage, nonatomic) bool lastMessageFromStorage;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSData *token;

- (long long)priority;
- (void)setFromStorage:(bool)arg1;
- (void)setLastMessageFromStorage:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setToken:(id)arg1;
- (id)timestamp;
- (id)token;
- (bool)wasFromStorage;
- (bool)wasLastMessageFromStorage;

@end
