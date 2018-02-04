/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCroppedWallpaperInfo : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _scale;
    long long  _source;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) long long source;

- (struct CGPoint { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)scale;
- (long long)source;

@end
