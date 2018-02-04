/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMedusaSettings : PXSettings {
    double  __desiredWidth;
    double  __testIncrement;
    double  __testInterval;
    double  __testStartDelay;
    double  __widthDelay;
}

@property (nonatomic) double _desiredWidth;
@property (nonatomic) double _testIncrement;
@property (nonatomic) double _testInterval;
@property (nonatomic) double _testStartDelay;
@property (nonatomic) double _widthDelay;

+ (void)runSizeTest;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)_desiredWidth;
- (double)_testIncrement;
- (double)_testInterval;
- (double)_testStartDelay;
- (double)_widthDelay;
- (id)parentSettings;
- (void)set_desiredWidth:(double)arg1;
- (void)set_testIncrement:(double)arg1;
- (void)set_testInterval:(double)arg1;
- (void)set_testStartDelay:(double)arg1;
- (void)set_widthDelay:(double)arg1;

@end
