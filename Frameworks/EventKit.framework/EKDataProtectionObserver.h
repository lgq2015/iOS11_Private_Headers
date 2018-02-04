/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDataProtectionObserver : NSObject {
    CDBDataProtectionObserver * _dataProtectionObserver;
    id /* block */  _stateChangedCallback;
}

@property (nonatomic, readonly) bool dataIsAccessible;
@property (nonatomic, retain) CDBDataProtectionObserver *dataProtectionObserver;
@property (nonatomic, copy) id /* block */ stateChangedCallback;

+ (id)stateChangedNotificationName;

- (void).cxx_destruct;
- (void)_dataProtectionStateChanged;
- (bool)dataIsAccessible;
- (id)dataProtectionObserver;
- (id)init;
- (void)setDataProtectionObserver:(id)arg1;
- (void)setStateChangedCallback:(id /* block */)arg1;
- (id /* block */)stateChangedCallback;

@end
