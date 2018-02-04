/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENCypher_AES128 : NSObject <ENCypher> {
    NSData * _key;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSData *key;
@property (readonly) Class superclass;

+ (id)_decryptData:(id)arg1 withKey:(id)arg2;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2;
+ (id)_randomDataWithLength:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithRandomKey;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;

@end
