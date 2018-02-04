/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface GraphRenderOperation : NSObject {
    bool  _cancelled;
    <GraphRenderOperationDelegate> * _delegate;
    StockChartDisplayMode * _displayMode;
    NSArray * _dottedLinePositions;
    NSArray * _dottedLinePositionsForStyleOnly;
    StockGraphImageSet * _graphImageSet;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _graphInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _graphSize;
    NSArray * _linePointCounts;
    unsigned long long  _maxVolume;
    struct CGPoint { double x1; double x2; } * _points;
    bool  _roundLineCaps;
    double  _volumeBarWidth;
    struct { double x1; unsigned long long x2; } * _volumeBars;
    unsigned int  _volumeCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _volumeGraphSize;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic) <GraphRenderOperationDelegate> *delegate;
@property (nonatomic, retain) StockChartDisplayMode *displayMode;
@property (nonatomic, retain) NSArray *dottedLinePositions;
@property (nonatomic, retain) NSArray *dottedLinePositionsForStyleOnly;
@property (nonatomic, retain) StockGraphImageSet *graphImageSet;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } graphInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } graphSize;
@property (nonatomic, retain) NSArray *linePointCounts;
@property (nonatomic) unsigned long long maxVolume;
@property (nonatomic) struct CGPoint { double x1; double x2; }*points;
@property (nonatomic) bool roundLineCaps;
@property (nonatomic) double volumeBarWidth;
@property (nonatomic) struct { double x1; unsigned long long x2; }*volumeBars;
@property (nonatomic) unsigned int volumeCount;
@property (nonatomic) struct CGSize { double x1; double x2; } volumeGraphSize;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)displayMode;
- (id)dottedLinePositions;
- (id)dottedLinePositionsForStyleOnly;
- (id)graphImageSet;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })graphInsets;
- (struct CGSize { double x1; double x2; })graphSize;
- (bool)isCancelled;
- (struct CGSize { double x1; double x2; })lineGraphSize;
- (id)linePointCounts;
- (unsigned long long)maxVolume;
- (struct CGPoint { double x1; double x2; }*)points;
- (void)render;
- (void)renderGraphLineInContext:(struct CGContext { }*)arg1 withColor:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)renderLineGraph;
- (void)renderVolumeGraph;
- (bool)roundLineCaps;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(id)arg1;
- (void)setDottedLinePositions:(id)arg1;
- (void)setDottedLinePositionsForStyleOnly:(id)arg1;
- (void)setGraphImageSet:(id)arg1;
- (void)setGraphInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGraphSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLinePointCounts:(id)arg1;
- (void)setMaxVolume:(unsigned long long)arg1;
- (void)setPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setRoundLineCaps:(bool)arg1;
- (void)setVolumeBarWidth:(double)arg1;
- (void)setVolumeBars:(struct { double x1; unsigned long long x2; }*)arg1;
- (void)setVolumeCount:(unsigned int)arg1;
- (void)setVolumeGraphSize:(struct CGSize { double x1; double x2; })arg1;
- (double)volumeBarWidth;
- (struct { double x1; unsigned long long x2; }*)volumeBars;
- (unsigned int)volumeCount;
- (struct CGSize { double x1; double x2; })volumeGraphSize;

@end
