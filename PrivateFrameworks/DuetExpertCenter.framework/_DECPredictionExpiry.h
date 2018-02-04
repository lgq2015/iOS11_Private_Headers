/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionExpiry : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned long long  _type;
    long long  _value;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long value;

+ (id)expireAfter:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 value:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (long long)value;

@end
