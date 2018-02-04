/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextSolarDataProvider : NSObject {
    <NTKUpNextElementDataSourceDelegate> * _delegate;
    NTKUpNextTimer * _sunriseTimer;
    NTKUpNextTimer * _sunsetTimer;
}

@property (nonatomic) <NTKUpNextElementDataSourceDelegate> *delegate;

+ (id)_countdownTextProviderWithDate:(id)arg1;
+ (id)_elementWithDate:(id)arg1 isSunrise:(bool)arg2 action:(id)arg3;
+ (id)sampleContentElements;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
