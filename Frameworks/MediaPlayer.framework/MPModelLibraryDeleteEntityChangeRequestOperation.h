/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelLibraryDeleteEntityChangeRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryDeleteEntityChangeRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_deleteItems:(id)arg1 withLibrary:(id)arg2;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 mediaLibrary:(id)arg3;
- (bool)_isCloudLibraryEnabled;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
