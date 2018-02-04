/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDMessageAutomaticHistoryDeletion : NSObject

+ (id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id*)arg2;
+ (id)_getFilePathNotDSStore:(id)arg1;
+ (id)_getPathAttributesForPath:(id)arg1;
+ (id)_getiChatFileMetadataForPath:(id)arg1;
+ (void)cleanDatabase;
+ (void)cleanUpOrphanAttachments;
+ (void)deleteDirectoryAtPath:(id)arg1;
+ (void)deleteMessagesAndAttachmentsAfterDays:(long long)arg1;
+ (void)deleteSpolightArchivedFilesAfterDays:(long long)arg1;
+ (bool)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2;
+ (bool)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2;
+ (bool)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2;
+ (bool)isOlderThanDays:(long long)arg1 fromDate:(id)arg2;

@end
