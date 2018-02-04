/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSVideoDerivativeSpecification : NSObject {
    double  _bitRate;
    unsigned long long  _mediaAssetType;
    bool  _powerRequired;
    bool  _useCellular;
    NSString * _videoType;
}

@property (nonatomic, readonly) double bitRate;
@property (nonatomic, readonly) unsigned long long mediaAssetType;
@property (nonatomic, readonly) bool powerRequired;
@property (nonatomic, readonly) bool useCellular;
@property (nonatomic, readonly) NSString *videoType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;

- (double)bitRate;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)mediaAssetType;
- (bool)powerRequired;
- (bool)useCellular;
- (id)videoType;

@end
