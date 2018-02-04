/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIFormatterVendor : NSObject {
    NSNumberFormatter * _numberFormatter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)numberFormatter;

@end
