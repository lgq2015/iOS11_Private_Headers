/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQuery : NSObject <BRNotificationReceiverDelegate> {
    struct { 
        unsigned long long first_max_num; 
        unsigned long long first_max_ms; 
        unsigned long long progress_max_num; 
        unsigned long long progress_max_ms; 
        unsigned long long update_max_num; 
        unsigned long long update_max_ms; 
    }  _batchingParameters;
    NSString * _bundleIdentifier;
    int (* _create_result_callbacks_equal;
    int (* _create_result_callbacks_release;
    void * _create_result_context;
    int (* _create_result_fn;
    int (* _create_value_callbacks_equal;
    int (* _create_value_callbacks_release;
    void * _create_value_context;
    int (* _create_value_fn;
    int  _disableCount;
    bool  _needsCrashEvicting;
    bool  _needsCrashMarking;
    NSPredicate * _predicate;
    NSMetadataQuery * _query;
    NSOperationQueue * _queryQueue;
    int  _queryState;
    BRNotificationReceiver * _receiver;
    int  _receiverDisableCount;
    NSMutableArray * _results;
    NSMutableDictionary * _resultsByRowID;
    struct __CFRunLoop { } * _runLoop;
    unsigned int  _scopeOptions;
    NSArray * _searchScopes;
    bool  _sendHasUpdateNotification;
    void * _sort_context;
    int (* _sort_fn;
    NSArray * _sortingAttributes;
    NSMutableDictionary * _toBeInsertedByFileObjectID;
    NSMutableDictionary * _toBeRemovedByFileObjectID;
    NSMutableDictionary * _toBeReplacedByFileObjectID;
    bool  _ubiquitousGatherComplete;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSMetadataQuery *query;
@property (retain) BRNotificationReceiver *receiver;
@property (readonly) Class superclass;

+ (void)didEndPossibleFileOperation:(id)arg1;
+ (void)initialize;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (bool)_collectUpdates:(id)arg1;
- (void)_performBlockAsync:(id /* block */)arg1;
- (void)_postNote:(const struct __CFString { }*)arg1;
- (void)_postNote:(const struct __CFString { }*)arg1 userInfo:(id)arg2;
- (void)_processChanges:(id)arg1;
- (void)_processUpdates;
- (id)_replacementObjectForQueryItem:(id)arg1;
- (id)_replacementObjectsForArrayOfQueryItem:(id)arg1;
- (void)_runQuery;
- (void)_sendHasUpdateNotificationIfNeeded;
- (void)_setQueryState:(int)arg1;
- (void)_watchScopes;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(long long)arg2;
- (unsigned long long)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)disableUpdates;
- (void)enableUpdates;
- (unsigned char)executeWithOptions:(unsigned long long)arg1;
- (long long)indexOfResult:(const void*)arg1;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4;
- (void)notificationReceiverDidReceiveNotifications:(id)arg1;
- (void)notificationsReceiverDidFinishGathering:(id)arg1;
- (void)notificationsReceiverDidInvalidate:(id)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1;
- (void)processUpdates;
- (id)query;
- (id)queryQueue;
- (id)receiver;
- (const void*)resultAtIndex:(long long)arg1;
- (unsigned long long)resultCount;
- (void)setBatchingParameters:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })arg1;
- (void)setCreateResultFunction:(int (*)arg1 withContext:(void*)arg2 callbacks:(const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setCreateValueFunction:(int (*)arg1 withContext:(void*)arg2 callbacks:(const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setExternalDocumentsBundleIdentifier:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setReceiver:(id)arg1;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned int)arg2;
- (void)setSendHasUpdateNotification:(bool)arg1;
- (void)setSortComparator:(int (*)arg1 withContext:(void*)arg2;
- (void)stop;
- (id)valuesOfAttribute:(id)arg1;

@end
