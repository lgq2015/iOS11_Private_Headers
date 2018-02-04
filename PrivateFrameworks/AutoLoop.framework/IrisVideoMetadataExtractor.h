/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface IrisVideoMetadataExtractor : NSObject {
    NSArray * _framesMetadataArray;
    NSDictionary * allMetadata;
    NSMutableArray * desiredIrisKeysArray;
    AVAsset * inMovieAsset;
    bool  processedFile;
    bool  saveAllMetadata;
    NSMutableDictionary * videoTrackMetadataDict;
}

@property (readonly) NSDictionary *allMetadata;
@property (retain) NSMutableArray *desiredIrisKeysArray;
@property (readonly) NSArray *framesMetadataArray;
@property (retain) AVAsset *inMovieAsset;
@property bool processedFile;
@property bool saveAllMetadata;
@property (readonly) NSMutableDictionary *videoTrackMetadataDict;

- (void).cxx_destruct;
- (void)AddFrameDictionary:(id)arg1 withCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toArray:(id)arg3;
- (int)AddInfoFromMetadata:(id)arg1 withTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toArray:(id)arg3;
- (id)allMetadata;
- (id)desiredIrisKeysArray;
- (id)framesMetadataArray;
- (id)inMovieAsset;
- (id)init;
- (int)processFile;
- (int)processStillFrameTimeForAsset:(id)arg1 toDictionary:(id)arg2;
- (int)processVideoTrack:(id)arg1;
- (bool)processedFile;
- (bool)saveAllMetadata;
- (void)setDesiredIrisKeysArray:(id)arg1;
- (void)setInMovieAsset:(id)arg1;
- (void)setProcessedFile:(bool)arg1;
- (void)setSaveAllMetadata:(bool)arg1;
- (id)videoTrackMetadataDict;

@end
