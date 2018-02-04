/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTMicroLocation : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    double  _probability;
}

@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) double probability;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 probability:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMicroLocation:(id)arg1;
- (double)probability;
- (void)setIdentifier:(id)arg1;
- (void)setProbability:(double)arg1;

@end
