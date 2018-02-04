/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXTypes : NSObject

+ (id)consumerMapping;
+ (unsigned char)consumerSubtypeForString:(id)arg1 found:(bool*)arg2;
+ (id)consumerSubtypeMapping;
+ (unsigned long long)consumerTypeForString:(id)arg1 found:(bool*)arg2;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)arg1;
+ (unsigned long long)engagementTypeForString:(id)arg1 found:(bool*)arg2;
+ (id)stringForConsumerSubtype:(unsigned char)arg1;
+ (id)stringForConsumerType:(unsigned long long)arg1;
+ (id)stringForEngagementType:(unsigned long long)arg1;
+ (id)validConsumerSubTypes;

@end