/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeakerModel : NSObject {
    CSAsset * _asset;
    bool  _isValid;
    NSString * _languageCode;
    NSString * _modelPath;
    NSString * _utteranceDirectory;
}

@property (nonatomic, readonly) NSArray *enrollmentUtterance;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSString *modelPath;
@property (nonatomic, readonly) bool needsRetrain;
@property (nonatomic, readonly) NSString *utteranceDirectory;

- (void).cxx_destruct;
- (void)_createDirectoryIfNotExist:(id)arg1;
- (bool)_isDirectoryEmpty:(id)arg1;
- (id)_satPath;
- (id)enrollmentUtterance;
- (id)initWithAsset:(id)arg1 languageCode:(id)arg2;
- (bool)isValid;
- (id)modelDirectory;
- (id)modelPath;
- (bool)needsRetrain;
- (id)utteranceDirectory;

@end
