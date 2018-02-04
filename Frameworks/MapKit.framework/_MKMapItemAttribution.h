/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKMapItemAttribution : NSObject {
    GEOMapItemAttribution * _geoAttribution;
}

@property (nonatomic, readonly) NSArray *attributionApps;
@property (nonatomic, readonly) NSArray *attributionURLs;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) bool requiresAttributionInCallout;
@property (nonatomic, readonly) bool shouldOpenInAppStore;

- (void).cxx_destruct;
- (id)attributionApps;
- (id)attributionURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;
- (id)providerID;
- (id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(bool)arg3;
- (id)providerLogoImageForScale:(double)arg1;
- (id)providerName;
- (id)providerSnippetLogoImageForScale:(double)arg1;
- (bool)requiresAttributionInCallout;
- (bool)shouldOpenInAppStore;

@end
