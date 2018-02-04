/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXScoredBundleId : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    double  _score;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) double score;

+ (id)bundleIdsFrom:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 score:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)score;

@end
