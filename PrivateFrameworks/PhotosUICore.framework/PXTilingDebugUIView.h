/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingDebugUIView : UIView <PXTilingDebugDelegate> {
    PXTilingControllerDebugInfo * __debugInfo;
    double  _debugWidth;
}

@property (setter=_setDebugInfo:, nonatomic, retain) PXTilingControllerDebugInfo *_debugInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_debugInfo;
- (void)_setDebugInfo:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)tilingControllerDidUpdateDebugInfo:(id)arg1;

@end
