/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyQueueRequestOperation : MPAsyncOperation <MPCPlayerQueueRequestOperation> {
    MPCPlayerQueueRequest * _request;
    id /* block */  _responseHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPCPlayerQueueRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
