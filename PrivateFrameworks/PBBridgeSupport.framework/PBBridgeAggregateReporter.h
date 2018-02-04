/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeAggregateReporter : NSObject

+ (void)activationServerRespondedAtPage:(unsigned long long)arg1;
+ (id)descriptionForCommTimingType:(unsigned long long)arg1;
+ (id)descriptionForSuccessType:(unsigned long long)arg1;
+ (id)descriptionForTimingType:(unsigned long long)arg1;
+ (void)incrementSuccessType:(unsigned long long)arg1;
+ (void)pushCommunicationTimingType:(unsigned long long)arg1 withValue:(double)arg2;
+ (void)pushTimingForTypeNamed:(id)arg1 withValue:(double)arg2;
+ (void)pushTimingType:(unsigned long long)arg1 withValue:(double)arg2;

@end
