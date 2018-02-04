/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedLayoutGenerator : NSObject {
    long long  _cacheHeadLocation;
    long long  _cacheTailLocation;
    /* Warning: unhandled array encoding: '[20@]' */ id  _cachedBatchID;
    struct PXTileInfo { 
        long long index; 
        struct CGSize { 
            double width; 
            double height; 
        } imageSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minimumSize; 
        bool hasCaption; 
        bool isBatchStart; 
    }  _cachedTileInfo;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _captionPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _interTileSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _noCaptionSpacing;
    long long  _numberOfMagneticGuidelines;
    id /* block */  _parsedFrameBlock;
    double  _roundingScale;
    long long  _scanLocation;
    long long  _scanSpecialSequenceCount;
    bool  _scannedBatchHasCaption;
    id  _scannedBatchID;
    bool  _shouldStop;
    id /* block */  _tileBatchIDBlock;
    id /* block */  _tileCaptionSizeBlock;
    long long  _tileCount;
    id /* block */  _tileHasCaptionBlock;
    id /* block */  _tileImageSizeBlock;
    id /* block */  _tileMinimumSizeBlock;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } captionPadding;
@property (nonatomic) struct CGSize { double x1; double x2; } interTileSpacing;
@property (nonatomic, readonly) bool isAtEnd;
@property (nonatomic) struct CGSize { double x1; double x2; } noCaptionSpacing;
@property (nonatomic) long long numberOfMagneticGuidelines;
@property (nonatomic) id /* block */ parsedFrameBlock;
@property (nonatomic) double roundingScale;
@property (nonatomic) long long scanLocation;
@property (nonatomic) long long scanSpecialSequenceCount;
@property (nonatomic) PXFeedLayoutGeneratorScanState *scanState;
@property (nonatomic) bool scannedBatchHasCaption;
@property (nonatomic, retain) id scannedBatchID;
@property (nonatomic) bool shouldStop;
@property (nonatomic, copy) id /* block */ tileBatchIDBlock;
@property (nonatomic, copy) id /* block */ tileCaptionSizeBlock;
@property (nonatomic) long long tileCount;
@property (nonatomic, copy) id /* block */ tileHasCaptionBlock;
@property (nonatomic, copy) id /* block */ tileImageSizeBlock;
@property (nonatomic, copy) id /* block */ tileMinimumSizeBlock;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })captionPadding;
- (struct CGSize { double x1; double x2; })captionSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)didParseTiles;
- (void)enumerateFramesWithBlock:(id /* block */)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })interTileSpacing;
- (bool)isAtEnd;
- (struct CGSize { double x1; double x2; })noCaptionSpacing;
- (long long)numberOfMagneticGuidelines;
- (bool)parseNextTiles;
- (void)parseTiles;
- (void)parsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3;
- (id /* block */)parsedFrameBlock;
- (double)roundingScale;
- (bool)scanAnyTile:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (long long)scanLocation;
- (long long)scanSpecialSequenceCount;
- (id)scanState;
- (bool)scanTile:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 ofType:(long long)arg2;
- (bool)scanTile:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 passingTest:(id /* block */)arg2;
- (bool)scanTile:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 type:(long long*)arg2;
- (bool)scanTileWithHorizontalPanorama:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)scanTileWithLandscapeImage:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)scanTileWithPortraitImage:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)scanTileWithSquareImage:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)scannedBatchHasCaption;
- (id)scannedBatchID;
- (void)setCaptionPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInterTileSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNoCaptionSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfMagneticGuidelines:(long long)arg1;
- (void)setParsedFrameBlock:(id /* block */)arg1;
- (void)setRoundingScale:(double)arg1;
- (void)setScanLocation:(long long)arg1;
- (void)setScanSpecialSequenceCount:(long long)arg1;
- (void)setScanState:(id)arg1;
- (void)setScannedBatchHasCaption:(bool)arg1;
- (void)setScannedBatchID:(id)arg1;
- (void)setShouldStop:(bool)arg1;
- (void)setTileBatchIDBlock:(id /* block */)arg1;
- (void)setTileCaptionSizeBlock:(id /* block */)arg1;
- (void)setTileCount:(long long)arg1;
- (void)setTileHasCaptionBlock:(id /* block */)arg1;
- (void)setTileImageSizeBlock:(id /* block */)arg1;
- (void)setTileMinimumSizeBlock:(id /* block */)arg1;
- (bool)shouldStop;
- (id /* block */)tileBatchIDBlock;
- (id /* block */)tileCaptionSizeBlock;
- (long long)tileCount;
- (id /* block */)tileHasCaptionBlock;
- (id /* block */)tileImageSizeBlock;
- (id /* block */)tileMinimumSizeBlock;
- (double)valueByRounding:(double)arg1 usingMagneticGuidelines:(bool)arg2;
- (void)willParseTiles;

@end
