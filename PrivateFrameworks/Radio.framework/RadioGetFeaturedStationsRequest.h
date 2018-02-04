/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetFeaturedStationsRequest : RadioRequest {
    NSObject<OS_dispatch_queue> * _artworkQueue;
    bool  _disableArtworkLoading;
    bool  _disableCachedResponses;
    SSURLConnectionRequest * _request;
    unsigned int  _stationCount;
}

@property (nonatomic) bool disableArtworkLoading;
@property (nonatomic) bool disableCachedResponses;

- (void).cxx_destruct;
- (id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(bool)arg3;
- (id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id*)arg2;
- (void)cancel;
- (bool)disableArtworkLoading;
- (bool)disableCachedResponses;
- (id)init;
- (id)initWithStationCount:(unsigned int)arg1;
- (void)setDisableArtworkLoading:(bool)arg1;
- (void)setDisableCachedResponses:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)startWithFeaturedStationsCompletionHandler:(id /* block */)arg1;

@end
