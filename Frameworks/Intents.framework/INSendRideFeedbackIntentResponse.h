/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSendRideFeedbackIntentResponse : INIntentResponse

@property (nonatomic, readonly) long long code;

+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
