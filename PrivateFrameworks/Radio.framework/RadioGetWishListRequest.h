/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetWishListRequest : RadioRequest {
    unsigned long long  _maxNumberOfTracks;
    SSURLConnectionRequest * _request;
}

@property (nonatomic) unsigned long long maxNumberOfTracks;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (unsigned long long)maxNumberOfTracks;
- (void)setMaxNumberOfTracks:(unsigned long long)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
