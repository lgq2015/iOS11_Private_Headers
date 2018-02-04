/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroSaveVideoActivity : UISaveToCameraRollActivity {
    PHObjectPlaceholder * _placeholderForCreatedAsset;
}

@property (nonatomic, retain) PHObjectPlaceholder *placeholderForCreatedAsset;

- (void).cxx_destruct;
- (id)activityType;
- (id)placeholderForCreatedAsset;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setPlaceholderForCreatedAsset:(id)arg1;

@end
