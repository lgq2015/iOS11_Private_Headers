/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeDefaultVendor : NSObject {
    unsigned int  _bodySideBorderColumn;
    unsigned int  _bottomBorderRow;
    unsigned int  _footerRowSeparatorRow;
    unsigned int  _headerColumnSeparatorColumn;
    unsigned int  _headerRowSeparatorRow;
    unsigned int  _headerSideBorderColumn;
    <TSTTableInternalGeometryProviding> * _internalGeometryProvider;
    bool  _isValid;
    <TSTTableStrokeProviding> * _strokeProvider;
    NSPointerArray * _strokeTypeToLayerMap;
    unsigned int  _topBorderRow;
}

@property (nonatomic) unsigned int bodySideBorderColumn;
@property (nonatomic) unsigned int bottomBorderRow;
@property (nonatomic) unsigned int footerRowSeparatorRow;
@property (nonatomic) unsigned int headerColumnSeparatorColumn;
@property (nonatomic) unsigned int headerRowSeparatorRow;
@property (nonatomic) unsigned int headerSideBorderColumn;
@property (nonatomic) <TSTTableInternalGeometryProviding> *internalGeometryProvider;
@property (nonatomic) bool isValid;
@property (nonatomic) <TSTTableStrokeProviding> *strokeProvider;
@property (nonatomic, retain) NSPointerArray *strokeTypeToLayerMap;
@property (nonatomic) unsigned int topBorderRow;

- (unsigned int)bodySideBorderColumn;
- (unsigned int)bottomBorderRow;
- (void)dealloc;
- (unsigned int)footerRowSeparatorRow;
- (unsigned int)headerColumnSeparatorColumn;
- (unsigned int)headerRowSeparatorRow;
- (unsigned int)headerSideBorderColumn;
- (id)initWithStrokeProvider:(id)arg1 internalGeometryProvider:(id)arg2;
- (id)internalGeometryProvider;
- (void)invalidate;
- (bool)isValid;
- (int)p_strokeTypeForColumn:(unsigned int)arg1;
- (int)p_strokeTypeForRow:(unsigned int)arg1;
- (void)p_updateStrokeLayer:(id)arg1 forColumnStrokeType:(int)arg2;
- (void)p_updateStrokeLayer:(id)arg1 forRowStrokeType:(int)arg2;
- (void)setBodySideBorderColumn:(unsigned int)arg1;
- (void)setBottomBorderRow:(unsigned int)arg1;
- (void)setFooterRowSeparatorRow:(unsigned int)arg1;
- (void)setHeaderColumnSeparatorColumn:(unsigned int)arg1;
- (void)setHeaderRowSeparatorRow:(unsigned int)arg1;
- (void)setHeaderSideBorderColumn:(unsigned int)arg1;
- (void)setInternalGeometryProvider:(id)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setStrokeProvider:(id)arg1;
- (void)setStrokeTypeToLayerMap:(id)arg1;
- (void)setTopBorderRow:(unsigned int)arg1;
- (id)strokeLayerForColumn:(unsigned int)arg1;
- (id)strokeLayerForRow:(unsigned int)arg1;
- (id)strokeLayerForStrokeType:(int)arg1;
- (id)strokeProvider;
- (id)strokeTypeToLayerMap;
- (unsigned int)topBorderRow;
- (bool)validate;
- (bool)validateGeometry;

@end
