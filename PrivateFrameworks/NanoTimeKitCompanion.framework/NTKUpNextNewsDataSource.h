/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextNewsDataSource : NTKUpNextElementDataSource {
    NTKUpNextElementDataSource * _newsDataSourceProxy;
}

@property (nonatomic, retain) NTKUpNextElementDataSource *newsDataSourceProxy;

+ (id)bundleIdentifier;
+ (Class)nanoNewsDataSourceClass;
+ (id)sampleContentElements;
+ (bool)wantsReloadForSignificantTimeChange;

- (void).cxx_destruct;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (id)init;
- (id)newsDataSourceProxy;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setNewsDataSourceProxy:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setState:(unsigned long long)arg1;

@end
