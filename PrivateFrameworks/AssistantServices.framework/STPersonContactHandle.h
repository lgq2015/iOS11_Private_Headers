/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface STPersonContactHandle : NSObject <NSSecureCoding> {
    NSString * _handle;
    NSString * _label;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPersonContactHandle:(id)arg1;
- (id)label;
- (void)setHandle:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
