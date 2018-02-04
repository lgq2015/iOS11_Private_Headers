/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadataRequester : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    ACAccountStore * _accountStore;
    NSMapTable * _dataForTasks;
    bool  _hasCheckedYelpAccountCredentials;
    NSMapTable * _requestsForURLs;
    NSURLSession * _session;
    OAURLRequestSigner * _signer;
    NSMapTable * _tasksForURLs;
    ACAccountCredential * _yelpAccountCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) OAURLRequestSigner *signer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ACAccountCredential *yelpAccountCredentials;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (void)cancelRequestsForMapItem:(id)arg1;
- (void)dealloc;
- (void)handleTask:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (id)init;
- (void)sendRequest:(id)arg1;
- (id)signer;
- (id)yelpAccountCredentials;

@end
