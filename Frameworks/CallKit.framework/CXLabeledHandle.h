/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding> {
    CXHandle * _handle;
    NSString * _label;
}

@property (nonatomic, retain) CXHandle *handle;
@property (nonatomic, copy) NSString *label;

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
- (void)setHandle:(id)arg1;
- (void)setLabel:(id)arg1;

@end
