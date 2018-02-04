/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTitleSubtitleCALayerPromise : PXCALayerPromise <PXMutableTitleSubtitleCALayerPromise> {
    double  __textScaleFactor;
    bool  _diagnosticsEnabled;
    NSArray * _diagnosticsRenderedLines;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layerContentBounds;
    double  _layerLastBaseline;
    PXTitleSubtitleLabelSpec * _spec;
    NSString * _subtitleText;
    NSString * _titleText;
    long long  _typesettingMode;
}

@property (nonatomic, readonly) double _textScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double contentsScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool diagnosticsEnabled;
@property (nonatomic, readonly, copy) NSArray *diagnosticsRenderedLines;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layerContentBounds;
@property (nonatomic, readonly) double layerLastBaseline;
@property (nonatomic) bool rendersAsynchronously;
@property (nonatomic, readonly) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic, readonly, copy) NSString *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *titleText;
@property (nonatomic, readonly) long long typesettingMode;

- (void).cxx_destruct;
- (id)_attributedStringForLabelWithText:(id)arg1 spec:(id)arg2;
- (id)_linesToRenderWithContext:(struct CGContext { }*)arg1;
- (double)_textScaleFactor;
- (id)createCustomLayer;
- (bool)diagnosticsEnabled;
- (id)diagnosticsRenderedLines;
- (void)drawLayerContentInContext:(struct CGContext { }*)arg1;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerContentBounds;
- (double)layerLastBaseline;
- (void)performChanges:(id /* block */)arg1;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTypesettingMode:(long long)arg1;
- (id)spec;
- (id)subtitleText;
- (id)titleText;
- (long long)typesettingMode;

@end
