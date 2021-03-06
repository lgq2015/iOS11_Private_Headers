/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFeatureFrameUtils : NSObject

+ (bool)canVectorizeFeatureWithDescription:(id)arg1;
+ (bool)isVectorizableFeatureFrameDescription:(id)arg1;
+ (id)vectorizeFeatureDictionary:(id)arg1 featureNames:(id)arg2 error:(id*)arg3;

@end
