/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding> {
    int  _cellGridHeight;
    int  _cellGridWidth;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _dominanceGrid;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _path;
    int  _pathLength;
    float  _sampleRadiusX;
    float  _sampleRadiusY;
}

+ (id)pathfinderFromDirectory:(id)arg1;
+ (id)pathfinderFromFile:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1 divisor:(float)arg2;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 divisor:(float)arg2;
- (struct NTKKaleidoscopePathfinderPoint { double x1[4]; })pointForTime:(float)arg1;
- (bool)writeToDirectory:(id)arg1;
- (bool)writeToFile:(id)arg1;

@end
