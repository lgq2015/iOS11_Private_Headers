/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICProactiveTrigger : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attributedString;
    NSSet * _availableApps;
    unsigned char  _triggerSourceType;
}

@property (nonatomic, readonly) NSDictionary *attributedString;
@property (nonatomic, retain) NSSet *availableApps;
@property (nonatomic, readonly) unsigned char triggerSourceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedString;
- (id)availableApps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(unsigned char)arg1 attributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProactiveTrigger:(id)arg1;
- (void)setAvailableApps:(id)arg1;
- (unsigned char)triggerSourceType;

@end
