/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetDataSourceManager : NSObject <WGWidgetVisibilityDelegate, _WGDataSourceManager> {
    id /* block */  _didStartBlock;
    bool  _isPublishing;
    <_WGParentDataSourceManager> * _parentDataSourceManager;
    id  _plugInDiscoveryToken;
    WGWidgetDataSource * _widgetDataSource;
    WGWidgetVisibilityManager * _widgetVisbilityManager;
}

@property (nonatomic, readonly) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_WGParentDataSourceManager> *parentDataSourceManager;
@property (getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:, nonatomic, retain) id plugInDiscoveryToken;
@property (readonly) Class superclass;
@property (getter=_widgetVisbilityManager, nonatomic, retain) WGWidgetVisibilityManager *widgetVisbilityManager;

+ (id)_widgetExtensionsDiscoveryAttributes;
+ (void)availableWidgetsWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_beginContinuousPlugInDiscovery;
- (void)_endContinuousPlugInDiscovery;
- (id)_plugInDiscoveryToken;
- (void)_revokeExtensionWithIdentifier:(id)arg1;
- (void)_setPlugInDiscoveryToken:(id)arg1;
- (bool)_shouldPublishWidgetExtension:(id)arg1;
- (void)_start:(id /* block */)arg1;
- (void)_stop:(id /* block */)arg1;
- (void)_updateDataSourceWithExtension:(id)arg1;
- (void)_updatePublishedWidgetExtensions;
- (void)_updatePublishedWidgetExtensions:(id)arg1;
- (id)_widgetVisbilityManager;
- (id)dataSources;
- (id)init;
- (id)parentDataSourceManager;
- (void)setParentDataSourceManager:(id)arg1;
- (void)setWidgetVisbilityManager:(id)arg1;
- (void)widgetVisibilityDidChange;

@end
