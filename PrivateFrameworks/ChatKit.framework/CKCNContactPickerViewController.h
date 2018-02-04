/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCNContactPickerViewController : CNContactPickerViewController <CKAdaptivePresentedControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)preserveModalPresentationStyle;
- (bool)shouldAutorotate;
- (bool)wantsWindowedPresentation;

@end
