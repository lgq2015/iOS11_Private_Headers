/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSL3FeatureVector : NSObject <NSCopying, NSSecureCoding, PRSFeatureVector> {
    NSString * bundle_id;
    double * expanded_floating_point_features;
    double  floating_point_features;
    double * server_features;
}

@property (nonatomic, retain) NSString *bundle_id;

+ (void)addSizeOfEncodedFeatures:(unsigned long long)arg1;
+ (bool)doesFeatureExist:(id)arg1;
+ (unsigned long long)getSizeOfFeatureVector;
+ (void)initialize;
+ (void)reArrangeOrderedSetBySet:(id)arg1 withInflation:(unsigned long long)arg2 andInflatedMap:(id)arg3;
+ (void)setServerFeatureSize:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundle_id;
- (void)cleanup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getExpandedFeatureVectorAsArray;
- (id)getExpandedFeaturesAsDictionary;
- (id)getFeaturesAsDictionary;
- (double)getServerFeatureAtIndex:(unsigned long long)arg1;
- (double)getValueAtIndex:(unsigned long long)arg1;
- (double)getValueForFeature:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)resetFeatureValues;
- (void)setBundle_id:(id)arg1;
- (void)setExpandedSet:(double*)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setValue:(id)arg1 forFeature:(id)arg2;
- (void)setValue:(id)arg1 forFeatureEnum:(unsigned long long)arg2;

@end
