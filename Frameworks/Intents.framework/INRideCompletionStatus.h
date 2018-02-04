/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRideCompletionStatus : NSObject <INRideCompletionStatusExport, NSCopying, NSSecureCoding> {
    bool  _canceledByService;
    bool  _completed;
    NSUserActivity * _completionUserActivity;
    NSSet * _defaultTippingOptions;
    unsigned long long  _feedbackType;
    bool  _missedPickup;
    bool  _outstanding;
    INCurrencyAmount * _paymentAmount;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (getter=isCanceledByService, nonatomic, readonly) bool canceledByService;
@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, retain) NSUserActivity *completionUserActivity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSSet *defaultTippingOptions;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long feedbackType;
@property (readonly) unsigned long long hash;
@property (getter=isMissedPickup, nonatomic, readonly) bool missedPickup;
@property (getter=isOutstanding, nonatomic, readonly) bool outstanding;
@property (nonatomic, readonly) INCurrencyAmount *paymentAmount;
@property (readonly) Class superclass;

+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completed;
+ (id)completedWithOutstandingFeedbackType:(unsigned long long)arg1;
+ (id)completedWithOutstandingPaymentAmount:(id)arg1;
+ (id)completedWithSettledPaymentAmount:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initCompleted:(bool)arg1 canceledByService:(bool)arg2 missedPickup:(bool)arg3 amount:(id)arg4 feedbackType:(unsigned long long)arg5 outstanding:(bool)arg6;
- (id)_initWithValue:(id)arg1;
- (id)_newValue;
- (id)completionUserActivity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultTippingOptions;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feedbackType;
- (id)initWithCoder:(id)arg1;
- (bool)isCanceled;
- (bool)isCanceledByService;
- (bool)isCompleted;
- (bool)isMissedPickup;
- (bool)isOutstanding;
- (id)paymentAmount;
- (void)setCompletionUserActivity:(id)arg1;
- (void)setDefaultTippingOptions:(id)arg1;

@end
