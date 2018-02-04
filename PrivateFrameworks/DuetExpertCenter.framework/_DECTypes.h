/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECTypes : NSObject

+ (unsigned long long)categoryForItem:(id)arg1;
+ (id)categoryMapping;
+ (id)consumerMapping;
+ (id)consumerSubtypeMapping;
+ (unsigned long long)intersectCategories:(unsigned long long)arg1 withCategories:(unsigned long long)arg2;
+ (void)invokeBlockOverCategoriesMatching:(unsigned long long)arg1 block:(id /* block */)arg2;
+ (id)mmConsumerMapping;
+ (unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;
+ (id)mmEventTypeMapping;
+ (id)outcomeMapping;
+ (id)predictionReasonMapping;
+ (long long)selectSingleReason:(long long)arg1;
+ (id)stringForAppPredictionSources:(long long)arg1;
+ (id)stringForCategory:(unsigned long long)arg1;
+ (id)stringForConsumerSubtype:(unsigned char)arg1;
+ (id)stringForConsumerType:(unsigned long long)arg1;
+ (id)stringForLaunchSource:(long long)arg1;
+ (id)stringForMMConsumerType:(unsigned long long)arg1;
+ (id)stringForMMEventType:(unsigned long long)arg1;
+ (id)stringForOutcome:(unsigned long long)arg1;
+ (id)stringForPredictionReason:(long long)arg1;

@end
