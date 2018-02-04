/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMosaicGalleryColumnLayout : NSObject {
    double  _gutter;
    double  _width;
}

@property (nonatomic, readonly) double gutter;
@property (nonatomic, readonly) double width;

- (double)gutter;
- (id)initWithWidth:(double)arg1 gutter:(double)arg2;
- (double)positionForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 numberOfColumns:(unsigned long long)arg2;
- (double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)width;
- (double)widthForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 numberOfColumns:(unsigned long long)arg2;
- (double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;

@end
