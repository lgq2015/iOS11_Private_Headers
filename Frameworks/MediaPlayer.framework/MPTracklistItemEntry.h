/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTracklistItemEntry : MPTracklistEntry <MPTracklistEnumerationItem> {
    NSMutableArray * _clonedEntries;
    bool  _dataSourceMoved;
    NSString * _itemIdentifier;
    MPTracklistItemEntry * _rootEntry;
    bool  _userMoved;
    bool  _userRemoved;
}

@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, readonly) NSMutableArray *clonedEntries;
@property (getter=isDataSourceMoved, nonatomic, readonly) bool dataSourceMoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) MPTracklistItemEntry *latestUserClone;
@property (getter=isRemoved, nonatomic, readonly) bool removed;
@property (nonatomic) MPTracklistItemEntry *rootEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; } state;
@property (readonly) Class superclass;
@property (getter=isUserMoved, nonatomic, readonly) bool userMoved;
@property (getter=isUserRemoved, nonatomic, readonly) bool userRemoved;

+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3;

- (void).cxx_destruct;
- (long long)_generationNumber;
- (id)clonedEntries;
- (id)debugDescription;
- (long long)entryType;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)isDataSourceMoved;
- (bool)isDataSourceRemoved;
- (bool)isRemoved;
- (bool)isUserMoved;
- (bool)isUserRemoved;
- (id)itemIdentifier;
- (id)latestUserClone;
- (id)newClonedEntry;
- (id)rootEntry;
- (void)setDataSourceMoved;
- (void)setDataSourceRemoved;
- (void)setRootEntry:(id)arg1;
- (void)setUserMoved;
- (void)setUserRemoved;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; })state;

@end
