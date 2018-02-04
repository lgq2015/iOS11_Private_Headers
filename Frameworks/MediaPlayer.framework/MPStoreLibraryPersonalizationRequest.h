/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest {
    MPSectionedCollection * _representedObjects;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
    MPModelRequest * _unpersonalizedRequest;
}

@property (nonatomic, retain) MPSectionedCollection *representedObjects;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (nonatomic, readonly, copy) MPModelRequest *unpersonalizedRequest;

+ (id)defaultLibraryView;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)representedObjects;
- (void)setRepresentedObjects:(id)arg1;
- (id)unpersonalizedContentDescriptors;
- (id)unpersonalizedRequest;

@end
