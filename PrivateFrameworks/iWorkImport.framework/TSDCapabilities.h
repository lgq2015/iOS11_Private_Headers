/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCapabilities : NSObject {
    long long  _device;
    long long  _platform;
    long long  _renderer;
}

@property (nonatomic, readonly) long long device;
@property (nonatomic, readonly) bool hasLightningPort;
@property (nonatomic, readonly) bool isRendererH3OrBelow;
@property (nonatomic, readonly) bool isRendererH4OrBelow;
@property (nonatomic, readonly) bool isRendererH5OrBelow;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumTextureSize;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) long long renderer;

+ (id)currentCapabilities;

- (long long)device;
- (bool)hasLightningPort;
- (id)init;
- (bool)isRendererH3OrBelow;
- (bool)isRendererH4OrBelow;
- (bool)isRendererH5OrBelow;
- (struct CGSize { double x1; double x2; })maximumTextureSize;
- (void)p_setupDevice;
- (void)p_setupPlatform;
- (long long)platform;
- (long long)renderer;

@end
