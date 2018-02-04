/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDBugSessionOperation : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSDictionary * _options;
    long long  _type;
}

@property (retain) NSString *identifier;
@property (retain) NSDictionary *options;
@property long long type;

+ (id)hashingKeyWithId:(id)arg1 type:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hashingKey;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)setIdentifier:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
