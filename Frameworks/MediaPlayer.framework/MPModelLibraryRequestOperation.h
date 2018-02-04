/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelLibraryRequest * _request;
    id /* block */  _responseHandler;
    NSOperationQueue * _serialAccessQueue;
}

@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, copy) MPModelLibraryRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) NSOperationQueue *serialAccessQueue;

- (void).cxx_destruct;
- (void)_executeLegacyRequest;
- (void)_executeRequest;
- (id)_itemProperties;
- (id)_libraryView;
- (void)_sanityCheckRequest;
- (id)_sectionProperties;
- (void)execute;
- (id)operationQueue;
- (id)request;
- (id /* block */)responseHandler;
- (id)serialAccessQueue;
- (void)setOperationQueue:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSerialAccessQueue:(id)arg1;

@end
