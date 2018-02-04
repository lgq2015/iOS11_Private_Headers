/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXNameDelegate : NSObject {
    id /* block */  _contactNameItemsCompletion;
    id /* block */  _contactNameItemsHandler;
    id /* block */  _contactNameItemsSetup;
    NSDate * _loadEntitiesDetectedSince;
    id /* block */  _namedEntitiesForContextCompletion;
    id /* block */  _namedEntitiesForContextHandler;
    id /* block */  _namedEntitiesForContextSetup;
    id /* block */  _recentContactNameItemsCompletion;
    id /* block */  _recentContactNameItemsHandler;
    id /* block */  _recentContactNameItemsSetup;
    id /* block */  _recentNamedEntitiesCompletion;
    id /* block */  _recentNamedEntitiesHandler;
    id /* block */  _recentNamedEntitiesSetup;
    id /* block */  _resetContactNameItemData;
    id /* block */  _resetNamedEntitiesData;
    bool  _supportsIncrementalNameLoading;
}

@property (nonatomic, copy) id /* block */ contactNameItemsCompletion;
@property (nonatomic, copy) id /* block */ contactNameItemsHandler;
@property (nonatomic, copy) id /* block */ contactNameItemsSetup;
@property (nonatomic, retain) NSDate *loadEntitiesDetectedSince;
@property (nonatomic, copy) id /* block */ namedEntitiesForContextCompletion;
@property (nonatomic, copy) id /* block */ namedEntitiesForContextHandler;
@property (nonatomic, copy) id /* block */ namedEntitiesForContextSetup;
@property (nonatomic, copy) id /* block */ recentContactNameItemsCompletion;
@property (nonatomic, copy) id /* block */ recentContactNameItemsHandler;
@property (nonatomic, copy) id /* block */ recentContactNameItemsSetup;
@property (nonatomic, copy) id /* block */ recentNamedEntitiesCompletion;
@property (nonatomic, copy) id /* block */ recentNamedEntitiesHandler;
@property (nonatomic, copy) id /* block */ recentNamedEntitiesSetup;
@property (nonatomic, copy) id /* block */ resetContactNameItemData;
@property (nonatomic, copy) id /* block */ resetNamedEntitiesData;
@property (nonatomic) bool supportsIncrementalNameLoading;

- (void).cxx_destruct;
- (id /* block */)contactNameItemsCompletion;
- (id /* block */)contactNameItemsHandler;
- (id /* block */)contactNameItemsSetup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)loadEntitiesDetectedSince;
- (id /* block */)namedEntitiesForContextCompletion;
- (id /* block */)namedEntitiesForContextHandler;
- (id /* block */)namedEntitiesForContextSetup;
- (id /* block */)recentContactNameItemsCompletion;
- (id /* block */)recentContactNameItemsHandler;
- (id /* block */)recentContactNameItemsSetup;
- (id /* block */)recentNamedEntitiesCompletion;
- (id /* block */)recentNamedEntitiesHandler;
- (id /* block */)recentNamedEntitiesSetup;
- (id /* block */)resetContactNameItemData;
- (id /* block */)resetNamedEntitiesData;
- (void)setContactNameItemsCompletion:(id /* block */)arg1;
- (void)setContactNameItemsHandler:(id /* block */)arg1;
- (void)setContactNameItemsSetup:(id /* block */)arg1;
- (void)setLoadEntitiesDetectedSince:(id)arg1;
- (void)setNamedEntitiesForContextCompletion:(id /* block */)arg1;
- (void)setNamedEntitiesForContextHandler:(id /* block */)arg1;
- (void)setNamedEntitiesForContextSetup:(id /* block */)arg1;
- (void)setRecentContactNameItemsCompletion:(id /* block */)arg1;
- (void)setRecentContactNameItemsHandler:(id /* block */)arg1;
- (void)setRecentContactNameItemsSetup:(id /* block */)arg1;
- (void)setRecentNamedEntitiesCompletion:(id /* block */)arg1;
- (void)setRecentNamedEntitiesHandler:(id /* block */)arg1;
- (void)setRecentNamedEntitiesSetup:(id /* block */)arg1;
- (void)setResetContactNameItemData:(id /* block */)arg1;
- (void)setResetNamedEntitiesData:(id /* block */)arg1;
- (void)setSupportsIncrementalNameLoading:(bool)arg1;
- (bool)supportsIncrementalNameLoading;

@end
