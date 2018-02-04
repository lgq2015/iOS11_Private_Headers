/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEnvironmentsController : NSObject {
    NSArray * _customEnvironmentInfos;
    NSArray * _defaultEnvironmentInfos;
    <GEOEnvironmentsControllerDelegate> * _delegate;
    bool  _enableCustomEnvironments;
    NSArray * _environmentInfos;
}

@property (nonatomic) <GEOEnvironmentsControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addCustomEnvironment:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)environmentInfosForSection:(long long)arg1;
- (id)initEnablingCustomEnvironments:(bool)arg1;
- (void)reloadEnvironments;
- (void)reloadEnvironments:(id /* block */)arg1;
- (void)removeCustomEnvironment:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
