/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface _PUSliderPlayheadBaseView : UIView <PUPhotoEditLayoutStaticAdaptable> {
    long long  _layoutOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOrientation;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void)_updateBaseShape;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutOrientation;
- (void)setupWithLayoutOrientation:(long long)arg1;

@end
