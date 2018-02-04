/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCryptor : NSObject

+ (id)allCachedKeys;
+ (bool)authenticateWithPassphrase:(id)arg1 forAccount:(id)arg2;
+ (bool)authenticateWithPassphrase:(id)arg1 forNote:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forAccount:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forNote:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forObject:(id)arg2;
+ (void)cachedKeyClearingTimerDidFire;
+ (id)cachedMasterKeyForIdentifier:(id)arg1;
+ (id)cachedMasterKeyForObject:(id)arg1;
+ (void)clearAllCachedMasterKeys;
+ (id)decryptData:(id)arg1 forObject:(id)arg2;
+ (id)decryptData:(id)arg1 forObject:(id)arg2 withTag:(id)arg3 initializationVector:(id)arg4;
+ (bool)decryptFileFromURL:(id)arg1 toURL:(id)arg2 forObject:(id)arg3;
+ (id)decryptedDataFromFileURL:(id)arg1 forObject:(id)arg2;
+ (id)encryptData:(id)arg1 forObject:(id)arg2 tag:(id*)arg3 initializationVector:(id*)arg4;
+ (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2 forObject:(id)arg3;
+ (bool)hasAnyCachedMasterKeys;
+ (bool)isAuthenticatedForAccount:(id)arg1;
+ (bool)isAuthenticatedForNote:(id)arg1;
+ (bool)isAuthenticatedForObject:(id)arg1;
+ (bool)isPassphrase:(id)arg1 correctForAccount:(id)arg2;
+ (bool)isPassphrase:(id)arg1 correctForNote:(id)arg2;
+ (bool)isPassphrase:(id)arg1 correctForObject:(id)arg2;
+ (bool)key:(id)arg1 decryptsObject:(id)arg2;
+ (id)masterKeysByAccountIdentifier;
+ (id)newWrappedKeyForObject:(id)arg1;
+ (void)removeItemFromBiometricID:(id)arg1;
+ (void)removePassphraseForAccount:(id)arg1;
+ (void)removePassphraseForNotesInAccount:(id)arg1;
+ (void)rewrapKeyForObject:(id)arg1 newMasterKey:(id)arg2 salt:(id)arg3 iterationCount:(unsigned int)arg4 hint:(id)arg5;
+ (void)rewrapNote:(id)arg1 newMasterKey:(id)arg2 salt:(id)arg3 interationCount:(unsigned int)arg4 hint:(id)arg5;
+ (void)setCachedMasterKey:(id)arg1 forIdentifier:(id)arg2;
+ (void)setCachedMasterKey:(id)arg1 forObject:(id)arg2;
+ (bool)setPassphrase:(id)arg1 forAllAccountsAndNotesWithHint:(id)arg2;
+ (bool)setPassphrase:(id)arg1 forAllAccountsAndNotesWithHint:(id)arg2 oldPassphrase:(id)arg3;
+ (bool)setPassphrase:(id)arg1 hint:(id)arg2 forAccount:(id)arg3;
+ (void)startOrExtendCachedKeyClearingTimer;
+ (void)startOrExtendCachedKeyClearingTimerForModes:(id)arg1;
+ (double)timeIntervalBeforeClearingCachedKeys;
+ (void)transferSharedPassphraseFromAccount:(id)arg1 toAccount:(id)arg2;
+ (id)unwrappedKeyForObject:(id)arg1;
+ (bool)updateAllNotesWithOldPassphrase:(id)arg1 toSharedPassphrase:(id)arg2 fromAccount:(id)arg3 progress:(id)arg4;
+ (bool)userHasPassphraseSetForAccount:(id)arg1;
+ (bool)userHasPassphraseSetForNote:(id)arg1;
+ (bool)userHasPassphraseSetForObject:(id)arg1;
+ (id)wrapKey:(id)arg1 withMasterKey:(id)arg2;

@end
