/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitSpeed : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)baseUnit;
+ (id)kilometersPerHour;
+ (id)knots;
+ (id)metersPerSecond;
+ (id)milesPerHour;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

@end
