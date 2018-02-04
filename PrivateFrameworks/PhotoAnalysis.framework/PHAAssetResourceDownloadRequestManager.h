/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAssetResourceDownloadRequestManager : NSObject <PHADownloadRequestManagement> {
    unsigned long long  _allowedDownloadCount;
    NSDate * _dateToRequestPermissionAgain;
    unsigned long long  _expectedRequestsCount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long expectedRequestsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (unsigned long long)expectedRequestsCount;
- (id)init;
- (void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setExpectedRequestsCount:(unsigned long long)arg1;
- (id)statusAsDictionary;

@end
