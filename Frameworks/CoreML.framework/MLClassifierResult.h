/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLClassifierResult : NSObject {
    <MLFeatureProvider> * _additionalFeatures;
    NSDictionary * _classStringProbability;
    long long  _predictedClassFeatureType;
    NSString * _predictedClassString;
}

@property (readonly) <MLFeatureProvider> *additionalFeatures;
@property (readonly) NSDictionary *classStringProbability;
@property (readonly) long long predictedClassFeatureType;
@property (readonly) NSString *predictedClassString;

+ (id)resultWithIntClassProbability:(id)arg1;
+ (id)resultWithIntClassProbability:(id)arg1 additionalFeatures:(id)arg2;
+ (id)resultWithStringClassProbability:(id)arg1;
+ (id)resultWithStringClassProbability:(id)arg1 additionalFeatures:(id)arg2;

- (void).cxx_destruct;
- (id)additionalFeatures;
- (id)asFeatureDictionaryWithPredictedClassDescription:(id)arg1 classProbabilityDescription:(id)arg2;
- (id)classProbabilitiesWithTypedClass;
- (id)classStringProbability;
- (id)initWithStringClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3;
- (id)intClassProbability;
- (long long)predictedClassFeatureType;
- (id)predictedClassFeatureValue;
- (id)predictedClassString;

@end
