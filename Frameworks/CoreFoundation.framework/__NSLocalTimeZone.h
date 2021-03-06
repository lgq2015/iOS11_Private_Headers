/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSLocalTimeZone : NSTimeZone

+ (bool)supportsSecureCoding;

- (id)abbreviationForDate:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;

@end
