/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPStoreLyricsRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPStoreLyricsRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (id)_lyricsURLForURLBagDictionary:(id)arg1;
+ (bool)supportsLyricsForURLBagDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(bool)arg3;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
