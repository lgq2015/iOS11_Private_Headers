/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSArray * _links;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *links;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)_setLinksWithLinksArray:(id)arg1 context:(id)arg2;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)links;
- (id)metricsElementName;
- (id)title;
- (id)valueForMetricsField:(id)arg1;

@end
