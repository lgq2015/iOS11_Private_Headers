/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCGestureStylus : SCRCGestureFinger {
    double  _altitude;
    double  _azimuth;
}

- (double)altitude;
- (double)azimuth;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;
- (double)pressure;
- (unsigned long long)type;

@end
