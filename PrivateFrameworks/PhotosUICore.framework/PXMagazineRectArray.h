/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMagazineRectArray : NSObject <NSCopying> {
    unsigned long long  _currentIndex;
    struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; } * _rects;
    double  _score;
    unsigned long long  _size;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) double score;

- (void)addRect:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1;
- (struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })rectAtIndex:(unsigned long long)arg1;
- (void)removeLastRect;
- (unsigned long long)rowsUsed;
- (double)score;
- (void)setScore:(double)arg1;

@end
