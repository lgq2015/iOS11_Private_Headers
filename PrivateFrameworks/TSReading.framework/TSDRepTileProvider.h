/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDRepTileProvider : TSDTileProvider

- (void)beginDrawingOperation;
- (bool)canTargetDrawInParallel;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)endDrawingOperation;
- (id)initWithRep:(id)arg1;
- (bool)isTargetOpaque;

@end
