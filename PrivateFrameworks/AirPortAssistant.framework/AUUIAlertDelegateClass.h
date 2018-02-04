/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AUUIAlertDelegateClass : NSObject <AUUIAlertDelegate> {
    AUUIAlert * uiAlert;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AUUIAlert *uiAlert;

- (bool)auUIAlertCancelAction:(id)arg1;
- (bool)auUIAlertOKAction:(id)arg1;
- (void)dealloc;
- (void)setUiAlert:(id)arg1;
- (id)uiAlert;

@end
