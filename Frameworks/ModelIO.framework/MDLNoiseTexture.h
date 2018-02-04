/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLNoiseTexture : MDLTexture {
    float  _frequency;
    bool  _grayScale;
    int  _noiseMode;
    float  _smoothness;
    bool  _vectorNoise;
}

- (id)_generateCellularNoiseAtLevel:(long long)arg1;
- (id)generateDataAtLevel:(long long)arg1;
- (id)initCellularNoiseWithFrequency:(void *)arg1 name:(void *)arg2 textureDimensions:(void *)arg3 channelEncoding:(void *)arg4; // needs 4 arg types, found 3: float, id, long long
- (id)initScalarNoiseWithSmoothness:(void *)arg1 name:(void *)arg2 textureDimensions:(void *)arg3 channelCount:(void *)arg4 channelEncoding:(void *)arg5 grayscale:(void *)arg6; // needs 6 arg types, found 5: float, id, int, long long, bool
- (id)initVectorNoiseWithSmoothness:(void *)arg1 name:(void *)arg2 textureDimensions:(void *)arg3 channelEncoding:(void *)arg4; // needs 4 arg types, found 3: float, id, long long

@end
