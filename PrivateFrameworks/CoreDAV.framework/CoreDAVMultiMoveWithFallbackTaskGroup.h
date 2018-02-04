/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSMutableDictionary * _destinationEntityETags;
    NSURL * _destinationURL;
    NSMutableSet * _destinationURLs;
    NSMutableArray * _outstandingSourceURLsToMove;
    int  _overwrite;
    NSDictionary * _sourceEntityDataContentTypes;
    NSDictionary * _sourceEntityDataPayloads;
    NSDictionary * _sourceEntityETags;
    NSSet * _sourceURLs;
    bool  _useFallback;
}

@property (nonatomic, readonly) NSMutableDictionary *destinationEntityETags;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) NSMutableSet *destinationURLs;
@property (nonatomic, retain) NSMutableArray *outstandingSourceURLsToMove;
@property (nonatomic, readonly) int overwrite;
@property (nonatomic, readonly) NSDictionary *sourceEntityDataContentTypes;
@property (nonatomic, readonly) NSDictionary *sourceEntityDataPayloads;
@property (nonatomic, readonly) NSDictionary *sourceEntityETags;
@property (nonatomic, readonly) NSSet *sourceURLs;
@property (nonatomic, readonly) bool useFallback;

- (void).cxx_destruct;
- (void)_completedMoveTask:(id)arg1 sourceURL:(id)arg2;
- (void)_completedPutTask:(id)arg1 sourceURL:(id)arg2;
- (id)_eTagFromTaskResponseHeaders:(id)arg1;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)description;
- (id)destinationEntityETags;
- (id)destinationURL;
- (id)destinationURLs;
- (id)filenameFromURL:(id)arg1;
- (id)fullDestinationURLFromSourceURL:(id)arg1;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(bool)arg3 useFallback:(bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (id)outstandingSourceURLsToMove;
- (int)overwrite;
- (void)processOutstandingTasks;
- (void)setOutstandingSourceURLsToMove:(id)arg1;
- (id)sourceEntityDataContentTypes;
- (id)sourceEntityDataPayloads;
- (id)sourceEntityETags;
- (id)sourceURLs;
- (void)startTaskGroup;
- (bool)useFallback;

@end
