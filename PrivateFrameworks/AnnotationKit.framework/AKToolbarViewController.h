/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolbarViewController : UIViewController {
    AKController * _controller;
}

@property AKController *controller;
@property (readonly) bool isPresentingPopover;

+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1;
- (id)controller;
- (id)initWithController:(id)arg1;
- (bool)isPresentingPopover;
- (void)revalidateItems;
- (void)setController:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)teardown;

@end
