/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentShippingAddressViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)presentCell:(id)arg1 withDataItem:(id)arg2 shouldShowSeperator:(bool)arg3 forPaymentRequest:(id)arg4;

@end
