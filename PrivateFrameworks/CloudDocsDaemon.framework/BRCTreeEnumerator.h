/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTreeEnumerator : NSObject {
    BRCAppLibrary * _appLibrary;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_group> * _group;
    id /* block */  _handler;
    bool  _isCancelled;
    BRCItemID * _parentID;
    unsigned long long  _rowID;
    NSMutableIndexSet * _seen;
    BRCAccountSession * _session;
    id  _strongSelf;
    NSMutableIndexSet * _toVisit;
    brc_task_tracker * _tracker;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (unsigned long long)__iterate:(unsigned long long)arg1;
- (void)_doneWithError:(id)arg1;
- (void)_iterate:(unsigned long long)arg1;
- (void)_scheduleAsync;
- (bool)_visitNewParent;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 handler:(id /* block */)arg3;
- (bool)finishIfCancelled;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 group:(id)arg2;
- (id)initWithSession:(id)arg1 tracker:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
