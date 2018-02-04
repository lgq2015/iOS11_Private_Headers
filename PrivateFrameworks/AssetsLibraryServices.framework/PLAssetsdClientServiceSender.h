/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLAssetsdClientServiceSender : NSObject <PLAssetsdClientService> {
    NSObject<OS_xpc_object> * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(bool)arg3 data:(id)arg4 error:(id)arg5;
- (id)initWithConnection:(id)arg1;

@end
