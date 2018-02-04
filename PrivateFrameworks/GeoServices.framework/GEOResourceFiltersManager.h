/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceFiltersManager : NSObject {
    GEOActiveResourceFilters * _activeFilters;
    GEOResourceManifestConfiguration * _configuration;
    <GEOResourceFiltersManagerDelegate> * _delegate;
    NSLock * _lock;
}

@property (nonatomic, readonly) NSSet *activeScales;
@property (nonatomic, readonly) NSSet *activeScenarios;
@property (nonatomic) <GEOResourceFiltersManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_activateFilters:(id /* block */)arg1 setValueBlock:(id /* block */)arg2;
- (void)_deactivateFilters:(id /* block */)arg1;
- (void)_writeToDisk;
- (void)activateScale:(int)arg1;
- (void)activateScenario:(int)arg1;
- (id)activeScales;
- (id)activeScenarios;
- (void)deactivateScale:(int)arg1;
- (void)deactivateScenario:(int)arg1;
- (id)delegate;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
