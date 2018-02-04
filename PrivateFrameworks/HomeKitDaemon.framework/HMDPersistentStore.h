/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPersistentStore : HMFObject

+ (id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (id)archiveBlacklistedBundles:(id)arg1;
+ (id)archiveBulletinBoard:(id)arg1;
+ (id)archiveCloudServerTokenData:(id)arg1;
+ (id)archiveHomeData:(id)arg1;
+ (id)archiveIDSDataSyncJournal:(id)arg1;
+ (bool)archiveMetadata:(id)arg1;
+ (void)archiveVendorStore:(id)arg1;
+ (void)cleanupKeysInStore;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long*)arg2 deleteExtraKeys:(bool)arg3 allowControllerIdentifierToChange:(bool)arg4 controllerIdentifierChanged:(bool*)arg5 successfulKeyUserName:(id*)arg6 error:(id*)arg7;
+ (id)decryptDataWithMetadataKey:(id)arg1 error:(id*)arg2;
+ (id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id*)arg2;
+ (id)deserializeBlacklistedBundlesFromData:(id)arg1;
+ (bool)deserializeHomeData:(id*)arg1 localStorage:(bool)arg2 fromData:(id)arg3;
+ (bool)deserializeMetadata:(id*)arg1 fromData:(id)arg2;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id*)arg2;
+ (id)encryptDataWithMetadataKey:(id)arg1 error:(id*)arg2;
+ (id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (void)removeServerTokenDataFile;
+ (void)removeTransactionJournal;
+ (void)resetConfiguration;
+ (void)resetMetadata;
+ (id)serializeBlacklistedBundles:(id)arg1;
+ (id)serializeHomeData:(id)arg1 localStorage:(bool)arg2 remoteDeviceOnSameAccount:(bool)arg3;
+ (id)serializeMetadata:(id)arg1;
+ (id)unarchiveBlacklistedBundles;
+ (id)unarchiveBulletinBoard;
+ (id)unarchiveHomeData:(id*)arg1 decryptionFailed:(bool*)arg2;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)unarchiveMetadata:(id*)arg1;
+ (id)unarchiveServerTokenData:(bool*)arg1;
+ (id)unarchiveVendorStore;
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (bool)writeDictionary:(id)arg1 toStorePath:(id)arg2;

@end
