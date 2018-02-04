/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchRecentsStorage : NSObject {
    bool  _hasChanges;
    long long  _limit;
    long long  _maximumNumberOfRecents;
    NSURL * _persistenceURL;
    NSMutableArray * _recents;
}

@property (readonly) long long maximumNumberOfRecents;

+ (id)sharedRecentsStorage;

- (void).cxx_destruct;
- (void)_addRecent:(id)arg1 replacingRecent:(id)arg2;
- (void)addRecent:(id)arg1;
- (void)clear;
- (id)initWithLimit:(long long)arg1 persistenceURL:(id)arg2;
- (void)load;
- (long long)maximumNumberOfRecents;
- (id)recentSearches;
- (void)replaceRecent:(id)arg1 withRecent:(id)arg2;
- (void)save;

@end
