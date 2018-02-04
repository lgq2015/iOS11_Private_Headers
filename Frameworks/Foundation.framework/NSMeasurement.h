/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {
    double  _doubleValue;
    NSUnit * _unit;
}

@property (readonly) double doubleValue;
@property (readonly, copy) NSUnit *unit;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_performOperation:(long long)arg1 withMeasurement:(id)arg2;
- (bool)canBeConvertedToUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 unit:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)measurementByAddingMeasurement:(id)arg1;
- (id)measurementByConvertingToUnit:(id)arg1;
- (id)measurementBySubtractingMeasurement:(id)arg1;
- (id)unit;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentQuantity;

@end
