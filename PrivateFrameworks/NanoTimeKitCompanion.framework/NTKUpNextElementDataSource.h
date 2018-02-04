/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementDataSource : NSObject {
    <NTKUpNextElementDataSourceDelegate> * _delegate;
    NSString * _logHeader;
    bool  _running;
    unsigned long long  _state;
    bool  _unlockedSinceBoot;
}

@property (nonatomic) <NTKUpNextElementDataSourceDelegate> *delegate;
@property (nonatomic, readonly) NSString *logHeader;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) unsigned long long state;
@property (getter=hasUnlockedSinceBoot, nonatomic, readonly) bool unlockedSinceBoot;

+ (id)bundleIdentifier;
+ (id)dataSourceClasses;
+ (id)overrideDataSourceImage;
+ (id)overrideLocalizedDataSourceName;
+ (id)sampleContentElements;
+ (bool)wantsAppPrewarm;
+ (bool)wantsLocationInUseAsserton;
+ (bool)wantsReloadForFirstDeviceUnlock;
+ (bool)wantsReloadForSignificantTimeChange;

- (void).cxx_destruct;
- (id)complicationDescriptor;
- (id)delegate;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (bool)hasUnlockedSinceBoot;
- (id)init;
- (bool)isRunning;
- (void)loadLoggingHeader;
- (id)logHeader;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnlockedSinceBoot:(bool)arg1;
- (unsigned long long)state;

@end
