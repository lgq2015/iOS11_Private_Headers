/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDUserDefinedShapeLibrary : NSObject {
    bool  _isWritingDefaultsDatabase;
    NSString * _lastWriterToken;
    NSString * _localWriterToken;
    TSDShapeSearchIndex * _searchIndex;
    NSObject<OS_dispatch_queue> * _searchIndexQueue;
    NSDictionary * _shadowDefaults;
    NSCache * _shapeCache;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSString *lastWriterToken;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long numberOfUserDefinedShapes;
@property (nonatomic) bool p_isWritingDefaultsDatabase;
@property (nonatomic, copy) NSString *p_localWriterToken;
@property (nonatomic, retain) TSDShapeSearchIndex *p_searchIndex;
@property (nonatomic, retain) NSDictionary *p_shadowDefaults;
@property (nonatomic, retain) NSCache *p_shapeCache;
@property (nonatomic, retain) NSUserDefaults *p_userDefaults;
@property (readonly) bool remoteWriteHappened;

+ (id)sharedLibrary;

- (void).cxx_destruct;
- (void)addUserDefinedShapesWithPathSources:(id)arg1 documentRoot:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (void)insertUserDefinedShapeWithPathSource:(id)arg1 atIndex:(unsigned long long)arg2 documentRoot:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)lastWriterToken;
- (id)name;
- (unsigned long long)numberOfUserDefinedShapes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)p_addUserDefinedShapeWithPathSource:(id)arg1 atIndex:(unsigned long long)arg2 pathSourceDefaults:(id)arg3 withChangedIndexSet:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)p_createSearchIndexWithCompletionHandler:(id /* block */)arg1;
- (id)p_identifierAtIndex:(unsigned long long)arg1;
- (bool)p_isWritingDefaultsDatabase;
- (id)p_localWriterToken;
- (void)p_notifyForIndexesChanged:(id)arg1 changeType:(unsigned long long)arg2 documentRoot:(id)arg3;
- (id)p_pathSourceDefaults;
- (id)p_searchIndex;
- (void)p_setPathSourceDefaults:(id)arg1;
- (id)p_shadowDefaults;
- (id)p_shadowPathSourceDefaults;
- (id)p_shapeCache;
- (void)p_updateIdentifierInSearchIndex:(id)arg1 fromUserDefinedName:(id)arg2 toUserDefinedName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)p_updateShadowDefaults;
- (void)p_upgradeDefaultsFromVersion:(unsigned long long)arg1;
- (void)p_upgradeDefaultsIfNeeded;
- (id)p_userDefaults;
- (bool)remoteWriteHappened;
- (bool)removeUserDefinedShapeAtIndex:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)resultsForSearchTerm:(id)arg1;
- (void)setLastWriterToken:(id)arg1;
- (void)setP_isWritingDefaultsDatabase:(bool)arg1;
- (void)setP_localWriterToken:(id)arg1;
- (void)setP_searchIndex:(id)arg1;
- (void)setP_shadowDefaults:(id)arg1;
- (void)setP_shapeCache:(id)arg1;
- (void)setP_userDefaults:(id)arg1;
- (bool)updateShapeAtIndex:(unsigned long long)arg1 withName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)userDefinedShapeAtIndex:(unsigned long long)arg1;
- (id)userDefinedShapeForSearchResult:(id)arg1;

@end