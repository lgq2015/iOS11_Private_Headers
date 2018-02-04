/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKMasterToken : AKToken {
    NSMutableDictionary * _properties;
}

@property (nonatomic, readonly) NSData *encryptedSessionKey;
@property (nonatomic, readonly) NSData *externalizedVersion;
@property (nonatomic, readonly) NSString *externalizedVersionString;
@property (nonatomic, readonly) NSData *sessionKey;

+ (id)tokenWithExternalizedVersion:(id)arg1 lifetime:(id)arg2;
+ (id)tokenWithExternalizedVersionString:(id)arg1;

- (void).cxx_destruct;
- (void)_setEncryptedSessionKey:(id)arg1;
- (void)_setSessionKey:(id)arg1;
- (id)encryptedSessionKey;
- (id)externalizedVersion;
- (id)externalizedVersionString;
- (id)init;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (id)sessionKey;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (bool)updateWithHTTPURLResponse:(id)arg1;

@end
