/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;

- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispatchBlockWhenLibraryIsOpen:(id /* block */)arg1;
- (void)finalizeWithCompletionHandler:(id /* block */)arg1;
- (id)proxyLibraryManager;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
- (void)tearDownWithCompletionHandler:(id /* block */)arg1;

@end
