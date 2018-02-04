/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAssertion : NSObject {
    NSString * _assertionType;
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *assertionType;
@property (nonatomic, retain) NSString *identifier;

+ (id)assertionWithType:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (bool)_hasValidAssertionType;
- (void)_notifyServerAssertionWasAcquired;
- (void)_notifyServerAssertionWasRelinquished;
- (id)assertionType;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithType:(id)arg1 identifier:(id)arg2;
- (void)setAssertionType:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
