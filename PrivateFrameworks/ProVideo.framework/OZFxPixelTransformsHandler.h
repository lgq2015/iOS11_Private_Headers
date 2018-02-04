/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPixelTransformsHandler : NSObject <FxPixelTransformsAPI, PROAPIObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })destinationInversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })destinationPixelTransform;
- (id)init;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })inversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransform;
- (void)setAgent:(struct LiAgent { struct LiAgent {} *x1; struct LiImageSource {} *x2; struct LiImageSource {} *x3; struct LiImageSource {} *x4; int x5; int x6; int x7; bool x8; struct LiRenderParameters {} *x9; bool x10; struct PCRect<int> { int x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; bool x12; struct PCRect<int> { int x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct LiClipSet { struct PCArray<PCVector4<double>, PCArray_Traits<PCVector4<double> > > { int (**x_1_2_1)(); int x_1_2_2; int x_1_2_3; struct PCVector4<double> {} *x_1_2_4; } x_14_1_1; struct PCArray<int, PCArray_Traits<int> > { int (**x_2_2_1)(); int x_2_2_2; int x_2_2_3; int *x_2_2_4; } x_14_1_2; } x14; struct LiClipSet {} *x15; struct LiClipSet {} *x16; struct PCMatrix44Tmpl<double> {} *x17; struct PCMatrix44Tmpl<double> {} *x18; struct PCMatrix44Tmpl<double> {} *x19; struct PCMatrix44Tmpl<double> {} *x20; struct PCMatrix44Tmpl<double> {} *x21; struct PCMatrix44Tmpl<double> {} *x22; struct PCMatrix44Tmpl<double> {} *x23; struct PCMatrix44Tmpl<double> {} *x24; }*)arg1;
- (void)setPostTransform:(const struct PCMatrix44Tmpl<double> { double x1[4][4]; }*)arg1;
- (void)setPreTransform:(const struct PCMatrix44Tmpl<double> { double x1[4][4]; }*)arg1;

@end
