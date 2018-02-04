/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFTileSurface : NSObject {
    struct CGImage { } * cgImageRef;
    struct __IOSurface { } * ioSurfaceRef;
    int  pageNumber;
    NSDate * recycledDate;
    int  tileId;
    int  tileSize;
    int  type;
}

- (void).cxx_destruct;

@end
