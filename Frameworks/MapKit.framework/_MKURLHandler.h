/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKURLHandler : NSObject {
    <_MKURLHandlerDelegate> * _delegate;
}

@property (nonatomic) <_MKURLHandlerDelegate> *delegate;

+ (unsigned char)_MKGetURLSchemeTypeFor:(id)arg1;

- (void).cxx_destruct;
- (bool)_handleMapItemHandlesURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(bool)arg3;
- (bool)_handleMapItemURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(bool)arg3;
- (bool)_handleMapItems:(id)arg1 withOptions:(id)arg2 url:(id)arg3 sourceApplication:(id)arg4 originIsActiveWatch:(bool)arg5;
- (bool)_handleMapsURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(bool)arg3;
- (bool)_handleSharedMapURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(bool)arg3;
- (bool)_treatContentProvider:(id)arg1;
- (bool)_treatFavoritesFrom:(id)arg1;
- (void)_treatGenericOptionsFrom:(id)arg1;
- (void)_treatMapTypeFrom:(id)arg1;
- (bool)_treatNavigationDirectionsFrom:(id)arg1;
- (bool)_treatPinPositionFrom:(id)arg1;
- (bool)_treatRegionFrom:(id)arg1;
- (bool)_treatSearchFrom:(id)arg1;
- (bool)_treatSearchRegionFrom:(id)arg1;
- (bool)_treatTesterFrom:(id)arg1;
- (void)_treatTrackingModeFrom:(id)arg1;
- (bool)_treatTransitLineFrom:(id)arg1;
- (void)adjustOptionsForRAP:(id)arg1 options:(id*)arg2;
- (id)delegate;
- (bool)handleURL:(id)arg1 sourceApplication:(id)arg2 originIsActiveWatch:(bool)arg3;
- (void)setDelegate:(id)arg1;

@end
