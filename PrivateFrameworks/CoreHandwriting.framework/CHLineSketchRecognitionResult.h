/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult {
    struct CGPoint { 
        double x; 
        double y; 
    }  _controlPoint;
    bool  _cornerLine;
    int  _endEndpointType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _midpointLocation;
    NSArray * _pathPoints;
    int  _startEndpointType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startLocation;
}

@property (readonly) struct CGPoint { double x1; double x2; } controlPoint;
@property (readonly) bool cornerLine;
@property (readonly) int endEndpointType;
@property (readonly) struct CGPoint { double x1; double x2; } endLocation;
@property (readonly) struct CGPoint { double x1; double x2; } midpointLocation;
@property (readonly) NSArray *pathPoints;
@property (readonly) int startEndpointType;
@property (readonly) struct CGPoint { double x1; double x2; } startLocation;

- (struct CGPoint { double x1; double x2; })controlPoint;
- (bool)cornerLine;
- (void)dealloc;
- (int)endEndpointType;
- (struct CGPoint { double x1; double x2; })endLocation;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(struct CGPoint { double x1; double x2; })arg4 startEndpointType:(int)arg5 endLocation:(struct CGPoint { double x1; double x2; })arg6 endEndpointType:(int)arg7 midPointLocation:(struct CGPoint { double x1; double x2; })arg8 controlPointLocation:(struct CGPoint { double x1; double x2; })arg9;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(struct CGPoint { double x1; double x2; })arg4 startEndpointType:(int)arg5 endLocation:(struct CGPoint { double x1; double x2; })arg6 endEndpointType:(int)arg7 midPointLocation:(struct CGPoint { double x1; double x2; })arg8 controlPointLocation:(struct CGPoint { double x1; double x2; })arg9 pathPoints:(id)arg10;
- (struct CGPoint { double x1; double x2; })midpointLocation;
- (id)pathPoints;
- (int)startEndpointType;
- (struct CGPoint { double x1; double x2; })startLocation;

@end
