/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCleanShareSubitemsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    unsigned long long  _batchSize;
    unsigned long long  _rowID;
    NSMutableArray * _shareIDsToDelete;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteNextShareIDBatch;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
