/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {
    NSManagedObjectContext * _context;
    NSFetchedResultsController * _fetchController;
    long long  _isSavingDisabledCount;
    NSManagedObjectModel * _model;
    int  _notifyToken;
    NSFetchRequest * _savedRecordingsFetchRequest;
    bool  _valid;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long currentEntityRevision;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long isSavingDisabledCount;
@property (nonatomic, readonly) NSArray *recordings;
@property (readonly) Class superclass;
@property bool valid;

+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (id)_dateFormatterComponentFormatting;
+ (void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)creationDateFromStandardRecordingURL:(id)arg1;
+ (void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)initialize;
+ (id)savedRecordingsDirectory;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;

- (void).cxx_destruct;
- (bool)__saveManagedObjectContext:(id*)arg1;
- (id)_allTitles;
- (void)_deleteOrphanedEntityRevisionsAndSave:(bool)arg1;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(id /* block */)arg2;
- (id)_entityRevisionWithRecordingID:(long long)arg1;
- (void)_enumerateFetchedRecordingTitles:(id /* block */)arg1;
- (void)_enumerateSavedRecordingsAndEntityRevisionInArrayOfManagedObjects:(id)arg1 createIfNeeded:(bool)arg2 block:(id /* block */)arg3;
- (void)_handleExternalModelDidSaveNotification:(id)arg1;
- (void)_handleInternalModelDidSaveNotification:(id)arg1;
- (id)_initWithManagedObjectContext:(id)arg1;
- (id)_labelPresetsForQuery:(id)arg1;
- (void)_migrateDatabaseIfNecessary;
- (long long)_nextEntityRevisionID;
- (long long)_nextRecordingID;
- (void)_postRecordingsModelDidChangeForNotificationName:(id)arg1;
- (id)_recordingWithRecordingID:(long long)arg1;
- (bool)_saveIfNecessary:(id*)arg1;
- (void)_scheduleAutomaticRecordingDeletions;
- (void)_setNextEntityRevisionID:(long long)arg1 save:(bool)arg2;
- (void)_setNextRecordingID:(long long)arg1 save:(bool)arg2;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (unsigned long long)count;
- (long long)currentEntityRevision;
- (void)dealloc;
- (bool)deleteDatabaseProperty:(id)arg1;
- (void)deleteRecording:(id)arg1;
- (id)entityRevisionsForRecording:(id)arg1;
- (void)enumerateExistingRecordingsSinceEntityRevision:(long long)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateExistingRecordingsWithBlock:(id /* block */)arg1;
- (id)fetchSavedRecordingIDs;
- (void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1;
- (bool)hasExistingRecordingForAudioFile:(id)arg1;
- (id)indexPathForRecording:(id)arg1;
- (id)init;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4;
- (long long)isSavingDisabledCount;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)performWithSavingDisabled:(id /* block */)arg1;
- (void)prepareToSaveByUpdatingEntityRevisionsWithChangeContext:(id)arg1;
- (id)recordingAtIndex:(unsigned long long)arg1;
- (id)recordingWithID:(id)arg1;
- (id)recordingWithITunesPersistentID:(long long)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (id)recordings;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (void)saveIfNecessary;
- (void)setIsSavingDisabledCount:(long long)arg1;
- (void)setValid:(bool)arg1;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(bool)arg3;
- (bool)valid;
- (id)valueForDatabaseProperty:(id)arg1;

@end
