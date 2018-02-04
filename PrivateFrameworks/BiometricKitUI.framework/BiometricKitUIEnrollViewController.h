/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate> {
    BiometricKit * _biometricKit;
    <BiometricKitUIEnrollResultDelegate> * _delegate;
    NSMutableDictionary * _properties;
}

@property (nonatomic, retain) BiometricKit *biometricKit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BiometricKitUIEnrollResultDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)biometricKit;
- (void)cancelEnroll;
- (id)delegate;
- (id)propertyForKey:(id)arg1;
- (void)restartEnroll;
- (void)setBiometricKit:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

@end