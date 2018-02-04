/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDelayedFiledSystemDeletions : NSObject {
    NSMutableArray * _deletionInfos;
}

+ (void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2;
+ (id)deletionsFromChangeHubEvent:(id)arg1;
+ (id)filesystemDeletionQueue;
+ (void)waitForAllDelayedDeletionsToFinish;

- (void)addFilesystemDeletionInfo:(id)arg1;
- (void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithFilesystemDeletionInfos:(id)arg1;

@end
