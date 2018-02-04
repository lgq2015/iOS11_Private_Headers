/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionVendorContext : _MXExtensionContext <_MXExtensionVendorContextType> {
    <_MXExtensionResponseObserver> * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2;
- (void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(id /* block */)arg3;
- (void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;

@end
