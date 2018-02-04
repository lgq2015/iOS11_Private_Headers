/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFetchedAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider> {
    NSObject<NUAdManagerConfiguration> * _configuration;
}

@property (nonatomic, readonly, copy) NSObject<NUAdManagerConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (void)fetchConfigurationWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end
