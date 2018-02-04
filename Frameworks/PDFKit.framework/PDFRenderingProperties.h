/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFRenderingProperties : NSObject {
    PDFRenderingPropertiesPrivate * _private;
}

@property (nonatomic) long long displayBox;
@property (nonatomic) bool enablePageShadows;
@property (nonatomic) bool enableTileUpdates;
@property (nonatomic) double greekingThreshold;
@property (nonatomic) long long interpolationQuality;
@property (setter=forceWebKitMainThread:, nonatomic) bool isForcingWebKitMainThread;
@property (nonatomic) double lineWidthThreshold;
@property (nonatomic, retain) UIColor *pageColor;
@property (setter=setPDFLayerController:, nonatomic) PDFLayerController *pdfLayerController;
@property (setter=setPDFView:, nonatomic) PDFView *pdfView;
@property (nonatomic) double screenScaleFactor;
@property (nonatomic) bool shouldAntiAlias;

- (void).cxx_destruct;
- (void)_notifyPropertyChanged:(long long)arg1;
- (long long)displayBox;
- (bool)enablePageShadows;
- (bool)enableTileUpdates;
- (void)forceWebKitMainThread:(bool)arg1;
- (double)greekingThreshold;
- (id)init;
- (long long)interpolationQuality;
- (bool)isForcingWebKitMainThread;
- (double)lineWidthThreshold;
- (id)pageColor;
- (id)pdfLayerController;
- (id)pdfView;
- (double)screenScaleFactor;
- (void)setDisplayBox:(long long)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setGreekingThreshold:(double)arg1;
- (void)setInterpolationQuality:(long long)arg1;
- (void)setLineWidthThreshold:(double)arg1;
- (void)setPDFLayerController:(id)arg1;
- (void)setPDFView:(id)arg1;
- (void)setPageColor:(id)arg1;
- (void)setScreenScaleFactor:(double)arg1;
- (void)setShouldAntiAlias:(bool)arg1;
- (bool)shouldAntiAlias;

@end
