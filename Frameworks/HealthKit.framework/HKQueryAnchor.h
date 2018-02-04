/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQueryAnchor : NSObject <NSCopying, NSSecureCoding> {
    long long  _rowid;
}

@property (getter=_rowid, setter=_setRowid:, nonatomic) long long rowid;

+ (id)_anchorWithRowid:(long long)arg1;
+ (id)anchorFromValue:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)_rowid;
- (void)_setRowid:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
