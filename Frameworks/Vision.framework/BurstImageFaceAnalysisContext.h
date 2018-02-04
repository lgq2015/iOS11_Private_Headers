/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface BurstImageFaceAnalysisContext : NSObject {
    NSMutableDictionary * _curConfig;
    int  _faceIdCounter;
    NSMutableDictionary * _faceIdMapping;
    NSMutableArray * _faceInfoArray;
    NSMutableArray * _faceTimestampArray;
    bool  _forceFaceDetailsEnable;
    int  _lastFaceIndex;
    double  _latestImageTimestamp;
    int  _numFramesNoFaces;
    int  _numFramesSinceFullFaceCore;
    NSMutableDictionary * _renameMapping;
    int  _version;
    bool  forceFaceDetectionEnable;
    double  latestFaceTimestamp;
    double  timeBlinkDetectionDone;
    double  timeFaceDetectionDone;
}

@property (retain) NSMutableDictionary *curConfig;
@property int faceIdCounter;
@property (retain) NSMutableDictionary *faceIdMapping;
@property (retain) NSMutableArray *faceInfoArray;
@property (retain) NSMutableArray *faceTimestampArray;
@property bool forceFaceDetailsEnable;
@property bool forceFaceDetectionEnable;
@property int lastFaceIndex;
@property double latestFaceTimestamp;
@property double latestImageTimestamp;
@property int numFramesNoFaces;
@property int numFramesSinceFullFaceCore;
@property (retain) NSMutableDictionary *renameMapping;
@property double timeBlinkDetectionDone;
@property double timeFaceDetectionDone;
@property int version;

- (void).cxx_destruct;
- (id)_filterFacesToProcess:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageStat:(id)arg3;
- (void)addFaceToArray:(id)arg1;
- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (void)adjustFaceIdsForImageStat:(id)arg1;
- (void)calcFaceScores:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateFaceCoreROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageStat:(id)arg2 needSWFaceDetection:(bool*)arg3;
- (void)calculateFaceFocusInImage:(struct __CVBuffer { }*)arg1 imageStat:(id)arg2;
- (id)curConfig;
- (void)dumpFaceInfoArray;
- (void)extractFacesFromMetadata:(id)arg1;
- (int)faceIdCounter;
- (id)faceIdMapping;
- (id)faceInfoArray;
- (id)faceTimestampArray;
- (int)findFacesInImage:(struct __CVBuffer { }*)arg1 imageStat:(id)arg2;
- (id)findOverlappingFaceStat:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageStat:(id)arg2;
- (bool)forceFaceDetailsEnable;
- (bool)forceFaceDetectionEnable;
- (id)initWithVersion:(id)arg1;
- (int)lastFaceIndex;
- (double)latestFaceTimestamp;
- (double)latestImageTimestamp;
- (int)numFramesNoFaces;
- (int)numFramesSinceFullFaceCore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })padRoiRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddingX:(float)arg2 paddingY:(float)arg3;
- (id)renameMapping;
- (void)setCurConfig:(id)arg1;
- (void)setFaceIdCounter:(int)arg1;
- (void)setFaceIdMapping:(id)arg1;
- (void)setFaceInfoArray:(id)arg1;
- (void)setFaceTimestampArray:(id)arg1;
- (void)setForceFaceDetailsEnable:(bool)arg1;
- (void)setForceFaceDetectionEnable:(bool)arg1;
- (void)setLastFaceIndex:(int)arg1;
- (void)setLatestFaceTimestamp:(double)arg1;
- (void)setLatestImageTimestamp:(double)arg1;
- (void)setNumFramesNoFaces:(int)arg1;
- (void)setNumFramesSinceFullFaceCore:(int)arg1;
- (void)setRenameMapping:(id)arg1;
- (void)setTimeBlinkDetectionDone:(double)arg1;
- (void)setTimeFaceDetectionDone:(double)arg1;
- (void)setVersion:(int)arg1;
- (double)timeBlinkDetectionDone;
- (double)timeFaceDetectionDone;
- (int)version;

@end
