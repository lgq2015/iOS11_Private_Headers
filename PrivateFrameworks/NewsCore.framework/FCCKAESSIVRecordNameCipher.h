/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKAESSIVRecordNameCipher : NSObject <FCCKRecordNameCipher>

- (id)_derivedKeyFromKey:(id)arg1;
- (id)_encryptionSalt;
- (id)decryptRecordName:(id)arg1 withKey:(id)arg2;
- (id)encryptRecordName:(id)arg1 withKey:(id)arg2;

@end
