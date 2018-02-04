/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMosaicGalleryGroupLayout : NSObject {
    SXMosaicGalleryCluster * _cluster;
    SXMosaicGalleryColumnLayout * _columnLayout;
    NSMutableArray * _columnRanges;
    NSArray * _frames;
    double  _height;
    unsigned long long  _numberOfColumns;
}

@property (nonatomic, readonly) SXMosaicGalleryCluster *cluster;
@property (nonatomic, readonly) SXMosaicGalleryColumnLayout *columnLayout;
@property (nonatomic, readonly) NSMutableArray *columnRanges;
@property (nonatomic, readonly) NSArray *frames;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) unsigned long long numberOfColumns;

- (void).cxx_destruct;
- (id)calculateFrames;
- (double)calculateHeight;
- (id)cluster;
- (id)columnLayout;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRangeForItem:(id)arg1;
- (id)columnRanges;
- (double)desiredHeightForItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(unsigned long long)arg1;
- (id)frames;
- (double)height;
- (id)init;
- (id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3;
- (unsigned long long)numberOfColumns;

@end
