/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SSReadingList : NSObject {
    bool  _batchScheduled;
    NSObject<OS_xpc_object> * _batchedReadingListItems;
    WebBookmarksXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)defaultReadingList;
+ (bool)supportsURL:(id)arg1;

- (void).cxx_destruct;
- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;
- (id)_init;
- (void)_sendBatchedReadingListItems;
- (bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)init;

@end
