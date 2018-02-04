/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCancelRideIntentResponse : INIntentResponse {
    INCurrencyAmount * _cancellationFee;
    NSDateComponents * _cancellationFeeThreshold;
}

@property (nonatomic, retain) INCurrencyAmount *cancellationFee;
@property (nonatomic, retain) NSDateComponents *cancellationFeeThreshold;
@property (nonatomic, readonly) long long code;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)cancellationFee;
- (id)cancellationFeeThreshold;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCancellationFee:(id)arg1;
- (void)setCancellationFeeThreshold:(id)arg1;

@end
