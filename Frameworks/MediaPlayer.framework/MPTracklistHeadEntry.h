/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTracklistHeadEntry : MPTracklistEntry <MPTracklistEnumerationTrackingEntry> {
    NSMutableDictionary * _identifiersItemEntryMap;
    MPTracklistItemEntry * _lastItemEntry;
}

@property (nonatomic, readonly) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *identifiersItemEntryMap;
@property (nonatomic, retain) MPTracklistItemEntry *lastItemEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;

+ (id)headEntryWithSectionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (long long)entryType;
- (id)identifiersItemEntryMap;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (id)lastItemEntry;
- (void)setLastItemEntry:(id)arg1;

@end
