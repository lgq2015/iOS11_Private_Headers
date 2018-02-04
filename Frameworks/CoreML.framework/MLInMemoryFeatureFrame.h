/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLInMemoryFeatureFrame : MLFeatureFrame {
    NSDictionary * _description;
    NSDictionary * _features;
    unsigned long long  _sampleCount;
}

@property (nonatomic, retain) NSDictionary *description;
@property (nonatomic, retain) NSDictionary *features;

+ (id)featureFrameFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)featureFrameFromFeatureArrayMap:(id)arg1 frameDescription:(id)arg2 error:(id*)arg3;
+ (id)featureFrameFromFeatureDictionary:(id)arg1 frameDescription:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)featureCount;
- (id)featureFrameByAddingFrame:(id)arg1 error:(id*)arg2;
- (id)features;
- (id)initWithFeatureArrayMap:(id)arg1 frameDescription:(id)arg2 sampleCount:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)sampleAtIndex:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (void)setDescription:(id)arg1;
- (void)setFeatures:(id)arg1;
- (id)subsetWithFeaturesNamed:(id)arg1;

@end
