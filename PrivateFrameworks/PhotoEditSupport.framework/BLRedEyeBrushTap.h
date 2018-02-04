/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject {
    int  _destinationWidth;
    NSDictionary * _eyeRepairData;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    double  _timestamp;
}

@property (nonatomic) int destinationWidth;
@property (nonatomic, retain) NSDictionary *eyeRepairData;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)destinationWidth;
- (id)eyeRepairData;
- (id)init;
- (id)keysToEncode;
- (struct CGPoint { double x1; double x2; })point;
- (void)setDestinationWidth:(int)arg1;
- (void)setEyeRepairData:(id)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
