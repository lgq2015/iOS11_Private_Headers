/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBColor : NSObject <NSCopying, NSSecureCoding> {
    double  _alpha;
    double  _blue;
    double  _green;
    double  _red;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double red;

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)_initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)alpha;
- (id)awakeAfterUsingCoder:(id)arg1;
- (double)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)green;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)red;
- (id)replacementObjectForCoder:(id)arg1;

@end
