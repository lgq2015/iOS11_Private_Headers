/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NetworkServiceProxyRespTimeBuckets : NSObject <NSSecureCoding> {
    unsigned int  _bucket_100_msecs;
    unsigned int  _bucket_10_msecs;
    unsigned int  _bucket_110_msecs;
    unsigned int  _bucket_120_msecs;
    unsigned int  _bucket_130_msecs;
    unsigned int  _bucket_140_msecs;
    unsigned int  _bucket_150_msecs;
    unsigned int  _bucket_160_msecs;
    unsigned int  _bucket_170_msecs;
    unsigned int  _bucket_180_msecs;
    unsigned int  _bucket_190_msecs;
    unsigned int  _bucket_1_sec;
    unsigned int  _bucket_200_msecs;
    unsigned int  _bucket_20_msecs;
    unsigned int  _bucket_250_msecs;
    unsigned int  _bucket_2_secs;
    unsigned int  _bucket_30_msecs;
    unsigned int  _bucket_40_msecs;
    unsigned int  _bucket_500_msecs;
    unsigned int  _bucket_50_msecs;
    unsigned int  _bucket_5_secs;
    unsigned int  _bucket_60_msecs;
    unsigned int  _bucket_70_msecs;
    unsigned int  _bucket_80_msecs;
    unsigned int  _bucket_90_msecs;
    unsigned int  _bucket_above_5_secs;
}

@property unsigned int bucket_100_msecs;
@property unsigned int bucket_10_msecs;
@property unsigned int bucket_110_msecs;
@property unsigned int bucket_120_msecs;
@property unsigned int bucket_130_msecs;
@property unsigned int bucket_140_msecs;
@property unsigned int bucket_150_msecs;
@property unsigned int bucket_160_msecs;
@property unsigned int bucket_170_msecs;
@property unsigned int bucket_180_msecs;
@property unsigned int bucket_190_msecs;
@property unsigned int bucket_1_sec;
@property unsigned int bucket_200_msecs;
@property unsigned int bucket_20_msecs;
@property unsigned int bucket_250_msecs;
@property unsigned int bucket_2_secs;
@property unsigned int bucket_30_msecs;
@property unsigned int bucket_40_msecs;
@property unsigned int bucket_500_msecs;
@property unsigned int bucket_50_msecs;
@property unsigned int bucket_5_secs;
@property unsigned int bucket_60_msecs;
@property unsigned int bucket_70_msecs;
@property unsigned int bucket_80_msecs;
@property unsigned int bucket_90_msecs;
@property unsigned int bucket_above_5_secs;

+ (bool)supportsSecureCoding;

- (void)addBuckets:(id)arg1;
- (unsigned int)bucket_100_msecs;
- (unsigned int)bucket_10_msecs;
- (unsigned int)bucket_110_msecs;
- (unsigned int)bucket_120_msecs;
- (unsigned int)bucket_130_msecs;
- (unsigned int)bucket_140_msecs;
- (unsigned int)bucket_150_msecs;
- (unsigned int)bucket_160_msecs;
- (unsigned int)bucket_170_msecs;
- (unsigned int)bucket_180_msecs;
- (unsigned int)bucket_190_msecs;
- (unsigned int)bucket_1_sec;
- (unsigned int)bucket_200_msecs;
- (unsigned int)bucket_20_msecs;
- (unsigned int)bucket_250_msecs;
- (unsigned int)bucket_2_secs;
- (unsigned int)bucket_30_msecs;
- (unsigned int)bucket_40_msecs;
- (unsigned int)bucket_500_msecs;
- (unsigned int)bucket_50_msecs;
- (unsigned int)bucket_5_secs;
- (unsigned int)bucket_60_msecs;
- (unsigned int)bucket_70_msecs;
- (unsigned int)bucket_80_msecs;
- (unsigned int)bucket_90_msecs;
- (unsigned int)bucket_above_5_secs;
- (void)clear;
- (unsigned int*)createBucketArray;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)getBucketCount;
- (void)incrBucketWithCurrentDate:(id)arg1 pastDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBucket_100_msecs:(unsigned int)arg1;
- (void)setBucket_10_msecs:(unsigned int)arg1;
- (void)setBucket_110_msecs:(unsigned int)arg1;
- (void)setBucket_120_msecs:(unsigned int)arg1;
- (void)setBucket_130_msecs:(unsigned int)arg1;
- (void)setBucket_140_msecs:(unsigned int)arg1;
- (void)setBucket_150_msecs:(unsigned int)arg1;
- (void)setBucket_160_msecs:(unsigned int)arg1;
- (void)setBucket_170_msecs:(unsigned int)arg1;
- (void)setBucket_180_msecs:(unsigned int)arg1;
- (void)setBucket_190_msecs:(unsigned int)arg1;
- (void)setBucket_1_sec:(unsigned int)arg1;
- (void)setBucket_200_msecs:(unsigned int)arg1;
- (void)setBucket_20_msecs:(unsigned int)arg1;
- (void)setBucket_250_msecs:(unsigned int)arg1;
- (void)setBucket_2_secs:(unsigned int)arg1;
- (void)setBucket_30_msecs:(unsigned int)arg1;
- (void)setBucket_40_msecs:(unsigned int)arg1;
- (void)setBucket_500_msecs:(unsigned int)arg1;
- (void)setBucket_50_msecs:(unsigned int)arg1;
- (void)setBucket_5_secs:(unsigned int)arg1;
- (void)setBucket_60_msecs:(unsigned int)arg1;
- (void)setBucket_70_msecs:(unsigned int)arg1;
- (void)setBucket_80_msecs:(unsigned int)arg1;
- (void)setBucket_90_msecs:(unsigned int)arg1;
- (void)setBucket_above_5_secs:(unsigned int)arg1;

@end
