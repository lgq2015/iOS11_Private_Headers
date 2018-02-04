/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXLocationAppCandidate : NSObject {
    NSString * _bundleIdentifier;
    unsigned long long  _eligibility;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long eligibility;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (unsigned long long)eligibility;
- (id)initWithBundleIdentifier:(id)arg1 eligibility:(unsigned long long)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEligibility:(unsigned long long)arg1;
- (id)transportType;

@end
