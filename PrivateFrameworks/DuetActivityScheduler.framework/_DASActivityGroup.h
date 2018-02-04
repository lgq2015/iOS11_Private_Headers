/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASActivityGroup : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _maxConcurrent;
    NSString * _name;
}

@property (nonatomic) unsigned long long maxConcurrent;
@property (nonatomic, copy) NSString *name;

+ (id)groupWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxConcurrent;
- (id)name;
- (void)setMaxConcurrent:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
