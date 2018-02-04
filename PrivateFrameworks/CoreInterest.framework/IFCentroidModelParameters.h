/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFCentroidModelParameters : NSObject <NSSecureCoding> {
    NSDictionary * _engagementCount;
    NSDictionary * _engagementRate;
    long long  _idfWeightScheme;
    unsigned long long  _minimumTermFrequency;
    long long  _norm;
    long long  _termWeightScheme;
}

@property (copy) NSDictionary *engagementCount;
@property (copy) NSDictionary *engagementRate;
@property long long idfWeightScheme;
@property unsigned long long minimumTermFrequency;
@property long long norm;
@property long long termWeightScheme;

+ (id)defaultParameters;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementCount;
- (id)engagementRate;
- (long long)idfWeightScheme;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParameters:(id)arg1;
- (unsigned long long)minimumTermFrequency;
- (long long)norm;
- (void)setEngagementCount:(id)arg1;
- (void)setEngagementRate:(id)arg1;
- (void)setIdfWeightScheme:(long long)arg1;
- (void)setMinimumTermFrequency:(unsigned long long)arg1;
- (void)setNorm:(long long)arg1;
- (void)setTermWeightScheme:(long long)arg1;
- (long long)termWeightScheme;

@end
