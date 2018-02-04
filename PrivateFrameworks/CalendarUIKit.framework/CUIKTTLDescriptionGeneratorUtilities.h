/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKTTLDescriptionGeneratorUtilities : NSObject

+ (id)descriptionForType:(unsigned long long)arg1;
+ (bool)ttlDescriptionShouldIncludeTrafficForHypothesis:(id)arg1;
+ (bool)ttlDescriptionShouldIncludeTrafficForHypothesisThatSupportsLiveTraffic:(bool)arg1 transportType:(int)arg2 eta:(double)arg3;
+ (unsigned long long)ttlDescriptionTypeForDate:(id)arg1 hypothesis:(id)arg2;

@end
