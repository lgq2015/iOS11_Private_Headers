/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDFrameImageCache : NSObject {
    NSMutableArray * mEntries;
}

+ (id)sharedFrameImageCache;

- (void)dealloc;
- (void)didCloseDocument;
- (id)init;
- (struct CGImage { }*)newCachedImageForFrame:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 viewScale:(double)arg3 forCALayer:(bool)arg4 mask:(bool)arg5;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)p_newEntryForFrame:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 viewScale:(double)arg3 createIfNeeded:(bool)arg4;
- (struct CGImage { }*)setCachedImage:(struct CGImage { }*)arg1 forFrame:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 viewScale:(double)arg4 forCALayer:(bool)arg5 mask:(bool)arg6;

@end
