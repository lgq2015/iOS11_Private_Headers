/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFontChooserUIItemDelegate : NSObject <AKFontChooserUserInterfaceItem, AKUserInterfaceItem> {
    AKTextAttributesViewController * _parentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AKTextAttributesViewController *parentController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)convertFont:(id)arg1;
- (id)parentController;
- (void)setParentController:(id)arg1;
- (void)syncFontsToUI:(id)arg1;
- (long long)tag;

@end
