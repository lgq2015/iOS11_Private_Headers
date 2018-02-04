/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPersonalizeOffersOperation : ISOperation {
    ISPersonalizeOffersRequest * _request;
    SSPersonalizeOffersResponse * _response;
}

@property (readonly) ISPersonalizeOffersRequest *personalizeOffersReqeust;
@property (readonly) SSPersonalizeOffersResponse *response;

- (void)_addDictionaryToResponse:(id)arg1;
- (id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id*)arg3;
- (bool)_runWithURLDictionary:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithPersonalizeOffersRequest:(id)arg1;
- (id)personalizeOffersReqeust;
- (id)response;
- (void)run;

@end
