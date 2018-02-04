/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCRemoteDocumentManager : NSObject {
    NSURLSessionDownloadTask * _fetchUpdateRequest;
    DCService * _service;
    id /* block */  _updatedVersionIdentifierHandler;
    NSDictionary * _watchedDocumentIdentifiersAndVersionIdentifiers;
}

@property (readonly, retain) DCService *service;

+ (id)_getUniqueHostIdentifier;
+ (id)remoteDocumentManagerForService:(id)arg1;

- (void).cxx_destruct;
- (id)_standardRequestHeaders;
- (id)contentsOfDirectoryWithDocumentIdentifier:(id)arg1 unlessVersionIdentifier:(id)arg2 activityInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)contentsOfFileWithDocumentIdentifier:(id)arg1 unlessVersionIdentifier:(id)arg2 activityInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)contentsOfRootDirectoryUnlessVersionIdentifier:(id)arg1 activityInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createDirectoryWithName:(id)arg1 parentDocumentIdentifier:(id)arg2 attributes:(id)arg3 parentVersionIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)finishFetchingUpdates;
- (void)handleEventsForBackgroundURLSession:(id)arg1 withServerRequestResponseHandler:(id /* block */)arg2;
- (void)handleResponse:(id)arg1 body:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleUpdateResponse:(id)arg1 body:(id)arg2 activityInfo:(id)arg3 error:(id)arg4;
- (id)initWithService:(id)arg1;
- (bool)isServiceAvailable;
- (id)requestHeadersFromMetadata:(id)arg1;
- (void)restoreVersionOfFileWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 parentVersionIdentifier:(id)arg3 activityInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)rootDocumentIdentifier;
- (id)service;
- (void)startFetchingUpdatesOfDocumentIdentifiersAndVersionIdentifiers:(id)arg1 activityInfo:(id)arg2 updatedVersionIdentifierHandler:(id /* block */)arg3;
- (void)versionListForFileWithDocumentIdentifier:(id)arg1 activityInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)writeToFileWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 parentDocumentIdentifier:(id)arg3 parentVersionIdentifier:(id)arg4 activityInfo:(id)arg5 source:(id)arg6 attributes:(id)arg7 completionHandler:(id /* block */)arg8;
- (id)writeToFileWithName:(id)arg1 parentDocumentIdentifier:(id)arg2 parentVersionIdentifier:(id)arg3 activityInfo:(id)arg4 source:(id)arg5 attributes:(id)arg6 completionHandler:(id /* block */)arg7;

@end
