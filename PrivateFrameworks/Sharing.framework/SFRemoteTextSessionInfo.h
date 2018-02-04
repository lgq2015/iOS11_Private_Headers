/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteTextSessionInfo : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _keyboardType;
    NSString * _prompt;
    long long  _returnKeyType;
    bool  _secureTextEntry;
    NSString * _text;
    NSString * _title;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) bool secureTextEntry;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)keyboardType;
- (id)prompt;
- (long long)returnKeyType;
- (bool)secureTextEntry;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPrompt:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;

@end
