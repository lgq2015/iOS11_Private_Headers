/* made by EzioChiu.
 */

@protocol NUSurfaceStorage <NUImageStorage>

@required

- (long long)readSurfaceInRegion:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NURegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NUIOSurface *, void*
- (long long)readTextureInRegion:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NURegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NUGLTexture *, void*
- (long long)writeSurfaceInRegion:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NURegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NUIOSurface *, void*
- (long long)writeTextureInRegion:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NURegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NUGLTexture *, void*

@end
