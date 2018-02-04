/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDConfiguration : NSObject {
    NSXPCListener * _anonymousListener;
}

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)anonymousListener;
- (id)classClusterAPIVersion;
- (unsigned long long)connectionType;
- (id)dedDirectory;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)deviceModel;
- (id)deviceName;
- (id)deviceProductType;
- (id)errorDomain;
- (id)identifier;
- (void)invalidateTestListeners;
- (const char *)loggingSubsystem;
- (id)machServiceName;
- (id)platform;
- (void)setAnonymousListener:(id)arg1;
- (id)sharedAnonymousListener;
- (id)uniqueDeviceSpecifier;

@end
