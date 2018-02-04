/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification> {
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } outputSize;
@property (readonly) Class superclass;

- (struct CGSize { double x1; double x2; })outputSize;
- (id)renderedImageIdentifier;
- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;

@end
