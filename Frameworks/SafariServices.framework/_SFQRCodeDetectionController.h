/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFQRCodeDetectionController : NSObject {
    BCSQRCodeParser * _QRCodeParser;
    NSMapTable * _cachedElements;
    <BCSAction> * _lastDetectedAction;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (bool)_actionPickerItemSupportCopyAction:(id)arg1;
- (id)actionForElement:(id)arg1;
- (id)actionPickerItemsForAction:(id)arg1;
- (id)additionalWKElementActionFromElement:(id)arg1 defaultActions:(id)arg2;
- (id)adjustedCopyActionForAction:(id)arg1 element:(id)arg2;
- (void)clearCachedElement:(id)arg1;
- (id)elementForAction:(id)arg1;
- (void)getActionForImage:(id)arg1 completion:(id /* block */)arg2;
- (id)getActionForImageSynchronously:(id)arg1 userInfo:(id*)arg2;
- (id)init;
- (void)preparePickerItemsForActionIfNeeded:(id)arg1 element:(id)arg2 defaultAcitons:(id)arg3;

@end
