/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ProjectListModel : NSObject {
    NSMutableArray * _cloudDownloadsToRestart;
    <CloudSynchDelegate> * _cloudSynchDelegate;
    NSMutableArray * _maybeInTheCloud;
    NSMetadataQuery * _ubiquitousQuery;
    NSMutableArray * m_iTunesSharedProjects;
    NSMutableArray * m_jailedProjects;
    NSMutableArray * m_projects;
    NSMutableArray * m_unscannedMedia;
}

@property (nonatomic, retain) NSMutableArray *cloudDownloadsToRestart;
@property <CloudSynchDelegate> *cloudSynchDelegate;
@property (nonatomic, retain) NSMutableArray *maybeInTheCloud;
@property (nonatomic, retain) NSMetadataQuery *ubiquitousQuery;

+ (id)sharedInstance;
+ (id)unscannedMediaFromPaths:(id)arg1;

- (void)addProject:(id)arg1;
- (void)addQueryObservers;
- (void)appendJailedProject:(id)arg1;
- (void)appendProject:(id)arg1;
- (void)appendiTunesSharedProject:(id)arg1;
- (id)cloudDownloadsToRestart;
- (id)cloudSynchDelegate;
- (void)createProjectPlaceholders;
- (void)dealloc;
- (void)deleteProject:(id)arg1;
- (void)deleteUneditedProject:(id)arg1;
- (void)didStart:(id)arg1;
- (void)didUpdate:(id)arg1;
- (void)duplicateProject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishGathering:(id)arg1;
- (void)gathering:(id)arg1;
- (id)iTunesSharedProjects;
- (id)jailedProjects;
- (void)loadProjectAtIndex:(unsigned long long)arg1;
- (id)maybeInTheCloud;
- (void)moveJailedProjectToPrivateProject:(id)arg1;
- (bool)moveSafeSaveProject:(id)arg1;
- (void)noteApplicationWillTerminate:(id)arg1;
- (id)pendingCloudProjectWithPath:(id)arg1;
- (int)pendingCloudProjectsCount;
- (id)placeHolderForProject:(id)arg1;
- (void)projectPathDidChange:(id)arg1;
- (id)projectPathsInDirectory:(id)arg1;
- (id)projectPathsInDirectory:(id)arg1 otherPaths:(id*)arg2;
- (id)projectPathsInImportExportDirectoryAndOtherPaths:(id*)arg1;
- (id)projectPathsInPrivateDocumentsDirectory;
- (id)projectWithPath:(id)arg1;
- (id)projects;
- (void)queryTheCloud;
- (void)queueTrashOrphanedRenderedMovies;
- (void)removeProject:(id)arg1;
- (void)removeQueryObservers;
- (void)setCloudDownloadsToRestart:(id)arg1;
- (void)setCloudSynchDelegate:(id)arg1;
- (void)setMaybeInTheCloud:(id)arg1;
- (void)setUbiquitousQuery:(id)arg1;
- (void)skeletalProjectDidDownload:(id)arg1;
- (void)startCloudQuery;
- (void)stopCloudQuery;
- (void)trashOrphanedRenderedMovies;
- (id)ubiquitousQuery;
- (void)undeleteProject:(id)arg1;
- (void)unloadAllExceptProject:(id)arg1;
- (void)unloadProject:(id)arg1;
- (void)unloadProjectAtIndex:(unsigned long long)arg1;
- (id)unscannedMedia;
- (void)verifyCloudDownloads;

@end
