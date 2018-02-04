/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionStatusPlaybackInformation : NSObject {
    bool  _definitiveInformation;
    bool  _hasPlaybackCapability;
    bool  _requiresCarrierManualVerification;
    bool  _shouldUseAccountLessStreaming;
    bool  _shouldUseLease;
    id  _subscriptionStatusObject;
}

@property (getter=isDefinitiveInformation, nonatomic, readonly) bool definitiveInformation;
@property (nonatomic, readonly) bool hasPlaybackCapability;
@property (nonatomic, readonly) bool requiresCarrierManualVerification;
@property (nonatomic, readonly) bool shouldUseAccountLessStreaming;
@property (nonatomic, readonly) bool shouldUseLease;

- (void).cxx_destruct;
- (id)description;
- (bool)hasPlaybackCapability;
- (id)initWithICSubscriptionStatus:(id)arg1;
- (id)initWithSubscriptionStatus:(id)arg1;
- (bool)isDefinitiveInformation;
- (bool)requiresCarrierManualVerification;
- (bool)shouldUseAccountLessStreaming;
- (bool)shouldUseLease;

@end
