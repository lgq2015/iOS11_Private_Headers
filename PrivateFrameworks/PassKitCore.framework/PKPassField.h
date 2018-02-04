/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassField : NSObject <NSSecureCoding> {
    long long  _cellStyle;
    NSString * _changeMessage;
    unsigned long long  _dataDetectorTypes;
    NSString * _key;
    NSString * _label;
    long long  _textAlignment;
    long long  _type;
    id  _unformattedValue;
    NSString * _value;
}

@property (nonatomic) long long cellStyle;
@property (nonatomic, copy) NSString *changeMessage;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long type;
@property (nonatomic, copy) id unformattedValue;
@property (readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cellStyle;
- (id)changeMessage;
- (unsigned long long)dataDetectorTypes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)flushCachedValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)label;
- (void)setCellStyle:(long long)arg1;
- (void)setChangeMessage:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUnformattedValue:(id)arg1;
- (long long)textAlignment;
- (long long)type;
- (id)unformattedValue;
- (id)value;

@end
