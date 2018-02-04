/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface STTimer : STSiriModelObject {
    long long  _state;
    NSNumber * _value;
}

@property (nonatomic) long long state;
@property (nonatomic, copy) NSNumber *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setValue:(id)arg1;
- (long long)state;
- (id)value;

@end
