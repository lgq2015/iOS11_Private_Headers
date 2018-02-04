/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMomentsController : NSObject <TUMomentsControllerDataSourceDelegate> {
    NSMutableDictionary * _callByVideoStreamToken;
    NSMutableDictionary * _capabilitiesByVideoStreamToken;
    <TUMomentsControllerDataSource> * _dataSource;
    <TUMomentsControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableDictionary *callByVideoStreamToken;
@property (nonatomic, readonly) NSMutableDictionary *capabilitiesByVideoStreamToken;
@property (nonatomic, readonly) <TUMomentsControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TUMomentsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (bool)isFaceTimePhotosEnabled;
+ (bool)isFaceTimePhotosEnabledByDefault;
+ (bool)isFaceTimePhotosRestricted;
+ (void)setFaceTimePhotosEnabled:(bool)arg1;

- (void).cxx_destruct;
- (id)callByVideoStreamToken;
- (id)capabilitiesByVideoStreamToken;
- (id)capabilitiesForCall:(id)arg1;
- (id)dataSource;
- (void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2;
- (void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endRequestWithTransactionID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;
- (id)queue;
- (void)registerCall:(id)arg1 completion:(id /* block */)arg2;
- (void)serverDiedForDataSource:(id)arg1;
- (void)startRequestWithMediaType:(int)arg1 forCall:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterCall:(id)arg1 completion:(id /* block */)arg2;
- (void)willCaptureRemoteRequestForDataSource:(id)arg1;

@end
