/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKInstructorExtensionContext : NSExtensionContext <CRKInstructorExtensionVendor, NSXPCListenerDelegate> {
    NSXPCListener * mListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)listenerEndpointWithCompletion:(id /* block */)arg1;

@end
