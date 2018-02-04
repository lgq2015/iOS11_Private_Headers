/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecording : NSManagedObject <UIActivityItemSource> {
    AVAsset * _avAsset;
    bool  _hasPendingChangeAffectingEntityRevision;
    bool  _ignoreChangeForEntityRevision;
    NSString * _path;
    bool  _pathWasInvalid;
}

@property (nonatomic, readonly, copy) NSURL *URIRepresentation;
@property (nonatomic, readonly) AVAsset *avAsset;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool hasPendingChangeAffectingEntityRevision;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iTunesPersistentID;
@property (nonatomic, readonly) bool isContentBeingModified;
@property (nonatomic, copy) NSString *path;
@property (getter=isPendingRestore, nonatomic) bool pendingRestore;
@property (nonatomic) long long recordingID;
@property (nonatomic, readonly, copy) CSSearchableItem *searchableItem;
@property (readonly) Class superclass;
@property (getter=isSynced, nonatomic) bool synced;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleDisallowingEmptyString;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)localizedStringForRecordingLabel:(long long)arg1;
+ (id)propertiesAffectingEntityRevision;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;

- (void).cxx_destruct;
- (id)URIRepresentation;
- (id)_activityURLCreateIfNecessary:(bool)arg1;
- (id)_labelAllowingEmptyString:(bool)arg1;
- (void)_validatePath;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)avAsset;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)customLabel;
- (id)detailLabel;
- (double)duration;
- (bool)hasPendingChangeAffectingEntityRevision;
- (long long)iTunesPersistentID;
- (bool)isContentBeingModified;
- (bool)isPendingRestore;
- (bool)isSynced;
- (id)label;
- (long long)labelPreset;
- (id)name;
- (id)path;
- (long long)recordingID;
- (id)searchableItem;
- (void)setCustomLabel:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setITunesPersistentID:(long long)arg1;
- (void)setLabelPreset:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPendingRestore:(bool)arg1;
- (void)setRecordingID:(long long)arg1;
- (void)setSynced:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleDisallowingEmptyString;
- (id)url;
- (void)willChangeValueForKey:(id)arg1;
- (void)willSave;

@end