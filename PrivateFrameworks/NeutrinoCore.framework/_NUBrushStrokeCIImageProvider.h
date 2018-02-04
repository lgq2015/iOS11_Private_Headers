/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUBrushStrokeCIImageProvider : NSObject {
    bool  _closed;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _extent;
    long long  _pressureMode;
    NUBrushStroke * _stroke;
}

- (void).cxx_destruct;
- (id)initWithStroke:(id)arg1 closed:(bool)arg2 pressureMode:(long long)arg3;
- (void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7;

@end
