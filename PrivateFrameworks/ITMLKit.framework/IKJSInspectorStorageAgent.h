/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler> {
    IKJSInspectorController * _controller;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_itemAdded:(id)arg1;
- (void)_itemRemoved:(id)arg1;
- (void)_itemUpdated:(id)arg1;
- (void)_itemsCleared:(id)arg1;
- (id)_storageForStorageId:(id)arg1;
- (id)_storageIdForStorage:(id)arg1;
- (id)controller;
- (void)dealloc;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getDOMStorageItemsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 storageId:(id)arg3;
- (id)initWithInspectorController:(id)arg1;
- (void)removeDOMStorageItemWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 storageId:(id)arg3 key:(id)arg4;
- (void)setDOMStorageItemWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5;
- (void)startListeningForStorageNotifications;
- (void)stopListeningForStorageNotifications;

@end
