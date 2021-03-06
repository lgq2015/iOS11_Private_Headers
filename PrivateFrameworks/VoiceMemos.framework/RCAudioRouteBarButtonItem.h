/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioRouteBarButtonItem : UIBarButtonItem <UIAppearanceContainer> {
    RCAudioRouteBarButton * _button;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newAudioRouteItem;

- (void).cxx_destruct;
- (void)_routeBarButtonDidChangeNotification:(id)arg1;
- (void)_routeButtonAction;
- (void)_toggleSpeakerAction;
- (void)dealloc;
- (id)initAudioRouteItem;

@end
