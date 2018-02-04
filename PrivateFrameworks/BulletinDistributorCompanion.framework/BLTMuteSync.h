/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTMuteSync : NSObject {
    NSMutableDictionary * _mutedSectionIdentifiersForDay;
    NPSManager * _npsManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSSet *mutedForTodaySectionIdentifiers;

- (void).cxx_destruct;
- (void)_cleanMuteIdentifiers;
- (void)_loadMutedSectionIdentifiers;
- (void)_queue_sync;
- (void)_updateObservers;
- (void)addSectionIdentifiers:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isMutedForTodaySectionIdentifier:(id)arg1;
- (id)mutedForTodaySectionIdentifiers;
- (void)removeSectionIdentifiers:(id)arg1;

@end
