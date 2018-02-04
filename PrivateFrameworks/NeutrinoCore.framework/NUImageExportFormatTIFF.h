/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageExportFormatTIFF : NUImageExportFormat {
    long long  _compression;
    long long  _pixelType;
    bool  _preserveAlpha;
}

@property long long compression;
@property long long pixelType;
@property bool preserveAlpha;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (long long)compression;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)depth;
- (id)fileType;
- (id)init;
- (long long)pixelType;
- (bool)preserveAlpha;
- (int)renderFormat;
- (void)setCompression:(long long)arg1;
- (void)setPixelType:(long long)arg1;
- (void)setPreserveAlpha:(bool)arg1;

@end
