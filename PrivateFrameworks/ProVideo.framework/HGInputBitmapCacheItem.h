/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface HGInputBitmapCacheItem : NSObject {
    struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { 
        struct HGRef<HGBitmap> {} *__begin_; 
        struct HGRef<HGBitmap> {} *__end_; 
        struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { 
            struct HGRef<HGBitmap> {} *__first_; 
        } __end_cap_; 
    }  _bitmaps;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullSize;
    NSDate * _lastUsedTime;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<HGRef<HGBitmap>' */ struct  bitmaps; /* unknown property attribute:  std::__1::allocator<HGRef<HGBitmap> > >=^{HGRef<HGBitmap>}}} */
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullSize;
@property (nonatomic, readonly) NSDate *lastUsedTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x1; struct HGRef<HGBitmap> {} *x2; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x_3_1_1; } x3; })bitmaps;
- (struct CGSize { double x1; double x2; })fullSize;
- (id)initWithHGBitmap:(struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x1; struct HGRef<HGBitmap> {} *x2; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x_3_1_1; } x3; }*)arg1 fullSize:(struct CGSize { double x1; double x2; })arg2;
- (id)lastUsedTime;
- (void)updateLastUsedTime;

@end
