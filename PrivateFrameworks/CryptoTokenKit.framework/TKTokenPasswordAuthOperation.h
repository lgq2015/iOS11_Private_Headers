/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation {
    NSString * _password;
}

@property (copy) NSString *password;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;

@end
