/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMLocalization : NSObject {
    NSDictionary * _localizedStrings;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, readonly) NSDictionary *localizedStrings;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_updateLocalizedStrings;
- (void)dealloc;
- (id)getLocalizedOrCustomString:(id)arg1;
- (id)getLocalizedString:(id)arg1;
- (id)init;
- (id)localizedStrings;
- (id)propertyQueue;

@end
