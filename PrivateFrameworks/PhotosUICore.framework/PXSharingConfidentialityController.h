/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingConfidentialityController : NSObject

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (bool)confidentialWarningRequiredForAsset:(id)arg1;
+ (bool)confidentialWarningRequiredForAssets:(id)arg1;
+ (bool)confidentialityCheckRequired;
+ (id)confidentialityWarningMessage;
+ (id)confidentialityWarningTitle;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)confidentialityAlertWithConfirmAction:(id /* block */)arg1;
+ (id)confidentialityAlertWithConfirmAction:(id /* block */)arg1 abortAction:(id /* block */)arg2;

@end
