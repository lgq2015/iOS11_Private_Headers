/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextMapsDataSource : NTKUpNextElementDataSource {
    NTKUpNextElementDataSource * _proxy;
}

@property (nonatomic, readonly) NTKUpNextElementDataSource *proxy;

+ (id)_homeCommuteElementWithDate:(id)arg1 headerTextProvider:(id)arg2 descriptionTextProvider:(id)arg3;
+ (id)bundleIdentifier;
+ (id)sampleContentElements;
+ (bool)wantsReloadForSignificantTimeChange;

- (void).cxx_destruct;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)pause;
- (id)proxy;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setState:(unsigned long long)arg1;

@end
