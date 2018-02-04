/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding> {
    TUHandle * _handle;
    NSString * _label;
}

@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly, copy) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 label:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabeledHandle:(id)arg1;
- (id)label;

@end
