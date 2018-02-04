/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedMetadataAdContextProvider : NSObject <NUAdContextProvider> {
    FCFeedDescriptor * _feedDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFeedDescriptor *feedDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)feedDescriptor;
- (id)initWithFeedDescriptor:(id)arg1;

@end
