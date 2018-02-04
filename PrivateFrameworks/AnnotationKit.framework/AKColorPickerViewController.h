/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem> {
    UIColor * _color;
    long long  _colorAttributeTag;
    AKColorPaletteView * _colorPalette;
    AKController * _controller;
    long long  _tag;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long colorAttributeTag;
@property (nonatomic, retain) AKColorPaletteView *colorPalette;
@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long tag;

- (void).cxx_destruct;
- (id)color;
- (long long)colorAttributeTag;
- (id)colorPalette;
- (id)controller;
- (id)convertTextAttributes:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorAttributeTag:(long long)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setController:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)syncTextAttributesToUI:(id)arg1;
- (long long)tag;
- (void)valueChanged:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
