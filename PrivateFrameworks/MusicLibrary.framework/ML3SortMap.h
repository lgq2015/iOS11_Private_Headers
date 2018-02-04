/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SortMap : NSObject {
    ML3DatabaseConnection * _connection;
    NSMutableArray * _entries;
    ML3MusicLibrary * _library;
    NSData * _maxSortKey;
    NSData * _minSortKey;
    NSMutableDictionary * _nameOrders;
    bool  _preloadNames;
    long long  _smallestNameDelta;
}

- (void).cxx_destruct;
- (bool)_insertSortedNameEntriesIntoSortMap:(id)arg1;
- (long long)_maxNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (id)_maxSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (long long)_minNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (id)_minSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (long long)_sortKeyDistance:(id)arg1 sortKey2:(id)arg2 offset:(unsigned long long)arg3;
- (id)_sortKeyString:(id)arg1;
- (id)_sortedNameEntriesToInsertForNames:(id)arg1;
- (bool)attemptInsertStringsIntoSortMap:(id)arg1;
- (bool)commitFailedInsertedStrings:(id)arg1;
- (bool)commitUpdates;
- (id)initWithConnection:(id)arg1 library:(id)arg2 preloadNames:(bool)arg3;
- (bool)insertStringsIntoSortMap:(id)arg1 didReSortMap:(bool*)arg2;
- (bool)loadExistingSortedEntries;
- (id)nameOrders;

@end
