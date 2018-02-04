/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXPullCallAction : CXCallAction {
    NSDate * _dateConnected;
    CXHandoffContext * _handoffContext;
}

@property (nonatomic, copy) NSDate *dateConnected;
@property (nonatomic, retain) CXHandoffContext *handoffContext;

+ (bool)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (id)customDescription;
- (id)dateConnected;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithDateConnected:(id)arg1;
- (id)handoffContext;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDateConnected:(id)arg1;
- (void)setHandoffContext:(id)arg1;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
