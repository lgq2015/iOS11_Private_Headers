/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankerCentroidParameters : NSObject {
    unsigned long long  _centroidTimeoutInMilliseconds;
    NSArray * _centroidWeights;
    unsigned long long  _maxNumDays;
    unsigned long long  _maxNumFeatures;
    unsigned long long  _minTF;
    long long  _norm;
    bool  _useInMemory;
    bool  _useParsecEngagements;
    NSString * _version;
}

@property (nonatomic, readonly) unsigned long long centroidTimeoutInMilliseconds;
@property (nonatomic, readonly) NSArray *centroidWeights;
@property (nonatomic, readonly) unsigned long long maxNumDays;
@property (nonatomic, readonly) unsigned long long maxNumFeatures;
@property (nonatomic, readonly) unsigned long long minTF;
@property (nonatomic, readonly) long long norm;
@property (nonatomic, readonly) bool useInMemory;
@property (nonatomic) bool useParsecEngagements;
@property (nonatomic, readonly) NSString *version;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (void).cxx_destruct;
- (id)asCentroidModelParameters;
- (unsigned long long)centroidTimeoutInMilliseconds;
- (id)centroidWeights;
- (unsigned long long)maxNumDays;
- (unsigned long long)maxNumFeatures;
- (unsigned long long)minTF;
- (long long)norm;
- (void)setUseParsecEngagements:(bool)arg1;
- (bool)useInMemory;
- (bool)useParsecEngagements;
- (id)version;

@end
