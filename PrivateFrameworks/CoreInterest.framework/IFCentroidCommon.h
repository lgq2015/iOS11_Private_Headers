/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFCentroidCommon : NSObject

+ (long long)IDFWeightSchemeFromString:(id)arg1;
+ (long long)divergenceFromString:(id)arg1;
+ (long long)interactionTypeFromString:(id)arg1;
+ (long long)normalizationFromString:(id)arg1;
+ (id)operationForDivergence:(long long)arg1;
+ (id)operationForNormalization:(long long)arg1;
+ (id)stringForDivergence:(long long)arg1;
+ (id)stringForIDFWeightScheme:(long long)arg1;
+ (id)stringForInteractionType:(long long)arg1;
+ (id)stringForNormalization:(long long)arg1;
+ (id)stringForTermWeightScheme:(long long)arg1;
+ (long long)termWeightSchemeFromString:(id)arg1;

@end
