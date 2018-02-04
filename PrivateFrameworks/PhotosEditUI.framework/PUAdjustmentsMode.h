/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAdjustmentsMode : NSObject {
    long long  __modeType;
    PLPhotoEditMutableModel * _photoEditModel;
    NSArray * _submodes;
    PUAdjustmentsMode * _supermode;
    bool  _toggleable;
    bool  _useAccurateStatistics;
    PUPhotoEditValuesCalculator * _valuesCalculator;
}

@property (nonatomic, readonly) long long _modeType;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) PLPhotoEditMutableModel *photoEditModel;
@property (nonatomic, readonly) long long sliderStyle;
@property (nonatomic, copy) NSArray *submodes;
@property (nonatomic) PUAdjustmentsMode *supermode;
@property (getter=isToggleable, nonatomic, readonly) bool toggleable;
@property (nonatomic) bool useAccurateStatistics;
@property (nonatomic, readonly) PUPhotoEditValuesCalculator *valuesCalculator;

+ (id)newVisibleModesWithPhotoEditModel:(id)arg1 valuesCalculator:(id)arg2;

- (void).cxx_destruct;
- (void)_ensureStatisticsAreReadyForRenderer:(id)arg1;
- (long long)_modeType;
- (bool)_needsStatistics;
- (double)_referenceLevelOfType:(long long)arg1;
- (double)_relativeLevel;
- (double)_relativeLevelInModel:(id)arg1;
- (void)_setRelativeLevel:(double)arg1;
- (double)absoluteLevelForRenderer:(id)arg1;
- (id)adjustmentsModeWithModel:(id)arg1;
- (double)baseLevelForRenderer:(id)arg1;
- (void)copyLevelsFromModel:(id)arg1;
- (id)description;
- (id)icon;
- (double)identityLevel;
- (id)initWithModeType:(long long)arg1 photoEditModel:(id)arg2 valuesCalculator:(id)arg3;
- (id)initWithModeType:(long long)arg1 toggleable:(bool)arg2 photoEditModel:(id)arg3 valuesCalculator:(id)arg4;
- (bool)isEnabled;
- (bool)isToggleable;
- (bool)levelsAreEqualInModel:(id)arg1;
- (id)localizedName;
- (double)maximumLevel;
- (double)minimumLevel;
- (id)photoEditModel;
- (void)setAbsoluteLevel:(double)arg1 forRenderer:(id)arg2;
- (void)setEnabled:(bool)arg1 forRenderer:(id)arg2;
- (void)setSubmodes:(id)arg1;
- (void)setSupermode:(id)arg1;
- (void)setUseAccurateStatistics:(bool)arg1;
- (long long)sliderStyle;
- (id)submodes;
- (id)supermode;
- (bool)useAccurateStatistics;
- (id)valuesCalculator;

@end
