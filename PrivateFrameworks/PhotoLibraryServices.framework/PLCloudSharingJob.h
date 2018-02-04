/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingJob : PLDaemonJob {
    NSString * _archiveFilename;
    PLPhotoLibrary * _photoLibrary;
    bool  _shouldPrioritize;
}

@property (nonatomic) bool shouldPrioritize;
@property (nonatomic, readonly, retain) PLPhotoLibrary *transientPhotoLibrary;

+ (id)archiveDirectory;
+ (void)deleteAllRecoveryEvents;
+ (id)recoveredEventsIgnoringEvent:(id)arg1;

- (void)archiveXPCToDisk:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)runAndWaitForMessageToBeSent;
- (void)runDaemonSide;
- (id)serialOperationQueue;
- (void)setShouldPrioritize:(bool)arg1;
- (bool)shouldArchiveXPCToDisk;
- (bool)shouldPrioritize;
- (id)transientPhotoLibrary;

@end
