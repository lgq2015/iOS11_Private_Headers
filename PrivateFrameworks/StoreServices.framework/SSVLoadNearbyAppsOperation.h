/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLoadNearbyAppsOperation : NSOperation {
    NSString * _baseURLString;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CLLocation * _location;
    NSMutableDictionary * _parameters;
    id /* block */  _responseBlock;
    NSString * _storeFrontSuffix;
    NSString * _userAgent;
}

@property (readonly) CLLocation *location;
@property (copy) NSString *pointOfInterestIdentifier;
@property (copy) NSString *pointOfInterestProviderIdentifier;
@property (copy) NSString *pointOfInterestProviderURL;
@property (copy) id /* block */ responseBlock;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (id)_lookupWithRequest:(id)arg1 error:(id*)arg2;
- (id)_storeFrontSuffix;
- (id)initWithBaseURL:(id)arg1 location:(id)arg2;
- (id)location;
- (void)main;
- (id)pointOfInterestIdentifier;
- (id)pointOfInterestProviderIdentifier;
- (id)pointOfInterestProviderURL;
- (id /* block */)responseBlock;
- (void)setPointOfInterestIdentifier:(id)arg1;
- (void)setPointOfInterestProviderIdentifier:(id)arg1;
- (void)setPointOfInterestProviderURL:(id)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)setStoreFrontSuffix:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)storeFrontSuffix;
- (id)userAgent;

@end
