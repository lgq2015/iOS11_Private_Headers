/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCCertificateDetailsController : PSListController {
    NSArray * _properties;
}

+ (id)_dateFormatter;

- (void).cxx_destruct;
- (id)_propertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)specifiers;
- (id)specifiersFromCertificateProperties:(id)arg1;
- (id)specifiersFromTrust:(struct __SecTrust { }*)arg1;
- (id)valueForSpecifier:(id)arg1;

@end
