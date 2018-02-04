/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    float  mCompressionFactor;
    unsigned long long  mHeight;
    NSString * mImageType;
    TSARenderingExporter<TSKImageExporter> * mRenderingExporter;
    bool  mScaleToFit;
    NSURL * mURL;
    unsigned long long  mWidth;
}

@property (nonatomic) float compressionFactor;
@property (nonatomic) unsigned long long height;
@property (nonatomic, retain) NSString *imageType;
@property (nonatomic) bool scaleToFit;
@property (nonatomic) unsigned long long width;

- (float)compressionFactor;
- (void)dealloc;
- (unsigned long long)height;
- (id)imageType;
- (id)initWithRenderingExporter:(id)arg1;
- (struct CGContext { }*)newCGContextForURL:(id)arg1;
- (void)releaseCGContext:(struct CGContext { }*)arg1;
- (bool)scaleToFit;
- (void)setCompressionFactor:(float)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setImageType:(id)arg1;
- (void)setScaleToFit:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setup;
- (bool)supportsPaging;
- (bool)supportsRenderingQuality;
- (void)teardown;
- (double)viewScale;
- (unsigned long long)width;

@end
