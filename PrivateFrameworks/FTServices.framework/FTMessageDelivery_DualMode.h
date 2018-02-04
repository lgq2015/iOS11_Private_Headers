/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate> {
    FTMessageDelivery * _apsDelivery;
    FTMessageQueue * _dualModeQueue;
    FTMessageDelivery * _httpDelivery;
    NSString * _userAgentString;
}

@property (readonly) NSArray *allMessages;
@property (readonly) bool busy;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasQueuedItems;
@property (readonly) unsigned long long hash;
@property bool logToRegistration;
@property unsigned long long maxConcurrentMessages;
@property (readonly) long long maxLargeMessageSize;
@property (readonly) long long maxMessageSize;
@property (readonly) NSArray *queuedMessages;
@property bool retryInAirplaneMode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userAgent;

- (void).cxx_destruct;
- (void)_enterBackOffMode;
- (bool)_isInBackoffMode;
- (long long)_randomPercentageChanceForDualDelivery;
- (bool)_shouldUseDualDeliveryForMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)dequeueMessageIfNeeded;
- (void)handleTranslationAndDeliveryOnAPS:(id)arg1;
- (id)initWithPreferedType:(long long)arg1;
- (void)invalidate;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)queuedMessages;
- (bool)sendMessage:(id)arg1;
- (void)setUserAgent:(id)arg1;

@end
