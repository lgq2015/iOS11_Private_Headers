/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDPluginDSPDatabase : NSObject {
    NSDictionary * _deviceDatabases;
}

@property (nonatomic, readonly) NSDictionary *deviceDatabases;

- (void).cxx_destruct;
- (id)deviceDatabases;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
