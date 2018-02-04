/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIMappedSurfaceImage : UIImage {
    NSData * _mappedSurfaceData;
}

@property (getter=_mappedSurfaceData, setter=_setMappedSurfaceData:, nonatomic, retain) NSData *_mappedSurfaceData;

+ (id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(bool)arg2;
+ (bool)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2;

- (id)_mappedSurfaceData;
- (void)_setMappedSurfaceData:(id)arg1;
- (void)dealloc;

@end
