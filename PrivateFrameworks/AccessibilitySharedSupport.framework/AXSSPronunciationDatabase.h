/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSPronunciationDatabase : NSObject <APSConnectionDelegate> {
    APSConnection * _apsConnection;
    NSManagedObjectContext * _managedObjectContext;
    NSCloudKitMirroringDelegate * _mirroringDelegate;
}

@property (nonatomic, retain) APSConnection *apsConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (readonly) Class superclass;

+ (id)sharedDatabase;

- (void).cxx_destruct;
- (id)_cloudBundlesFromLocalBundles:(id)arg1;
- (id)_cloudLanguagesFromLocalLanguages:(id)arg1;
- (id)_cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3;
- (id)_cloudVoicesFromLocalVoices:(id)arg1;
- (void)_contentDidUpdate:(id)arg1;
- (id)_databaseDirectoryPath;
- (id)_databaseFilePath;
- (void)_identityDidChange:(id)arg1;
- (id)_localSubstitutionsFromCloudSubstitutions:(id)arg1;
- (bool)_saveIfPossible;
- (void)_setupDatabase;
- (void)_storesWillChange:(id)arg1;
- (void)_updateCloudSubstitution:(id)arg1 withLocalSubstitution:(id)arg2;
- (void)addPronunciationSubstitution:(id)arg1;
- (id)allActiveSubstitutions;
- (id)allSubstitutions;
- (id)apsConnection;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)forceSync;
- (id)init;
- (id)managedObjectContext;
- (id)mirroringDelegate;
- (void)removePronunciationSubstitution:(id)arg1;
- (void)setApsConnection:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setMirroringDelegate:(id)arg1;
- (id)substitutionForString:(id)arg1;

@end
