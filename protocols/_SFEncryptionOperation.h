/* made by EzioChiu.
 */

@protocol _SFEncryptionOperation <NSObject, NSCopying, NSSecureCoding>

@required

- (NSData *)decrypt:(_SFCiphertext *)arg1 withKey:(_SFKey *)arg2 error:(id*)arg3;
- (_SFCiphertext *)encrypt:(NSData *)arg1 withKey:(_SFKey *)arg2 error:(id*)arg3;
- (_SFKeySpecifier *)encryptionKeySpecifier;

@end
