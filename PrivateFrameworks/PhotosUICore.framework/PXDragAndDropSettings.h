/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDragAndDropSettings : PXSettings {
    bool  _alwaysAllowDragsWithinUserAlbums;
    bool  _dragOutEnabled;
    double  _longPressDuration;
    double  _longPressRadius;
    bool  _oneUpDragOutEnabled;
    long long  _oneUpStyle;
    long long  _reorderCadence;
    bool  _springLoadingEnabled;
    bool  _useData;
    bool  _useFileProvider;
}

@property (nonatomic) bool alwaysAllowDragsWithinUserAlbums;
@property (nonatomic) bool dragOutEnabled;
@property (nonatomic) double longPressDuration;
@property (nonatomic) double longPressRadius;
@property (nonatomic) bool oneUpDragOutEnabled;
@property (nonatomic) long long oneUpStyle;
@property (nonatomic) long long reorderCadence;
@property (nonatomic) bool springLoadingEnabled;
@property (nonatomic) bool useData;
@property (nonatomic) bool useFileProvider;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)alwaysAllowDragsWithinUserAlbums;
- (bool)dragOutEnabled;
- (double)longPressDuration;
- (double)longPressRadius;
- (bool)oneUpDragOutEnabled;
- (long long)oneUpStyle;
- (id)parentSettings;
- (long long)reorderCadence;
- (void)setAlwaysAllowDragsWithinUserAlbums:(bool)arg1;
- (void)setDefaultValues;
- (void)setDragOutEnabled:(bool)arg1;
- (void)setLongPressDuration:(double)arg1;
- (void)setLongPressRadius:(double)arg1;
- (void)setOneUpDragOutEnabled:(bool)arg1;
- (void)setOneUpStyle:(long long)arg1;
- (void)setReorderCadence:(long long)arg1;
- (void)setSpringLoadingEnabled:(bool)arg1;
- (void)setUseData:(bool)arg1;
- (void)setUseFileProvider:(bool)arg1;
- (bool)springLoadingEnabled;
- (bool)useData;
- (bool)useFileProvider;

@end
