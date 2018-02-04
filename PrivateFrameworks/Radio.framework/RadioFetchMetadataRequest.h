/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioFetchMetadataRequest : RadioRequest {
    NSArray * _itemIDs;
    SSURLConnectionRequest * _request;
    NSData * _timedMetadata;
    NSArray * _tracks;
}

@property (nonatomic, copy) NSArray *itemIDs;
@property (nonatomic, copy) NSData *timedMetadata;
@property (nonatomic, retain) NSArray *tracks;

- (void).cxx_destruct;
- (id)_itemIDsToRadioTracks;
- (void)cancel;
- (id)itemIDs;
- (void)setItemIDs:(id)arg1;
- (void)setTimedMetadata:(id)arg1;
- (void)setTracks:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (id)timedMetadata;
- (id)tracks;

@end
